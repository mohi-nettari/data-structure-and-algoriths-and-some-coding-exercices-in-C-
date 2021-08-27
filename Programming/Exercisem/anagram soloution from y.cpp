#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
#include<map>
using namespace std;
int main() {
    char first[50],second[50];
    int found=0,not_found=0;

    cout<<"enter the first string: ";
    gets(first);
    cout<<"enter the second string: ";
    gets(second);

    int size1=strlen(first);
    int size2=strlen(second);

    if (size1==size2) {

        for (int i=0; i<size1; i++) {
            found=0;
            for (int j=0; j<size1; j++) {
                if (first[i]==second[j]) {
                    found=1;
                    break;
                }

            }
            if (found==0) {
                not_found=1;
                break;
            }


        }

        if (not_found==1) {
            cout<<"entered strings are not anagrams";

        }
        else {
            cout<<"entered strings are anagrams";

        }


    }






    return 0;
}