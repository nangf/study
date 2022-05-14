#include<iostream>
#include<cstdlib>

using namespace std;

//函数的重载
//int 版本的adds函数，result保存结果
void adds(int &result,int a,int b)
{
    result=a+b;
}

//float 版本的adds函数，result保存结果
void adds(float &result,float a,float b)
{
    result=a+b;
}

int main()
{
    int num1=5,num2=8;
    float num3=5.2,num4=8.2;
    cout<<"num1="<<num1<<endl;
    cout<<"num2="<<num2<<endl;
    cout<<"num3="<<num3<<endl;
    cout<<"num4="<<num4<<endl;
    int intResult=0;
    float floatResult=0;
    //int的adds
    adds(intResult,num1,num2);
    cout<<"num1+num2=" << intResult<<endl;

    //float的adds
    adds(floatResult,num3,num4);
    cout<<"num3+num4="<<floatResult<<endl;
    system("pause");
    return 0;
}