#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
using namespace std; 



int main()
{
string word,word1;
char a=65;
char b=97;
cout<<"enter the word: ";
cin>>word;
int n = word.size();

for (int i=0;i<n;i++){

for (int j=0;j<26 ;j++){

if (word [i] == char (a + j)){

word1 [i] = char (a + 25 - j) ;
cout<< word1 [i] ;
}

if (word [i] == char (b + j)){

word1 [i] = char (b + 25 - j) ;
cout<< word1 [i] ;
}




}


}

return 0;
} 