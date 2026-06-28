#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
class Parent
{
private:
	string parent_name, parent_contact;
public:
	void set_parentInfo()
	{
		string name[] = { "Ahmed", "Mohamed", "Osama", "Amr", "Reda" };
		string contacts[] = { "01152654762", "01014471365", "01225434276", "01142574163", "01132423646" };
		for (int i = 1; i <= 2; i++)
		{
			srand(time(0));
			int num = rand() % 4;
			switch (i)
			{
			case 1: parent_name = name[num]; break;
			case 2: parent_contact = contacts[num]; break;
			}
		}
	}
	string get_parentName()
	{
		return parent_name;
	}
	string get_parentContact()
	{
		return parent_contact;
	}
};