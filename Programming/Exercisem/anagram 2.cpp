#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    string word;
    char re,te,a=65;
    int x,y=0,b=0;
    cout<<"enter a word: ";
    cin>>word;
    int n=word.size();
    cout<<"enter how many words yll enter in this list: ";
    cin>>x;

    string words[x];
    for (int i=0; i<(n-1); i++) {

        if (word[i]>word[i+1]) {
            te=word[i];
            word[i]=word[i+1];
            word[i+1]=te;

        }

    }

    //cout<<word<<endl;

    for (int i=0; i<(n-1); i++) {

        if (word[i]>word[i+1]) {
            te=word[i];
            word[i]=word[i+1];
            word[i+1]=te;

        }

    }
    //  cout<<word<<endl;
    for (int i=0; i<x; i++) {
        cout<<" word "<<i<<": ";
        cin>>words[i];

        for (int j=0; j<n-1; j++) {
            if (words[i][j]>words[i][j+1]) {
                re = words[i][j];
                words[i][j]=words[i][j+1];
                words[i][j+1]=re;

            }

        }
        // cout<<words[i]<<endl;
        
        for (int j=0; j<n-1; j++) {
            if (words[i][j]>words[i][j+1]) {
                re = words[i][j];
                words[i][j]=words[i][j+1];
                words[i][j+1]=re;

            }

        }
        // cout<<words[i]<<endl;
    }

    for (int i=0; i<x; i++) {


        //for (int k=0; k<n; k++) {
        for (int j=0; j<n; j++) {

            if (words[i][j]==word[j]) {
                y++;

            }




            //}

            if (y>=n) {
                cout<<"word["<<i<<"]"<<" is an anagram \n";
                b++;
            }


        }
        y=0;


    }
    if (b==0) {
        cout<<"\n there's no anagram in yor list \n";
    }


    return 0;
}