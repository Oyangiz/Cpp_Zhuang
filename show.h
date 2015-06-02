#include <iostream>
#include <fstream> 
#include <string>
#include "student.h"
using namespace std;

void show(){
	ifstream infile("student.txt", ios::in);
	for (int i = 0; i<RenShu; i++)
	{
		infile >> stu[i].id >> stu[i].name >> stu[i].sex >> stu[i].others;
	}
	infile.close();

	cout << "学号\t姓名\t性别\t其他信息" << endl;
	for (int i = 0; i<RenShu; i++)
	{
		cout << stu[i].id << "\t";
		cout << stu[i].name << "\t";
		cout << stu[i].sex << "\t";
		cout << stu[i].others <<endl;
	}
}