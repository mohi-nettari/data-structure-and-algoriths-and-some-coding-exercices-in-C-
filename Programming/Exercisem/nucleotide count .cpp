#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
#include<map>
using namespace std; 
int main()
{
char dc[4]={'A','C','G','T'};
string dna;
cout<<"the dna:";
cin>>dna;
int x;
x=dna.size();
for(int j=0;j<x;j++){
if (dna[j]!=dc[0]&&dna[j]!=dc[1]&&dna[j]!=dc[2]&&dna[j]!=dc[3]){
cout<<"EROR \n";
}
}

cout<<x;


return 0;
}