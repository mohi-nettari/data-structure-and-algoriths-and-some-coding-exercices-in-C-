#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
using namespace std;


int main()
{
int n;
cout<<"enter n number: ";
cin>>n;

int a[n];

cout<<"enter the numbers: ";

for (int i=0; i<n;i++){
cin>>a[i];

 
}

for (int i=0 ; i<n; i++){

if (a[i]>a[i+1]){

     int re = a[i];
     a[i]=a[i+1];
      a[i+1]=re;
   }

}
cout<<"\n"<< "the largest number:\n" <<a[n-1];






return 0;
}