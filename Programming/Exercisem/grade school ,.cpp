#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
#include<map>
using namespace std; 
int main(){
string grade1[3]={"nedjmou","mohi","farid"};
string grade2[3]={"ranim","naghem","tarek"};
string grade3[3]={"ilyes","kaouther","jimmy"};
string grade4[3]={"siradj","biba","salim"};
int g;
string q;
string v="yes";
cout<<"the grades: 1,,2,,3,,4.\n";
cout <<"enter the grade : ";
cin>>g;
if (g==1){
for (int i=0;i<3;i++){
if(grade1[i][0]>grade1[i+1][0]){
string re=grade1[i];
       grade1[i]=grade1[i+1];
       grade1[i+1]=re;
    
}
cout<<grade1[i]<<endl;
}
}

if (g==2){
for (int i=0;i<3;i++){

if(grade2[i][0]>grade2[i+1][0]){
string re=grade2[i];
       grade2[i]=grade2[i+1];
       grade2[i+1]=re;
}
cout<<grade2[i]<<endl;
}
}

if (g==3){
for (int i=0;i<3;i++){

if(grade3[i][0]>grade3[i+1][0]){
string re=grade3[i];
       grade3[i]=grade3[i+1];
       grade3[i+1]=re;
}
cout<<grade3[i]<<endl;
}
}

if (g==4){
for (int i=0;i<3;i++){

if(grade4[i][0]>grade4[i+1][0]){
string re=grade4[i];
       grade4[i]=grade4[i+1];
       grade4[i+1]=re;
}
cout<<grade4[i]<<endl;
}
}
cout<<"enter(yes)if u wanna see all students ";
cin>>q;
if (q==v){
for(int j=0;j<3;j++){
if (grade1[j][0]>grade1[j+1][0]){
 string fe=grade1[j];
       grade1[j]=grade1[j+1];
       grade1[j+1]=fe;
}
cout<<grade1[j]<<endl;
}
cout<<endl;
for(int t=0;t<3;t++){
cout<<grade2[t]<<endl;
}
cout<<endl;
for(int w=0;w<3;w++){
cout<<grade3[w]<<endl;
}
cout<<endl;
for(int e=0;e<3;e++){
cout<<grade4[e]<<endl;
}
cout<<endl;
}

else {
cout<<"thnx for nthn";

}
return 0;
}