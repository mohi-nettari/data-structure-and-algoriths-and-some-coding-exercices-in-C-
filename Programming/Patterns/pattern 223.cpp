#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
#include<map>
using namespace std; 
int main(){
char a=65;
for (int i=1;i<=5;i++){
for (int j=1;j<=5;j++){
if (j<=i){
cout<<a;
}
else{
cout<<"*";
}

}
cout<<endl;
a++;
}
return 0;
}