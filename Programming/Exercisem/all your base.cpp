#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
using namespace std; 
int main()
{
 int squ=0,total=0;
int num,base;
bool eror=false;
cout<<"enter a number: ";
cin>>num;
cout<<"enter the base number: ";
cin>>base;



while (num>0){

int t=num%10;

num/=10;

 total=t*pow(base,squ)+total;

if (t>=base){
eror=true;
}


squ++;

}

if (eror==true){
cout<<"the number u etered or the base are wrong";
}
else {
cout<<total;
}
return 0;
}