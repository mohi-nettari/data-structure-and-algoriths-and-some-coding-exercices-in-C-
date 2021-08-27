#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
using namespace std;


int main()
{
int x=0,c=0,i=0,d;
int sum;
cout<<"enter a number : ";
cin>>sum;
int num=sum;
int mum=sum;
/* if (num<10){
i=1;
}
else if (num>=10&&num<100){
i=2;
}
else if (num>=100&&num<1000){
i=3;
}
else if (num>=1000&&num<10000){
i=4;
}
*/
while (num>0){

 d=num % 10;

 num = num/10;
 //cout<<d;

//x=pow(d,i)+x;
i++;

}

while (mum>0){

 d=mum%10;

 mum = mum/10;
 //cout<<d;

x=pow(d,i)+x;
//i++;
}


cout<<x<<endl;
if (x==sum){
cout<<"the number u entered is an armstrong number";
}
else {
cout<<"the number u entered is not an armstrong number";
}
return 0;
}