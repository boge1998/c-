#include <iostream>
#include <Windows.h>

using namespace std;
//闰年的2月份有29天
//普通闰年: 能被4整除但不能被100整除的年份为
//世纪闰年: 能被400整除

int main(void) {
	int years;		//年份
	int month;		//月份
	bool tag;		//标记
	int bay;			//天数

	cout << "请输入一个年份:";
	cin>>years;
	cout << "请输入一个月份:";
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
	
	cout<<years<<"年"<<month<<"月有:"<<bay<<"天"<<endl;
	

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
	string text[10]={"零", "壹" , "贰", "叁" ,"肆" ,"伍", "陆", "柒", "捌" ,"久" };
	cout<<"请输入一个0~9的数字:";
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
	case 0:cout<< "零"<<endl;
		break;
	case 1: cout<<"壹"<<endl;
		break;
	case 2: cout<<"贰"<<endl;
		break;
	case 3: cout<<"叁"<<endl;;
		break;
	case 4: cout<<"肆"<<endl;;
		break;
	case 5: cout<<"伍"<<endl;;
		break;
	case 6: cout<<"陆"<<endl;
		break;
	case 7: cout<<"柒"<<endl;;
		break;
	case 8: cout<<"捌"<<endl;;
		break;
	case 9: cout<<"久"<<endl;;
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
	cout<<"输入1获取菜单"<<endl;
	cout<<"输入2获取个人信息"<<endl;
	cin>>num;

	switch (num){
		case 1:
			cout<<"酸辣大白菜饭		9元"<<endl;
			cout<<"手撕包菜饭		9元"<<endl;
			cout<<"青瓜火腿饭		10元"<<endl;
			cout<<"青椒炒蛋饭		10元"<<endl;
			cout<<"番茄炒蛋饭		10元"<<endl;
			cout<<"麻婆豆腐饭		10元"<<endl;
			cout<<"酸豆角肉沫饭		10元"<<endl;
			cout<<"洋葱炒蛋饭		10元"<<endl;
			cout<<"酸辣土豆丝饭		10元"<<endl;
			cout<<"小炒茄子饭		11元"<<endl;
			cout<<"韭菜炒蛋饭		11元"<<endl;
		break;
		case 2:
			cout<<"身高:168cm"<<endl;
			cout<<"体重:58kg"<<endl;
			cout<<"年龄:20岁"<<endl;
			cout<<"手机号码:13148850292"<<endl;
			cout<<"QQ号码:546361421"<<endl;
			cout<<"存款:失亿与回亿"<<endl;
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
	int i=0;  //整数类型变量						年龄
	char name; //定义一个字符变量				账号
	double d=0; //定义一个双浮点型变量      体重
	short s=0;   //定义一个短整型变量			身高
	long L=0;    //定义一个厂整形变量			 QQ号
	string password;  //定义一个字符串		  密码
	long long LL=0; //定义一个长长整型变量   计算错误次数
	float f=0;			//定义一个浮点型变量     

	while (1){
		
		cout<<"输入账号:";
		cin>>name;
		fflush(stdin);
		cout<<"输入密码:";
		cin>>password;
		fflush(stdin);

		if(name=='a'&&password=="123456"){
			cout<<"请输入你的年龄:";
			cin>>i;
			fflush(stdin);
			cout<<"请输入你的身高:";
			cin>>s;
			fflush(stdin);
			cout<<"请输入你的体重:";
			cin>>d;
			fflush(stdin);
			cout<<"请输入你的QQ号:";
			cin>>L;
			fflush(stdin);
			cout<<"输入完毕"<<endl;
			break;
		}else{
			LL++;
			cout<<"账号或密码错误请重新输入"<<endl;
			}
	}
	
	if (i>18&&s>165){
		cout<<i<<"岁"<<"身高:"<<s<<"厘米"<<endl;
		cout<<"身材不错哦!"<<endl;
	}else if(i>18&&s<165){
		cout<<"过瘦 要多吃点猪饲料"<<endl;
	}else if(i<18&&s>165){
		cout<<"年纪轻轻长这么高干嘛"<<endl;
	}else if(i<18&&s<165){
		cout<<"年纪轻轻长这么矮干嘛"<<endl;
	}
	cout<<"年龄:"<<i<<endl;
	cout<<"身高:"<<s<<endl;
	cout<<"体重:"<<d<<endl;
	cout<<"QQ:"<<L<<endl;

	cout<<"输入账号密码错误次数:"<<LL<<endl;
	
	

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
	cout<<"请输入账号:";
	cin>>name;
	cout<<"请输入密码:";
	cin>>pwd;
	
	cout<<"1.网站404攻击"<<endl;
	cout<<"2.网站篡改攻击"<<endl;
	cout<<"3.网站攻击记录"<<endl;
	cout<<"4.DNS攻击"<<endl;
	cout<<"5.服务器重启攻击"<<endl;
	cout<<"6.退出"<<endl;
	
	system("pause");
	return 0;
}
*/