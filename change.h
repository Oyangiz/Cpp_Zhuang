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
	cout << "��������Ҫ�޸ĵ�ѧ��ѧ��:";
	cin >> changeId;

	for (int j=0; j < RenShu;j++)
	if (stu[j].id == changeId){
		cout << "�����������޸ĺ��ѧ��ѧ��,����,�Ա�,רҵ,�༶:" << endl;
		cin >> stu[j].id >> stu[j].name >> stu[j].sex >> stu[j].others;
	}

	for (int a = 0; a<RenShu; a++){
		outfile << stu[a].id << "\t";
		outfile << stu[a].name << "\t";
		outfile << stu[a].sex << "\t";
		outfile << stu[a].others << endl;
	}
		outfile.close();

		cout << "�޸ĳɹ�!" << endl;
}