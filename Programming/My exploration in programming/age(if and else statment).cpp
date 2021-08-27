#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
int a;
cout<<"how old ru?\n";
cin>>a;
if(a<18){
cout<<"you're not old enough \n";
}
else if(a>30)
{
cout<<"you're so old \n";
}
if (a >= 18 && a <= 30)
{
cout<<"your age is good for us \n";
}
cout<<"thnx";
return 0;
}