#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
#include<map>
using namespace std; 
void info(string name, float tall,int wghit){
cout<<"the name of the student is : "<<name<<"\n";
cout<<"tha tall of the student is : "<<tall<<endl;
cout<<"tha wghit of the student is : "<<wghit<<endl;
}
int main(){
info("mohi",1.75,62);
cout<<endl;
info("nedjmou",1.75,60);
cout<<endl;
info("wadia",1.78,85);

return 0;
}