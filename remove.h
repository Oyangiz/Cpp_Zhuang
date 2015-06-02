#include <iostream>
#include <fstream> 
#include <string>
#include "student.h"
using namespace std;
void remove(){
	ifstream infile("student.txt", ios::in);
	for (int i = 0; i<RenShu; i++)
	{
		infile >> stu[i].id >> stu[i].name >> stu[i].sex >> stu[i].others;
	}
	infile.close();

	ofstream outfile("student.txt");
	string delId;	
	cout << "请输入你要删除的学生学号:";
	cin >> delId;

	for (int i = 0; i<RenShu; i++){
		if (stu[i].id != delId)
		{
			outfile << stu[i].id << "\t";
			outfile << stu[i].name << "\t";
			outfile << stu[i].sex << "\t";
			outfile << stu[i].others <<endl;
		}
	}
	outfile.close();
	RenShu--;
}

