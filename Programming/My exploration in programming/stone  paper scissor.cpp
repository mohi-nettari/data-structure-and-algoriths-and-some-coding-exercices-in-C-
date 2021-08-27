#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
#include<map>
#include<ctime>
#include<cstdlib>
using namespace std; 
int main(){
string something;
string something2;
int x=12;
int y;
cout <<"1_paper,,2_stone,,3_scissor\n";
cout<<"chose one: ";
cin>>something;
if (something!="paper" && something!="stone" && something!="scissor"){
cout<<"eror"<<endl;
}

srand(time(0));
y=(rand()%x)+1;
if (y<=4){
something2="paper";
}
else if(y>4 && y<=8){
something2="stone";
}
else if (y>8 && y<=12)  {
something2="scissor";
}
cout<<something2<<endl;

if(something=="paper"&&something2=="stone"||something=="stone"&& something2=="scissor"||something=="scissor"&& something2=="paper"){
cout<<"you win";
}

else if (something=="paper"&&something2=="scissor"||something=="stone"&& something2=="paper"||something=="scissor"&& something2=="stone"){
cout<<"you lose";
}
else if (something=="paper"&&something2=="paper"||something=="stone"&& something2=="stone"||something=="scissor"&& something2=="scissor"){
cout<<"This is a balance";
}
return 0;
}