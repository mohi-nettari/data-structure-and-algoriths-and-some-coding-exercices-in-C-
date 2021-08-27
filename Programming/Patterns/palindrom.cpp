#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
string word,word1;
int j=0,x=0;
cout<<"enter a word: ";
cin>>word;
int n=word.size();

for (int i=n-1;i>=0;i--){

word1[j]=word[i];
//cout<<word1[j];
if (word[j]==word[i]){
x++;
}

j++;
}
 if (x==n){
cout<<"the word u entered is palindrom";
}
    else {
    cout<<"the word u entered is not palindrom";
    }
    
    
    return 0;
}