#include <iostream>
#include <fstream> 
#include <string>
#include "student.h"
using namespace std;
void add(){
	string id,name, sex, others;
	ofstream outfile("student.txt", ios::app);

	cout << "����������Ҫ��ӵ�ѧ��ѧ��,����,�Ա��������Ϣ:" << endl;
	cin >> id >> name >> sex >> others;
	outfile << id << "\t";
	outfile << name << "\t";
	outfile << sex << "\t";
	outfile << others <<endl;
	outfile.close();
	cout << "��ӳɹ�!" << endl;

	RenShu++;
}