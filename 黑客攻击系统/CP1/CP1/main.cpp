#include <iostream>
#include <Windows.h>

using namespace std;
//�����2�·���29��
//��ͨ����: �ܱ�4���������ܱ�100���������Ϊ
//��������: �ܱ�400����

int main(void) {
	int years;		//���
	int month;		//�·�
	bool tag;		//���
	int bay;			//����

	cout << "������һ�����:";
	cin>>years;
	cout << "������һ���·�:";
	cin>>month;

	if (years % 4==0 && years % 100!=0) {
		tag=true;
	}else if (years % 400 ==0){
		tag=true;
	}else {
		tag=false;
	}

	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		bay=31;
		break;
	case 2:
		bay=tag ? 29:28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		bay=30;
		break;
	default:;
	}
	
	cout<<years<<"��"<<month<<"����:"<<bay<<"��"<<endl;
	

	cout << a;
	system("pause");
	return 0;
}

/*
#include <Windows.h>
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(void) {
	int sz;
	string text[10]={"��", "Ҽ" , "��", "��" ,"��" ,"��", "½", "��", "��" ,"��" };
	cout<<"������һ��0~9������:";
	cin>>sz;

	if (sz>=0&&sz<=9) { 
		cout << text[sz]<<endl;
	}
	/*
	int digital=0;
	
	while(1){
	cin>>digital;
	
	if(cin>>digital==false){
	break;
	}else{
	switch (digital){
	case 0:cout<< "��"<<endl;
		break;
	case 1: cout<<"Ҽ"<<endl;
		break;
	case 2: cout<<"��"<<endl;
		break;
	case 3: cout<<"��"<<endl;;
		break;
	case 4: cout<<"��"<<endl;;
		break;
	case 5: cout<<"��"<<endl;;
		break;
	case 6: cout<<"½"<<endl;
		break;
	case 7: cout<<"��"<<endl;;
		break;
	case 8: cout<<"��"<<endl;;
		break;
	case 9: cout<<"��"<<endl;;
		break;
		fflush(stdin);
	default:;
			}
		}
	}
	/*if (s>=97 && s<=122) {
		s=s-97+65;
	}else if (s>=65 && s<=90) {
		s=s-65+97;
	}

	cout<< s <<endl;


	system("pause");
	return 0;
} */

/*
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main(void) {
	int num;
	cout<<"����1��ȡ�˵�"<<endl;
	cout<<"����2��ȡ������Ϣ"<<endl;
	cin>>num;

	switch (num){
		case 1:
			cout<<"������ײ˷�		9Ԫ"<<endl;
			cout<<"��˺���˷�		9Ԫ"<<endl;
			cout<<"��ϻ��ȷ�		10Ԫ"<<endl;
			cout<<"�ཷ������		10Ԫ"<<endl;
			cout<<"���ѳ�����		10Ԫ"<<endl;
			cout<<"���Ŷ�����		10Ԫ"<<endl;
			cout<<"�ᶹ����ĭ��		10Ԫ"<<endl;
			cout<<"��г�����		10Ԫ"<<endl;
			cout<<"��������˿��		10Ԫ"<<endl;
			cout<<"С�����ӷ�		11Ԫ"<<endl;
			cout<<"�²˳�����		11Ԫ"<<endl;
		break;
		case 2:
			cout<<"���:168cm"<<endl;
			cout<<"����:58kg"<<endl;
			cout<<"����:20��"<<endl;
			cout<<"�ֻ�����:13148850292"<<endl;
			cout<<"QQ����:546361421"<<endl;
			cout<<"���:ʧ�������"<<endl;
		break;
	}
	system("pause");
	return 0;
}

/*
#include <iostream>
#include <Windows.h>
#include <string>
#include <string.h>
#include <stdio.h>

using namespace std;
int main(void) {
	int i=0;  //�������ͱ���						����
	char name; //����һ���ַ�����				�˺�
	double d=0; //����һ��˫�����ͱ���      ����
	short s=0;   //����һ�������ͱ���			���
	long L=0;    //����һ�������α���			 QQ��
	string password;  //����һ���ַ���		  ����
	long long LL=0; //����һ���������ͱ���   ����������
	float f=0;			//����һ�������ͱ���     

	while (1){
		
		cout<<"�����˺�:";
		cin>>name;
		fflush(stdin);
		cout<<"��������:";
		cin>>password;
		fflush(stdin);

		if(name=='a'&&password=="123456"){
			cout<<"�������������:";
			cin>>i;
			fflush(stdin);
			cout<<"������������:";
			cin>>s;
			fflush(stdin);
			cout<<"�������������:";
			cin>>d;
			fflush(stdin);
			cout<<"���������QQ��:";
			cin>>L;
			fflush(stdin);
			cout<<"�������"<<endl;
			break;
		}else{
			LL++;
			cout<<"�˺Ż������������������"<<endl;
			}
	}
	
	if (i>18&&s>165){
		cout<<i<<"��"<<"���:"<<s<<"����"<<endl;
		cout<<"��Ĳ���Ŷ!"<<endl;
	}else if(i>18&&s<165){
		cout<<"���� Ҫ��Ե�������"<<endl;
	}else if(i<18&&s>165){
		cout<<"������᳤��ô�߸���"<<endl;
	}else if(i<18&&s<165){
		cout<<"������᳤��ô������"<<endl;
	}
	cout<<"����:"<<i<<endl;
	cout<<"���:"<<s<<endl;
	cout<<"����:"<<d<<endl;
	cout<<"QQ:"<<L<<endl;

	cout<<"�����˺�����������:"<<LL<<endl;
	
	

	system("pause");
	return 0;


	
}

/*
#include <Windows.h>
#include <iostream>

using namespace std;
int main(void)  {
	
	char name;
	int pwd;
	cout<<"�������˺�:";
	cin>>name;
	cout<<"����������:";
	cin>>pwd;
	
	cout<<"1.��վ404����"<<endl;
	cout<<"2.��վ�۸Ĺ���"<<endl;
	cout<<"3.��վ������¼"<<endl;
	cout<<"4.DNS����"<<endl;
	cout<<"5.��������������"<<endl;
	cout<<"6.�˳�"<<endl;
	
	system("pause");
	return 0;
}
*/