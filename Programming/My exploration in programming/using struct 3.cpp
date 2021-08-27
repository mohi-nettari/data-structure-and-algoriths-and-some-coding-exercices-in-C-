#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
using namespace std;
struct cars{
string name;
int matrecil;
string color;
float power;
};

int main()
{
int i;
 cars stud[3];

for (i=0;i<3;i++){
cout<<"enter ur car info: \n";
cout<<"name: ";
cin>>stud[i].name;
cout<<"matrecil: ";
cin>>stud[i].matrecil;
cout<<"color: ";
cin>>stud[i].color;
cout<<"power: ";
cin>>stud[i].power;
}
for (i=0;i<3;i++){
cout<<"the user number"<<i+1<<endl;
cout<<stud[i].name<<endl;
cout<<stud[i].matrecil<<endl;
cout<<stud[i].color<<endl;
cout<<stud[i].power<<endl;

}

return 0;
}