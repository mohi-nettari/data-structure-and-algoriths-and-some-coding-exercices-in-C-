#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
#include<map>
using namespace std; 
void programming(int x){
cout<<" logarithms in 1st day : "<<1*x<<endl;
cout<<" logarithms in 2nd day : "<<2*x<<endl;
cout<<" logarithms in 3rd day : "<<4*x<<endl;
}

int main()
{
int x;
cout<<"difficult levels : 1,,2,,3,,,,,10 \n";
cout <<"enter a difficult level : ";
cin>>x;
programming( x);


return 0;
}