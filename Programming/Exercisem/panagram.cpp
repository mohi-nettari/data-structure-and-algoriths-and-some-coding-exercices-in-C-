#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    int y=0;
    char a=65,re;
    string word;
    cout<<"enter a sentence: ";
    getline(cin,word);
    int n=word.size();


    if (n>=5) {

        for (int j=0; j<n; j++) {

            for (int i=0; i<n-1; i++) {

                if (word[i]>word[i+1]) {

                    re = word[i];

                    word[i] = word[i+1];

                    word[i+1] = re;

                }

            }

        }

    }

//cout<<word;

    for (int i=0; i<n; i++) {
        if (word[i]%2==1) {
            word[i]='1';

        }
        else {
            word[i]='0';
        }


    }

    for(int i=0; i<n; i++) {
        if (word[i]!=word[i+1]) {
            y++;
        }
    }


    if (y==27)
    {
        cout<<"this sentence is a panagram";
    }
    else {

        cout << "this sentence is not a panagram";
    }

    return 0;
}