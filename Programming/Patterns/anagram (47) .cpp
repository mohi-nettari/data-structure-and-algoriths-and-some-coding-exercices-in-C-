#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
using namespace std; 





int main()
{
string word1,word2;
int x=0;
cout<<"enter the first string: ";
cin>>word1;
cout<<"enter the second string: ";
cin>>word2;

int n=word1.size();
int n2=word2.size();

if (n==n2){

for (int i=0; i<n; i++ ){
for (int j=0;j<n; j++ ){

if (word1[i]==word2[j]){
x++;
}


}
}

if (x==n){
cout<<word1<<" and "<<word2<<" are anagrams";
}

else {

cout<<word1<<" and "<<word2<<" are not anagrams";
}


}

else {

cout<<word1<<" and "<<word2<<" are not anagrams";

}




return 0;
} 