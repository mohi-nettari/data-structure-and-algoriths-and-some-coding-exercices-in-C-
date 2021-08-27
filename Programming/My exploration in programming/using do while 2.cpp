#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
#include<map>
using namespace std; 
int main()
{
int b=1;
string name;
cout<<"enter a name: ";
cin>>name;
int x;
x=name.size();

do{

cout<<"1";
b++;
}while(b>=x);
return 0;
}