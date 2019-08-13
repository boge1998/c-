#include <graphics.h>  //引用图形库
#include <Windows.h>
/*	cout<<"1.网站404攻击"<<endl;
	cout<<"2.网站篡改攻击"<<endl;
	cout<<"3.网站攻击记录"<<endl;
	cout<<"4.DNS攻击"<<endl;
	cout<<"5.服务器重启攻击"<<endl;
	cout<<"6.退出"<<endl;
*/
int main(void)  {
	

	initgraph (600,340);
	loadimage (0,("bg.jpg")); //插入背景图片
	settextstyle(30,0,("微软雅黑"));
	settextcolor(RGB(255,255,0));//设置字体颜色
	rectangle(380,10,590,50);  //绘制矩形框
	outtextxy(385,15,("1.网站404攻击"));//写入文本
	rectangle(380,60,590,100);
	outtextxy(385,65,("2.网站篡改攻击"));
	rectangle(380,110,590,150);
	outtextxy(385,115,("3.网站攻击记录"));
	rectangle(380,160,590,200);
	outtextxy(385,165,("4.DNS攻击"));
	rectangle(380,210,590,250);
	outtextxy(385,215,("5.服务器重启攻击"));
	rectangle(380,260,590,300);
	outtextxy(385,265,("5.退出"));


	system("pause");
	return 0;
	closegraph();
}