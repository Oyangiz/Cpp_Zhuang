#include <iostream>
#include <fstream> 
#include <string>
#include "student.h"
using namespace std;

void change(){
	ifstream infile("student.txt", ios::in);
	for (int i = 0; i<RenShu; i++)
	{
		infile >> stu[i].id >> stu[i].name >> stu[i].sex >> stu[i].others;
	}
	infile.close();

	ofstream outfile("student.txt", ios::out);

	string changeId;
	cout << "请输入你要修改的学生学号:";
	cin >> changeId;

	for (int j=0; j < RenShu;j++)
	if (stu[j].id == changeId){
		cout << "请依次输入修改后的学生学号,姓名,性别,专业,班级:" << endl;
		cin >> stu[j].id >> stu[j].name >> stu[j].sex >> stu[j].others;
	}

	for (int a = 0; a<RenShu; a++){
		outfile << stu[a].id << "\t";
		outfile << stu[a].name << "\t";
		outfile << stu[a].sex << "\t";
		outfile << stu[a].others << endl;
	}
		outfile.close();

		cout << "修改成功!" << endl;
}