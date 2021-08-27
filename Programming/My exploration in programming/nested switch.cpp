#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
cout<<"\t\twelcome\n\n";
int a;
int t;
cout<<"1_lalega\n2_lega\n3_leg\n";
cout<<"choose one of this leags: ";
cin>>a;
switch(a){
case 1:
cout<<"1_barca\n2_r.m\n3_a.m\n";
cout<<"chose one of this teams: ";
cin>>t;
switch(t){
case 1:
cout<<"u prefer laleg and u like barca\n";
break;
case 2:
cout<<"u prefer lalega and u like r.m\n";
break;
case 3:
cout<<"u prefer lalega and u like r.m\n";
break;
default:
cout<<"no team found";}

case 2:

cout<<"1_p.s.j\n2_nic\n3_lil\n";
cout<<"chose one of this teams: ";
cin>>t;
switch(t){
case 1:
cout<<"u prefer lega and u like p.s.j\n";
break;
case 2:
cout<<"u prefer lega and u like nic\n";
break;
case 3:
cout<<"u prefer lega and u like lil\n";
break;
default:
cout<<"no team found";}

case 3:
cout<<"1_m.c\n2_m.y\n3_l.c\n";
cout<<"chose one of this teams: ";
cin>>t;
switch(t){
case 1:
cout<<"u prefer leg and u like m.c\n";
break;
case 2:
cout<<"u prefer leg and u like m.y\n";
break;
case 3:
cout<<"u prefer leg and u like m.c\n";
break;
default:
cout<<"no team found";}

default :
cout<<"u didn't choose any leag\n";


cout<<"\t\tthnx\n";
}



return 0;
}