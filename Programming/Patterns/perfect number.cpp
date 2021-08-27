#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
using namespace std;


int main()
{
int number,x,c=0 ;
cout <<"enter a number: ";
cin>>number;


for (int i=1;i<number;i++){
if (number%i==0){
c+=i;
}

}
if (c==number){
cout<<number<< " is a perfect number";
}

else if (c!=number){
cout<<number<<" is not a perfect number";
}


return 0;
}