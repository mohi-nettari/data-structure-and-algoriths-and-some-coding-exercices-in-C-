#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
#include<map>
using namespace std;
void gym(int x,string y){
cout<<"\t\t"<<y<<"\n\n";
cout<<"push-ups: "<<10*x<<"\n";
cout<<"pull-ups: "<<10*x<<"\n";
}
int main(){
string a;
cout<<"if u wanna see the program write yes: ";
cin>>a;
if(a=="yes"){
cout<<"Monday"<<"\n";
gym(1,"the first day");
cout<<"\n\n Tuesday"<<"\n";
gym(2,"the second day");
}
else{
cout<<"EROR";
}

return 0;
}