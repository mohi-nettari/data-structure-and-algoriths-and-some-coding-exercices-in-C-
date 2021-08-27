#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
int x;
int y;

cout<<"x:";
cin>>x;
cout<<"y:";
cin>>y;
int z=pow((pow(x,2)+x+5),2)/(x+y+5);
cout <<"z="<<z<<endl;

int a;
int b;

cout<<"a:";
cin>>a;
cout<<"b:";
cin>>b;
int c=a+5/b-3;
cout <<"c:"<<c;


return 0;
}