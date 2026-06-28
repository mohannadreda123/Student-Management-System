#include<iostream>
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
	ll set_studentID()
	{
		ll id;
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