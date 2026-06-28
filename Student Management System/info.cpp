#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
class Info
{
private:
	int hours;
	string degree, Academic_Fees, bus;
public:
	void set_AcademicInfo()
	{
		int hours[] = { 18, 16, 14, 10, 8 };
		string degree[] = { "Excellent", "Very Good", "Good", "Pass", "Fail" };
		string Academic_Fees[] = { "70,000$", "10,000$", "30,000$", "Fees Paid", "100,000$" };
		for (int i = 1; i <= 2; i++)
		{
			srand(time(0));
			int num = rand() % 4;
			switch (i)
			{
			case 1:
				this->hours = hours[num];
				this->degree = degree[num];
				break;
			case 2: this->Academic_Fees = Academic_Fees[num];
				break;
			}
		}
		srand(time(0));
		int num = rand() % 2;
		string bus;
		if (num == 1)
		{
			bus = "Bus Subscriber";
		}
		else
		{
			bus = "Non - bus subscriber";
		}
		this->bus = bus;
	}
	int get_hours()
	{
		return hours;
	}
	string get_degree()
	{
		return degree;
	}
	string get_bus()
	{
		return bus;
	}
	string get_Academic_Fees()
	{
		return Academic_Fees;
	}
};