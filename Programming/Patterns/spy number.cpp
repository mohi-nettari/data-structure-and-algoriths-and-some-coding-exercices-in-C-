#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
using namespace std;


int main()
{
int total=0 , total1=1, n;
cout<<"enter how much degit in ur number:";
cin>>n;
int number[n];

cout<<"enter a number: ";
for (int i=0;i<n;i++){

cin>>number[i];
}

for (int i=0;i<n;i++){

total = total + number[i];
}


for (int i=0;i<n;i++){

total1 = total1 * number[i];
}
cout<<"\n\n"<<total<<endl;
cout<<total1<<endl;
if (total==total1){
cout<<"the number u given is a spy number";
}
else {
cout<<"the number u given is not a spy number";
}
return 0;
}