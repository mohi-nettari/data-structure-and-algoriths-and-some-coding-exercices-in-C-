#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
int l;
int t;
cout<<"1_la leaga\n2_le leaga\n3les leaga\n";
cout<<"choose ur favorite league"<<endl;
cin>>l;
switch(l){
case 1:
cout<<"1_barca\n2_r.m\n3_a.m\n";
cout<<"choose one of this teams: ";
cin>>t;
switch(t){
case 1:
cout<<"ur favorite league is la leaga\nand u like barca";
break;

case 2:
cout<<"ur favorite league is la leaga\nand u like r.m";
break;

case 3:
cout<<"ur favorite league is la leaga\nand u like a.m";
break;

}
break;


case 2:
cout<<"1_p.s.j\n2_lil\n3_nic";
cout<<"choose one of this teams: ";
cin>>t;
switch(t){
case 1:
cout<<"ur favorite league is le leaga\nand u like p.s.j";
break;

case 2:
cout<<"ur favorite league is le leaga\nand u like lil";
break;



case 3:
cout<<"ur favorite league is le leaga\nand u like nic";
break;

}

break;


case 3:
cout<<"1_m.c\n2_m.y\n3_l.c";
cout<<"choose one of this teams: ";
cin>>t;
switch(t){
case 1:
cout<<"ur favorite league is  leaga\nand u like m.c";
break;

case 2:
cout<<"ur favorite league is  leaga\nand u like m.y";
break;

case 3:
cout<<"ur favorite league is  leaga\nand u like l.c";
break;

}

break;


default:cout<<"u choose no such league\team";



}


return 0;
}