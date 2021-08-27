#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
#include<map>
using namespace std; 
int main(){
int a,b,c;
cout<<"enter the length of the first side: ";
cin>>a;
cout<<"enter the length of the second side: ";
cin>>b;
cout<<"enter the length of the therd side: ";
cin>>c;

if(a<=0||b<=0||c<=0){
cout<<"there's a wrong in thistriangl ";
}
else if(a==b&&a!=c&&a+b!=c||a==c&&a!=b&&a+c!=b||b==c&&b!=a&&b+c!=a){
cout<<"this triangl is a isosceles \n";
}
else if (a==b && a==c || b==c&&b==a || c==a&&c==b){
cout<<"this triangl is a equilateral \n";
}
else if (a!=b && a!=c && c!=b){
cout<<"this triangl is a scalene ";
}

else if (a+b==c||a+c==b||c+b==a){
cout<<"this is a degenerate triangle";
}


return 0;
}