#include<iostream>
#include <math.h>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
string name;
cout<<"enter a long name: ";
getline(cin,name);

int size=name.size();

for (int i=0; i<size;i++){
if (i==0){
cout<<name[i];
}
else if (name[i]==' '){

cout<<name[i+1];
}

}
return 0;
}