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
							cout<<"ÏëÄã"<<a<<"Äê"<<s<<"¸öÔÂ"<<z<<"Ìì"<<c<<"Ð¡Ê±"<<i<<"·Ö"<<e<<"Ãë"<<l<<"´Î"<<endl;
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
	cout<<"µÇÂ¼³É¹¦"<<endl;
	cout<<"1.ÍøÕ¾404¹¥»÷"<<endl;
	cout<<"2.ÍøÕ¾´Û¸Ä¹¥»÷"<<endl;
	cout<<"3.ÍøÕ¾¹¥»÷¼ÇÂ¼"<<endl;
	cout<<"4.DNS¹¥»÷"<<endl;
	cout<<"5.·þÎñÆ÷ÖØÆô¹¥»÷"<<endl;
	cout<<"6.ÍË³ö"<<endl;
	system("pause");
}

int main(void)  {
	string name;
	string pwd;

	while (1) {
		system("cls");
		cout<<"ÇëÊäÈëÕËºÅ:";
		cin>>name;
		cout<<"ÇëÊäÈëÃÜÂë:";
		cin>>pwd;
		if (name=="54hk"&&pwd=="123456") {
			heike();
		
			break;
		}else {
			cout<<"ÕËºÅ»òÃÜÂë´íÎó"<<endl;
			system("pause");
		}
		
	}
	
	system("pause");
	return 0;
}
