#include<windows.h>
#include<cstdio>
#include<iostream>
#define dou 261.632
#define re 293.672
#define mi 329.636
#define fa 349.237
#define so 392.005
#define la 440.010
#define si 493.895
#define dou1 523.264
#define re1 587.344
#define mi1 659.271
#define fa1 698.473
#define so1 784.010
#define la1 880.021
#define si1 987.790
#define time 750
using namespace std;
int main()
{
	cout<<"东湖之滨"<<endl;
	Beep(mi,time*0.5);Beep(fa,time*0.5);Beep(so,time*0.5);Beep(la,time*0.5);Beep(so,time*1.5);
	Sleep(time*0.5);
	cout<<"珞珈山上"<<endl;
	Beep(re,time*0.5);Beep(fa,time*0.5);Beep(mi,time*0.5);Beep(re,time*0.5);Beep(dou,time*1.5);
	Sleep(time*0.5);
	cout<<"这是我们亲爱的学堂"<<endl;
	Beep(mi,time*0.5);Beep(fa,time*0.5);Beep(so,time*0.5);Beep(so,time*0.5);Beep(so,time*0.5);Beep(mi1,time*0.5);Beep(re1,time*0.5);Beep(dou1,time*0.9);
	Sleep(time*0.1);
	Beep(si,time*0.5);Beep(la,time*0.5);Beep(re1,time*0.5);Beep(dou1,time*0.5);Beep(so,time*2);
	Sleep(time*0.5);
	cout<<"百年沧桑"<<endl;
	Beep(dou1,time*0.5);Beep(si,time*0.5);Beep(la,time*0.5);Beep(so,time*0.5);Beep(la,time*1.5);
	Sleep(time*0.5);
	cout<<"弘毅自强"<<endl;
	Beep(so,time*0.5);Beep(dou,time*0.5);Beep(fa,time*0.5);Beep(mi,time*0.5);Beep(re,time*1.5);
	Sleep(time*0.5);
	cout<<"根深叶茂育桃李"<<endl;
	Beep(mi,time*0.5);Beep(re,time*0.5);Beep(mi,time*0.5);Beep(fa,time*0.5);Beep(so,time*0.5);Beep(la,time*0.5);Beep(so,time*0.8);
	Sleep(time*0.2);
	cout<<"满园芬芳"<<endl;
	Beep(dou1,time*0.5);Beep(dou1,time*0.5);Beep(si,time*0.5);Beep(la,time*0.5);Beep(re1,time*1.5);
	Sleep(time*0.5);
	Sleep(time*0.5);
	for(int i=0;i<=1;i++)
	{
		cout<<"啊~~~"<<endl;
		Beep(mi1,time*2.5);
		Beep(re1,time*0.75);Beep(dou1,time*0.25);Beep(mi1,time*2.8);
		Sleep(time*0.2);
		cout<<"美丽的珞珈山"<<endl;
		Beep(re1,time*0.75);Beep(dou1,time*0.25);Beep(la,time*2);Beep(la,time*0.5);Beep(si,time*0.5);Beep(dou1,time*0.5);Beep(la,time*0.5);Beep(so,time*3.5);
		Sleep(time*0.5);
		cout<<"多少雄鹰竞翱翔"<<endl;
		Beep(mi,time*1.5);Beep(fa,time*0.5);Beep(mi,time*0.75);Beep(re,time*0.25);Beep(dou,time*1.5);Beep(dou1,time*0.5);Beep(dou1,time*0.5);Beep(dou1,time*0.75);Beep(si,time*0.25);Beep(la,time*1.5);
		Sleep(time*0.5);
		cout<<"竞翱翔"<<endl;
		Beep(so,time);Beep(mi1,time);Beep(re1,time*1.5);Beep(dou1,time*0.5);Beep(dou1,time*3.5);
		Sleep(time*0.5);
	}
}
