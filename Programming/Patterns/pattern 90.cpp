#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
using namespace std; 
int main()
{
char a=69;
for(int x=5;x>=1;x--){
for(int y=1;y<=x;y++){
cout<<a--;
}
a+=x;
cout<<endl;
}
return 0;
} 