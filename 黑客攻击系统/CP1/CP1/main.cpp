/*
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;


int main(void) {
	int l=0;
	for (int a=0;a<=5;a++) {
		for (int s=0;s<=12;s++) {
			for (int z=0;z<=30;z++) {
				for (int c=0;c<=24;c++) {
					for (int i=0;i<=60;i++) {
						for (int e=0;e<=60;e++) {
							l++;
							cout<<"����"<<a<<"��"<<s<<"����"<<z<<"��"<<c<<"Сʱ"<<i<<"��"<<e<<"��"<<l<<"��"<<endl;
							Sleep(1000);
						}
					}
				}
			}
		}
	}
	system ("pause");
	return 0;
}
*/

#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;

void heike(void) {
	cout<<"��¼�ɹ�"<<endl;
	cout<<"1.��վ404����"<<endl;
	cout<<"2.��վ�۸Ĺ���"<<endl;
	cout<<"3.��վ������¼"<<endl;
	cout<<"4.DNS����"<<endl;
	cout<<"5.��������������"<<endl;
	cout<<"6.�˳�"<<endl;
	system("pause");
}

int main(void)  {
	string name;
	string pwd;

	while (1) {
		system("cls");
		cout<<"�������˺�:";
		cin>>name;
		cout<<"����������:";
		cin>>pwd;
		if (name=="54hk"&&pwd=="123456") {
			heike();
		
			break;
		}else {
			cout<<"�˺Ż��������"<<endl;
			system("pause");
		}
		
	}
	
	system("pause");
	return 0;
}
