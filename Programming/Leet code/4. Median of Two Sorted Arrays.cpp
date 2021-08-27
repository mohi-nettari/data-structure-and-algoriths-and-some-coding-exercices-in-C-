#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;

int main()
{
int x,y,total,total1;
int c=0,g=0;
cout<<"enter the 1st array length: ";
cin>>x;
cout<<"enter the 2nd array length: ";
cin>>y;
int sum1[x];
int sum2[y];
for (int i=0;i<x;i++){
cout<<"the place"<<i+1<<" :";
cin>>sum1[i];


total=sum1[i]+c;
c=total;
}

cout<<"\n\n\n";

for (int j=0;j<y;j++){

cout<<"the place"<<j+1<<" :";

cin>>sum2[j];

total1=sum2[j]+g;
g=total1;
}
cout<<total<<". "<<total1<<"\n";
cout<<"the meriand is: "<<(total+total1)/(x+y);
return 0;
}