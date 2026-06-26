#include<iostream>
#include<ctime>
#include<cstdlib>
typedef long long ll;
using namespace std;
class UI
{
public:
	string set_studentName()
	{
		string name;
		cout << "\t\t\t\t\tWelcome to Lutos University in Minia (LUM)";
		cout << "\n\nEnter your name\n=> ";
		cin >> name;
		return name;
	}
	long long set_studentID()
	{
		long long id;
		cout << "\n\nEnter your ID\n=> ";
		cin >> id;
		cout << "\n\n";
		return id;
	}
	int operation()
	{
		int choise;
		cout << "Choose the Operation\n\n";
		cout << "1.View my Information\n\n2.View Academic Information\n\n=> ";
		cin >> choise;
		return choise;
	}
	void studentInfo(string S_name, ll id, string S_contact, int age, string add, 
		string P_name, string P_contact)
	{
		system("cls");
		cout << "\n==============Student Information==============";
		cout << "\t\t\t==============Parent Information==============\n\n";
		cout << "Student name : " << S_name;
		cout << "\t\t\t\t\t\tParent name : " << P_name;
		cout << "\n\nStudent Phone : " << S_contact;
		cout << "\t\t\t\t\tParent Phone : " << P_contact;
		cout << "\n\nStudent ID : " << id << "\n\n";
		cout << "Student Age : " << age << "\n\n";
		cout << "Adrress : " << add << "\n\n";
	}
	void AcademicInfo(int hours, string Academic_Fees, string bus, string degree)
	{
		system("cls");
		cout << "\n==============Academic Information==============";
		cout << "\n\nRemaining Academic_Fees : " << Academic_Fees;
		cout << "\n\nStudent Degree : " << degree;
		cout << "\n\nRegistered Credit Hours for the Next Semester : " << hours;
		cout << "\n\nBus Subscription : " << bus;
		cout << "\n\n";
	}
	bool another_Operation()
	{
		string answer;
		cout << "\nDo you want to do anther Operation?\n\n=> ";
		cin >> answer;
		for (int i = 0; i < answer.size(); i++)
		{
			answer[i] = tolower(answer[i]);
		}
		if (answer == "yes")
		{
			system("cls");
			return true;
		}
		return false;
	}
};
class Info
{
private:
	int hours;
	string degree, Academic_Fees, bus;
public:
	void set_AcademicInfo()
	{
		int hours[] = { 18, 16, 14, 10, 8 };
		string degree[] = { "Excellent", "Very Good", "Good", "Pass", "Fail"};
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
		string add[] = {"Malawi", "Minia", "Aswan", "Alex", "Cairo"};
		int age[] = {18, 19, 20, 21, 22};
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
class Parent
{
private:
	string parent_name, parent_contact;
public:
	void set_parentInfo()
	{
		string name[] = {"Ahmed", "Mohamed", "Osama", "Amr", "Reda"};
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
int main()
{
	UI ui;
	Info info;
	Student student(ui.set_studentID(), ui.set_studentName());
	Parent parent;
	do
	{
		switch (ui.operation())
		{
		case 1:
			student.set_studentInfo();
			parent.set_parentInfo();
			ui.studentInfo(student.get_studentName(), student.get_studentID(),
				student.get_studentContact(), student.get_studentage(),
				student.get_studentaddress(), parent.get_parentName(), parent.get_parentContact());
			break;
		case 2:
			info.set_AcademicInfo();
			ui.AcademicInfo(info.get_hours(), info.get_Academic_Fees(),
				info.get_bus(), info.get_degree());
		}
	} while (ui.another_Operation());
	return 0;
}