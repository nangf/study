#include<iostream>
#include<cstdlib>

using namespace std;

//两个整数相加的函数

int adds(int a,int b) {return a+b;}

//两个整形相减的函数

int subs(int a,int b) {return a-b;}



int main()
{
    //定义一些变量存储数字
    int num1=2,num2=3;
    float num3=0.5,num4=2.3;
    double num5=100.5,num6=102.3;

    //显示变量
    cout<<"num1:"<<num1<<endl;
    cout<<"num2:"<<num2<<endl;
    cout<<"num3:"<<num3<<endl;
    cout<<"num4:"<<num4<<endl;

    //调用adds
    cout<<"num1+num2:"<<adds(num1,num2)<<endl;
    //调用subs
    cout<<"num1-num2:"<<subs(num1,num2)<<endl;
    //不同类型的调用
    //进行隐式转换成int再调用
    cout<<"num3-num4:"<<subs(num3,num4)<<endl;
    system("pause");
    return 0;
}