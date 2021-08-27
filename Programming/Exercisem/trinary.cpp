#include<iostream>
//#include<iostream.h>
#include<string>
#include<stdio.h>
#include<math.h>
//#include<functional>
//#include<vector>
//#include<map>

using namespace std;
int main()
{ 
string trinary;
cout<<"enter a trinary number: ";
cin>>trinary;
int a,g;
int h=0;
int b=1;
int x=trinary.size();
bool non=true;

for (int i=0;i<x;i++){

if (trinary[i]=='0') 
{
a=0*pow(3,(x-b));
}

else if (trinary[i]=='1')
{
a=1*pow(3,(x-b));
}

else if (trinary[i]=='2')
{
a=2*pow(3,(x-b));
}

else 
{
non=false;
}

g=a+h;
h=g;

b++;
}
if (non==false){
cout<<"eror \n invalid number \n";
}

else{
cout<<"the decimal of "<<trinary<<" is: "<< g;
}
return 0;
}