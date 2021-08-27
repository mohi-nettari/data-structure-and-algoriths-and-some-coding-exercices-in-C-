#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
#include<map>
using namespace std; 
int main(){
int a;
cout<<"entervur age per seconds: ";
cin>>a;
cout<<"ur age in mercury:"<<(a*0.2408467)/3600/24/365.25<<" y.o"<<endl;
cout<<"ur age in venus:"<<(a*0.61519726)/3600/24/365.25<<" y.o"<<endl;
cout<<"ur age in earth:"<<(a*1)/3600/24/365.25<<" y.o"<<endl;
cout<<"ur age in mars:"<<(a*1.8808158)/3600/24/365.25<<" y.o"<<endl;
cout<<"ur age in jupiter:"<<(a*11.862615)/3600/24/365.25<<" y.o"<<endl;
cout<<"ur age in saturn:"<<(a*29.447498)/3600/24/365.25<<" y.o"<<endl;
cout<<"ur age in uranus:"<<(a*84.016846)/3600/24/365.25<<" y.o"<<endl;
cout<<"ur age in neptune:"<<(a*164.79132)/3600/24/365.25<<" y.o"<<endl;
return 0;
}