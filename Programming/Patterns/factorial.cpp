#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
using namespace std;


int main()
{
int  c=0 , total=1;
int number;
cout<<"enter a number : ";
cin>>number;

for (int i=1;i<=number;i++){

total = total * i;

}

cout<<total;

return 0;
}