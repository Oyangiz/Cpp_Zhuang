#include <iostream>
#include <fstream> 
#include <string>
#include "student.h"
using namespace std;
void add(){
	string id,name, sex, others;
	ofstream outfile("student.txt", ios::app);

	cout << "请依次输入要添加的学生学号,姓名,性别和其他信息:" << endl;
	cin >> id >> name >> sex >> others;
	outfile << id << "\t";
	outfile << name << "\t";
	outfile << sex << "\t";
	outfile << others <<endl;
	outfile.close();
	cout << "添加成功!" << endl;

	RenShu++;
}