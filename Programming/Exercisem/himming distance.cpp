#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
using namespace std; 
int main()
{
string dna1;
string dna2;



int w;

int t;
int y;



cout<<"enter dna1:";
cin>>dna1;
cout<<"enter dna2:";
cin>>dna2;

int ds1;
int ds2;


ds1=dna1.size();
ds2=dna2.size();

if (ds1>ds2){
w=ds1-ds2;
t=ds1-w;
for (int i=0;i<t;i++){
if (dna1[i]!=dna2[i]){
w++;
}
}
cout<<w; 
}



else if (ds2>ds1){
w=ds2-ds1;
y=ds2-w;
for (int j=0;j<y; j++){
if (dna1[j]!= dna2[j]){
w++;
}
}
cout<<w;
}




else if (ds1==ds2){
w=0;
for (int v=0;v<ds1;v++){
if (dna1[v]!= dna2[v]){
w++;
}
}
cout<<w;
}





return 0;
}