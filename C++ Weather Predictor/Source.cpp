/*     C++ 2nd Semester Final Project	CP-107
			Weather Forecaster 
		Started on : August 8,2017
	This is a weather forecaster it forecasts 
	the weather by geeting the temprature for 
	that certain day of past 5 years.
//Name: Osama Ehsan
//Roll No: 16-CP-66																										
//Submitted to: Professor Rizwan
// Subject Code: CP-107  
*/

#include<iostream>
#include<fstream>								
#include<string>
#include<iomanip>
#include<Windows.h>	
#include<vector>									// Header files
using namespace std;
void homescreen();
void specific_date_record();						// Function for search by date
void specific_month_record();						// Function for search by month
void min_max_temp_month();							// Function for Minimum and Maximum Temprature Of the Month
void min_max_temp_year();							// Function for Minimum and Maximum Temprature of the Year
void weather_prediction();							// Prediction
void particular_day();								// Temprature of Particular day of last 5 years
void enter_data();									// Enter next data
fstream file;
char ch;
string months[12] = { "jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec" }, txt = ".txt",year; 
int main()
{
	homescreen();
}
void homescreen()
{
	cout << "\n\n\n\n\n\n\n \t\t\t\t\t\t\t\t\t Loading Design";
	Sleep(50);
	system("cls");
	cout << "\n\n\n\n\n\n\n \t\t\t\t\t\t\t\t\t Loading Design.";
	Sleep(50);
	system("cls"); 
	cout << "\n\n\n\n\n\n\n \t\t\t\t\t\t\t\t\t Loading Design..";
	Sleep(50);
	system("cls"); 
	cout << "\n\n\n\n\n\n\n \t\t\t\t\t\t\t\t\t Loading Design...";
	system("cls");
	cout << "\n\n\n\n\n\n\n \t\t\t\t\t\t\t\t\t Gathering Data";
	Sleep(50);
	system("cls"); 
	cout << "\n\n\n\n\n\n\n \t\t\t\t\t\t\t\t\t Gathering Data.";
	Sleep(50);
	system("cls"); 
	cout << "\n\n\n\n\n\n\n \t\t\t\t\t\t\t\t\t Gathering Data..";
	Sleep(50);
	system("cls"); 
	cout << "\n\n\n\n\n\n\n \t\t\t\t\t\t\t\t\t Gathering Data...";
	Sleep(50);
	system("cls");
	cout << "\n\n\n\n\n\n\n \t\t\t\t\t\t\t\t\t Designing Input Stream";
	Sleep(50);
	system("cls");
	cout << "\n\n\n\n\n\n\n \t\t\t\t\t\t\t\t\t Designing Input Stream.";
	Sleep(50);
	system("cls");
	cout << "\n\n\n\n\n\n\n \t\t\t\t\t\t\t\t\t Designing Input Stream..";
	Sleep(50);
	system("cls");
	cout << "\n\n\n\n\n\n\n \t\t\t\t\t\t\t\t\t Designing Input Stream...";
	system("cls");
	int choice;
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tWelcome to WEATHER FORECAST\n";
	cout << "\t\t\t\t\t\t\t\tPlease choose from one of the options below\n";
	cout << "\t\t\t\t\t\t\t\t1. Weather record of a specific date\n";
	cout << "\t\t\t\t\t\t\t\t2. Weather record of a specific month\n";
	cout << "\t\t\t\t\t\t\t\t3. Minimum and Maximum temprature of the month\n";
	cout << "\t\t\t\t\t\t\t\t4. Minimum and Maximum temprature of the year\n";
	cout << "\t\t\t\t\t\t\t\t5. Weather of last five years of particular day\n";
	cout << "\t\t\t\t\t\t\t\t6. Weather Prediction\n";
	cout << "\t\t\t\t\t\t\t\t7. Enter new data\n";
	cin >> choice;
	system("cls");
	switch (choice)
	{
	case 1:
		specific_date_record();
		break;
	case 2:
		specific_month_record();
		break;
	case 3:
		min_max_temp_month();
		break;
	case 4:
		min_max_temp_year();
		break;
	case 5:
		particular_day();
		break;
	case 6:
		weather_prediction();
		break;
	case 7:
		enter_data();
		break;
	}
}
void specific_date_record()
{
	cout << "\n\n\n\n\n\n\n\n\n\n";
	string temp,year;
	int n,date;
	cout << "\t\t\t\t\tEnter Date\n";
	cin >> date;
	cout << "\t\t\t\t\tEnter the month number\n";
	cin >> n;
	cout << "\t\t\t\t\tEnter the year\n";
	cin >> year;
	file.open(months[n-1]+year + txt);
	
	if (file.fail())
		cout << "fail";
	
	for (int i = 0; i < date; i++)
		getline(file,temp);
	
	cout << "That date's weather record is\n";
	cout << "Date          Temp(C)                Dew Point mm           Humidity%           Sea Level Pressure Pa       Visibility km            W.S km/h      Precipitation   Event\n";
	cout << "        H       A        L      H       A       L       H       A       L         H      A       L      H       A       L       H       A       L                         \n";
	cout << temp;
	cout << "\n Do You Want TO Go Back to Home Screen";
	cin >> ch;
	if (ch == 'y')
	{
		system("cls");
		homescreen();
	}
}
void specific_month_record()
{
	cout << "\n\n\n\n\n\n\n\n\n\n";
	int num;
	string get_data,year;
	cout << "\t\t\t\t\tEnter the Month Number\n";
	cin >> num;
	cout << "\t\t\t\t\tEnter the year\n";
	cin >> year;
	file.open(months[num-1] +year+ txt);
	cout << "Date          Temp(C)                Dew Point %           Humidity%           Sea Level Pressure Pa       Visibility km            W.S km/h      Precipitation   Event\n";
	cout << "        H       A        L      H       A       L       H       A       L         H      A       L      H       A       L       H       A       L                         \n";
	while (! file.eof())
	{
		getline(file, get_data);
		cout << get_data<<endl;
	}
	cout << "\n Do You Want TO Go Back to Home Screen";
	cin >> ch;
	if (ch == 'y')
	{
		system("cls");
		homescreen();
	}


}
void min_max_temp_month()
{
	cout << "\n\n\n\n\n\n\n\n\n\n";
	int no_rows,n, max = -1, min = 100000, date_of_high_temp, date_of_low_temp;
	string get_data;
	cout << "Enter the Month Number\n";
	cin >> n;
	if (n==2)
		no_rows = 28;
	
	if (n == 4 || n == 6 || n == 9  || n == 11)
		no_rows = 30;
	
	if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12)
		no_rows = 31;
	
	cout << "Enter The Year\n";
	cin >> year;
	
	string **data_rec = new string*[no_rows];
	for (int i = 0; i<no_rows; i++)
		data_rec[i] = new string[21];
	
	file.open(months[n-1] +year+ txt);
	if (file.fail())
		cout << "fail after calculating rows";
	
	else
		for (int i = 0; i < no_rows; i++)
			for (int k = 0; k < 21; k++)
				file >> data_rec[i][k];
	
	int* htemp;
	int* ltemp;
	htemp = new int[no_rows];
	ltemp = new int[no_rows];
	for (int j = 0; j < no_rows; j++)
	{
		ltemp[j] = stoi(data_rec[j][3]);
		htemp[j] = atoi(data_rec[j][1].c_str());
	}
	for (int l = 0; l < no_rows; l++)
	{
		if (htemp[l]>max)
		{
			max = htemp[l];
			date_of_high_temp = l;
		}
		if (ltemp[l] < min)
		{
			min = ltemp[l];
			date_of_low_temp = l;
		}
	}
	cout << "The Highest temp of the Month is " << max << " and it is at " << date_of_high_temp + 1 << "th of that month\n";
	cout << "The Lowest temp of the Month is " << min << " and it is at " << date_of_low_temp + 1 << "th of that month";
	cout << "\n Do You Want TO Go Back to Home Screen";
	cin >> ch;
	if (ch == 'y')
	{
		system("cls");
		homescreen();
	}
}
void min_max_temp_year()
{
	vector<int>htempv;
	vector<int>ltempv;
	std::cout << "\n\n\n\n\n\n\n\n\n\n";
	int no_rows = 0, j = 0, max = -1, min = 100000, date_of_high_temp, date_of_low_temp;
	fstream file;
	std::cout << "Enter the Year\n";
	cin >> year;
	int* htemp;
	int* ltemp;
	htemp = new int[no_rows];
	ltemp = new int[no_rows];

	for (int n = 1; n <= 12; n++)
	{
		if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 12)
			no_rows = 31;
		
		else
		if (n == 4 || n == 6 || n == 5 || n == 9 || n == 10 || n == 11)
			no_rows = 30;
		
		else
		if (n == 2)
			no_rows = 28;
		
		string **data_rec = new string*[no_rows];
		for (int i = 0; i < no_rows; i++)
			data_rec[i] = new string[21];
		
		file.open(months[n - 1] + year + txt);
		if (!file.is_open())
			std::cout << "fail after calculating rows";
		
		else
			for (int i = 0; i < no_rows; i++)
				for (int k = 0; k < 21; k++)
					file >> data_rec[i][k];
		
		for (; j < no_rows; j++)
		{
			ltemp[j]=(atoi(data_rec[j][3].c_str()));
			htemp[j]=(atoi(data_rec[j][1].c_str()));
		}
		}
		for (int l = 0; l < no_rows; l++)
		{
			if (htemp[l]>max)
			{
				max = htempv[l];
				date_of_high_temp = l;
			}
			if (ltemp[l] > 0)
			{
				if (ltemp[l] < min)
				{

					min = ltempv[l];
					date_of_low_temp = l;
				}
			}
		}
		std::cout << "The Highest temp of the Month is " << max << " and it is at " << date_of_high_temp + 1 << "th of that month\n";
		std::cout << "The Lowest temp of the Month is " << min << " and it is at " << date_of_low_temp + 1 << "th of that month";
		std::cout << "\n Do You Want TO Go Back to Home Screen";
		cin >> ch;
		if (ch == 'y')
		{
			system("cls");
			homescreen();
		}
}
void particular_day()
{
	cout << "\n\n\n\n\n\n\n\n\n\n";
	int m_n;
	string data;
	string yearforthis[6] = { "2012", "2013", "2014", "2015", "2016", "2017" };
	int date;
	cout << "Enter Date";
	cin >> date;
	cout << "Enter Month Number";
	cin >> m_n;
	cout << "Date          Temp(C)                Dew Point mm           Humidity%           Sea Level Pressure Pa       Visibility km            W.S km/h      Precipitation   Event\n";
	cout << "        H       A        L      H       A       L       H       A       L         H      A       L      H       A       L       H       A       L                         \n";

	for (int i = 0; i < 6; i++)
	{
		file.open(months[m_n - 1] + yearforthis[i] + txt);
		while (!file.eof())
		{
			for (int k = 0; k < date; k++)
				getline(file, data);
			
			cout << data<<endl;
			file.close();
		}
	}
	if (ch == 'y')
	{
		system("cls");
		homescreen();
	}
}
void weather_prediction()
{
	cout << "\n\n\n\n\n\n\n\n\n\n";
	int m_n;
	int predict_ht[6], predict_at[6], predict_lt[6],ht=0,at=0,lt=0;
	string old_ht[6], old_lt[6], old_at[6];
	string data;
	string yearforthis[6] = { "2012", "2013", "2014", "2015", "2016", "2017" };
	int date;
	cout << "Enter Date";
	cin >> date;
	cout << "Enter Month Number";
	cin >> m_n;
	for (int i = 0; i < 6; i++)
	{
		file.open(months[m_n - 1] + yearforthis[i] + txt);
			for (int k = 0; k < date; k++)
				getline(file, data);
			
			old_ht[i] = data.substr(2, 2);
			old_at[i] = data.substr(5, 2);
			old_lt[i] = data.substr(8, 2);
			file.close();
	}
	for (int k = 0; k < 6; k++)
	{
		predict_ht[k] = atoi(old_ht[k].c_str());
		predict_at[k] = atoi(old_at[k].c_str());
		predict_lt[k] = atoi(old_lt[k].c_str());
		ht = ht + predict_at[k];
		at = at + predict_at[k];
		lt = lt + predict_lt[k];
	}
	cout << "Predicted temp of desired date is:\n";
	cout << "High Temp=" << ht/6<<"\n";
	cout << "Average Temp=" << at/6 << "\n";
	cout << "Low Temp=" << lt/6 << "\n";
	if (ch == 'y')
	{
		system("cls");
		homescreen();
	}
}
void enter_data()
{
	char ch;
	string date,year;
	int month;
	string sstr;
	cout << "Enter the date";
	cin >> date;
	cout << "Enter Month Number";
	cin >> month;
	cout << "Enter year";
	cin >> year;
	cout << "Enter data as following format\n and dont leave blank spaces (use 0 instead)\n";
abc:
	cout << "Date          Temp(C)                Dew Point mm           Humidity%           Sea Level Pressure Pa       Visibility km            W.S km/h      Precipitation   Event\n";
	cout << "H       A        L      H       A       L       H       A       L         H      A       L      H       A       L       H       A       L                         \n";
	cin.ignore();
	getline(cin, sstr);
	cout << "are you satisfied with your entered data ?";
	cin >> ch;
	if (ch == 'n' || ch == 'N')
		goto abc;
	file.open(months[month - 1] + year + txt, ios_base::app);
		file <<date<< sstr;
}