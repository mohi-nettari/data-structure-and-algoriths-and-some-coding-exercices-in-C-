#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
using namespace std; 





int main()
{
int num,x,c=0,d=0;
cout<<"enter a number : ";
cin>>num;

int mum=num*num;
while (mum>0){

d=mum%10;
mum=mum/10;
d=d+c;
c=d;
}
if (d==num){
cout<<num<<" is a neon number";
}
else {
cout<<num<<" is not a neon number";
}

return 0;
} 