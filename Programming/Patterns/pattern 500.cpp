#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
#include<map>
using namespace std; 
int main(){
int i,j;
int n=7;
int a=1;
for (i=1;i<=n;i++){
for(j=1;j<=n;j++){
if(i==1&&j<=n){
cout<<"*";
}
else if(i>1&&j<2){
cout<<"*";
}
else if(j==i&&i==a){
cout<<"*";
}
else {
cout<<" ";
}
}
a++;
cout<<endl;

}
return 0;
}