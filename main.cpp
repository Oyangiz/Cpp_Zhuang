#include <iostream>
#include "add.h"
#include "remove.h"
#include "change.h"
#include "show.h"
using namespace std;

int main(){
	cout << "华信软件学院 POI战队 o欧阳易紫o 版权所有"<<endl;
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
			cout << "输入错误，重新选择" << endl;
			break;
		}
	}

	return 0;
}