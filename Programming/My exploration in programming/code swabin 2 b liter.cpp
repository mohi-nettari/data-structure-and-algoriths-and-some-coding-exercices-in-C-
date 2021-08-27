#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
using namespace std; 
int main()
{
double swabin=2.7;
int javel=1;
int sanibo=1;

int d;
int b;
int p;
cout<<"how many swabin u took:";
cin>>d;
cout<<"how many javel u took:";
cin>>b;
cout<<"how many sanibo u took:";
cin>>p;

cout<<"\n the price is:";
cout<<(d*swabin)+(b*javel)+(p*sanibo);
return 0;
} 