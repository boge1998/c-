#include <graphics.h>  //����ͼ�ο�
#include <Windows.h>
/*	cout<<"1.��վ404����"<<endl;
	cout<<"2.��վ�۸Ĺ���"<<endl;
	cout<<"3.��վ������¼"<<endl;
	cout<<"4.DNS����"<<endl;
	cout<<"5.��������������"<<endl;
	cout<<"6.�˳�"<<endl;
*/
int main(void)  {
	

	initgraph (600,340);
	loadimage (0,("bg.jpg")); //���뱳��ͼƬ
	settextstyle(30,0,("΢���ź�"));
	settextcolor(RGB(255,255,0));//����������ɫ
	rectangle(380,10,590,50);  //���ƾ��ο�
	outtextxy(385,15,("1.��վ404����"));//д���ı�
	rectangle(380,60,590,100);
	outtextxy(385,65,("2.��վ�۸Ĺ���"));
	rectangle(380,110,590,150);
	outtextxy(385,115,("3.��վ������¼"));
	rectangle(380,160,590,200);
	outtextxy(385,165,("4.DNS����"));
	rectangle(380,210,590,250);
	outtextxy(385,215,("5.��������������"));
	rectangle(380,260,590,300);
	outtextxy(385,265,("5.�˳�"));


	system("pause");
	return 0;
	closegraph();
}