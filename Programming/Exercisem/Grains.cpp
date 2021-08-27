#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
#include<map>
using namespace std; 
int main(){
int x;
int g;
int gt=0;
cout<<"enter a chess square number: ";
cin>>x;

cout<<pow(2,x-1)<<endl;

for(int i=0;i<64;i++){
g=pow(2,i)+gt;
gt=g;
}
cout<<g;



/*if (x<=64&&x>0){
for (int i=1; i<=x; i++){
g=gt*2;
gt=g;
}
cout<<g;
}
else {
cout<<"the chess squar number must be less than 64 \n and more than 0 \n";
}
*/
return 0;
}