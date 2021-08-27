#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
using namespace std; 
int main()
{

int x;
int o=0;
int c;
int r;
int e=0;
int f;

cout<<"enter a number: ";
cin>>x;
//example (input. 5)->1^2+2^2...5^2;
//second (1+2+3..5)^2

for(int i=1;i<=x;i++){

c=o+pow(i,2);
o=c;

}
cout<<c<<endl;

for(int j=1;j<=x;j++){
r=e+j;
e=r;
f=pow(r,2);
}
cout<<f<<endl;
cout<<f-c;
return 0;
}