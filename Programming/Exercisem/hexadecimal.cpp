#include<iostream>
#include <math.h>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
string hex;
int a=0,x;
int t=0;
int total=0;

cout<<"enter the hexadecimal: ";
cin>>hex;
int size=hex.size();



for (int i=size-1;i>=0;i--){

if (hex[i]=='A'){
x=10*pow(16,a);
//cout<<x<<endl;
a++;
}

else if (hex[i]=='B'){
x=11*pow(16,a);
//cout<<x<<endl;
a++;
}

else if (hex[i]=='C'){
x=12*pow(16,a);
//cout<<x<<endl;
a++;
}

else if (hex[i]=='D'){
x=13*pow(16,a);
//cout<<x<<endl;
a++;
}

else if (hex[i]=='E'){
x=14*pow(16,a);
//cout<<x<<endl;
a++;
}

else if (hex[i]=='F'){
x=15*pow(16,a);
//cout<<x;
a++;
}

else if (hex[i]=='1'){
x=1*pow(16,a);
//cout<<x<<endl;
a++;
}
else if (hex[i]=='2'){
x=2*pow(16,a);
//cout<<x;
a++;
}

else if (hex[i]=='3'){
x=3*pow(16,a);
//cout<<x;
a++;
}

else if (hex[i]=='4'){
x=4*pow(16,a);
//cout<<x;
a++;
}

else if (hex[i]=='5'){
x=5*pow(16,a);
//cout<<x;
a++;
}

else if (hex[i]=='6'){
x=6*pow(16,a);
//cout<<x;
a++;
}

else if (hex[i]=='7'){
x=7*pow(16,a);
//cout<<x;
a++;
}

else if (hex[i]=='8'){
x=8*pow(16,a);
//cout<<x;
a++;
}
else if (hex[i]=='9'){
x=9*pow(16,a);
//cout<<x;
a++;
}

total=x+t;
t=total;

}
cout<<total;

return 0;
}