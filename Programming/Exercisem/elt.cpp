#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
#include<map>
using namespace std; 
int main()
{
char cn1[10]={'a','e','i','o','u','l','n','r','s','t'};  
char cn2[2]={'d','g'};
char cn3[4]={'b','c','m','p'};
char cn4[5]={'f','h','v','w','y'};
char cn5[1]={'k'};
char cn8[2]={'j','x'};
char cn10[2]={'q','z'};

string word;
int x=0;
cout<<"enter a word: ";
cin>>word;
int ws;
ws=word.size();
for (int i=0 ;i<ws; i++){
for (int j=0;j<10; j++) {
if (word[i]==cn1[j]){
x++;
}
}
}
for (int e=0 ;e<ws; e++){
for (int t=0;t<2; t++) {
if (word[e]==cn2[t]){
x+=2;
}
}
}
for (int w=0 ;w<ws; w++){
for (int q=0;q<4; q++) {
if (word[w]==cn3[q]){
x+=3;
}
}
}
for (int p=0 ;p<ws; p++){
for (int u=0;u<5; u++) {
if (word[u]==cn4[p]){
x+=4;
}
}
}
for (int f=0 ;f<ws; f++){
for (int m=0; m<1; m++) {
if (word[f]==cn5[m]){
x+=5;
}
}
}
for (int s=0 ;s<ws; s++){
for (int a=0;a<2; a++) {
if (word[a]==cn8[s]){
x+=8;
}
}
}
for (int l=0 ;l<ws; l++){
for (int k=0;k<2; k++) {
if (word[k]==cn10[l]){
x+=10;
}
}
}
cout<<x;


return 0;
}