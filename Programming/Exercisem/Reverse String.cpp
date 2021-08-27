#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
using namespace std; 
int main()
{
string word;
cout << "enter a word: ";
cin>>word;
int i=word.size();
for (int x=i;x>=0;x--)
{
cout <<word[x];
}
return 0;
} 