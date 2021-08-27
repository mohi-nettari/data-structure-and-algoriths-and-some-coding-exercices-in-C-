#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
using namespace std;


int main()
{
bool perfect;
int number;
cout<<"enter a number : ";
cin>>number;

if (number%1==0 && number%number==0){

perfect=true;

}
for (int i=2;i<number;i++){

if(number%i==0){

perfect=false;
}

}

if (perfect == true){

cout<<number<<" is a prime number ";
}

else {
cout<<number<<" is not a prime number ";

}


return 0;
}