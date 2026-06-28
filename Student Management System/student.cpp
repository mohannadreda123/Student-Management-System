#include<iostream>
#include<ctime>
#include<cstdlib>
typedef long long ll;
using namespace std;
class Student
{
private:
	string student_name, address, student_contact;
	int age;
	ll ID;
public:
	Student() {}
	Student(long long id, string name)
	{
		student_name = name;
		ID = id;
	}
	void set_studentInfo()
	{
		string add[] = { "Malawi", "Minia", "Aswan", "Alex", "Cairo" };
		int age[] = { 18, 19, 20, 21, 22 };
		string contacts[] = { "01152145762", "01014725365", "01515234276", "01032574163", "01147523646" };
		for (int i = 1; i <= 3; i++)
		{
			srand(time(0));
			int num = rand() % 4;
			switch (i)
			{
			case 1: address = add[num]; break;
			case 2: this->age = age[num]; break;
			case 3: student_contact = contacts[num]; break;
			}
		}
	}
	string get_studentName()
	{
		return student_name;
	}
	ll get_studentID()
	{
		return ID;
	}
	string get_studentContact()
	{
		return student_contact;
	}
	string get_studentaddress()
	{
		return address;
	}
	int get_studentage()
	{
		return age;
	}
};