#include <iostream>
#include "add.h"
#include "remove.h"
#include "change.h"
#include "show.h"
using namespace std;

int main(){
	cout << "�������ѧԺ POIս�� oŷ������o ��Ȩ����"<<endl;
	cout << "www.oyangiz.com" << endl;

	ifstream infile("student.txt", ios::in);
	for (int i = 0; i<RenShu; i++)
	{
		infile >> stu[i].id >> stu[i].name >> stu[i].sex >> stu[i].others;
	}
	infile.close();

	int n;
	int stopFlag=1;

	while (stopFlag == 1){
		cout << "1.add 2.remove 3.change 4.show 0.exit"<<endl;
		cin >> n;

		switch (n){
		case 0:
			stopFlag = 0;
			break;
		case 1:
			add();
			break;
		case 2:
			remove();
			break;
		case 3:
			change();
			break;
		case 4:
			show();
			break;
		default:
			cout << "�����������ѡ��" << endl;
			break;
		}
	}

	return 0;
}