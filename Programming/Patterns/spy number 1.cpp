#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
using namespace std;


int main()
{
int x=0 , y=1;
string number;
cout<<"enter a number : ";
cin>>number;

int n=number.size();

for (int i=0; i<n; i++){


   if (number[i]=='1'){
   x=x+1;
   y=y*1;
}
    if (number[i]=='2'){
    x=x+2;
    y=y*2;
}

    if (number[i]=='3'){
    x=x+3;
    y=y*3;
}

    if (number[i]=='4'){
    x=x+4;
    y=y*4;
}

    if (number[i]=='5'){
    x=x+5;
    y=y*5;
}

    if (number[i]=='6'){
    x=x+6;
    y=y*6;
}

   if (number[i]=='7'){
    x=x+7;
    y=y*7;
}



  if (number[i]=='8'){
    x=x+8;
    y=y*8;
}

    if (number[i]=='9'){
    x=x+9;
    y=y*9;
}

if (number[i]=='0'){
   x=x+0;
   y=y*0;
}

}

cout<<"\n\n"<<x<<endl<<y<<endl;
 
if (y==x){
cout<<"the number u entered is a spy number";
}
else {

cout<<"the number u entered is not a spy number";

}

return 0;
}