#include<iostream>
#include<ctime>
#include<cstdlib>
#include"UI.cpp"
#include"student.cpp"
#include"info.cpp"
#include"parent.cpp"
typedef long long ll;
using namespace std;
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