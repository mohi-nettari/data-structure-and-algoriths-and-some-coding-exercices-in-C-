#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    string word;

    int x,y=0;
    cout<<"enter a word: ";
    cin>>word;
    int n=word.size();
    cout<<"enter how many words yll enter in this list: ";
    cin>>x;

    string words[x];
    

    for (int i=0; i<x; i++) {
        
    cout<<" word "<<i<<": ";
        cin>>words[i];

        for (int k=0; k<n; k++) {
            for (int j=0; j<n; j++) {

                if (words[i][k]==word[j]) {
                    y++;

                }




            }

            if (y>n) {
                cout<<words[i]<<" is an anagram \n";
            } 
            

        }
       
      y=0; 

    }





    return 0;
}