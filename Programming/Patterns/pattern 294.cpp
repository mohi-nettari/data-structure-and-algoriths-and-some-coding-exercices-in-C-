#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
int x=1,k=5,b,c;
char a=65;
for(int i=1;i<=k;i++){
for(int j=1;j<=i;j++){

if(i%2==0){
cout<<a++;
}
if(i%2==1){
cout<<j;
}
}
cout<<endl;
a=65;
}
return 0;
}