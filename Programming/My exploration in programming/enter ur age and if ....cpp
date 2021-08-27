#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
int bd;
int bm;
int by;
cout<<"Enter your bearth day:";
cin>>bd;
cout<<"Enter your bearth month:";
cin>>bm;
cout<<"Enter your bearth year:";
cin>>by;
cout<<bd<<"/"<<bm<<"/"<<by<<endl;


if (by>2002)
{
cout<<"you're too young for us";
}
else if (by<=2002)
{
cout<<"welcom dude";
}


return 0;
}