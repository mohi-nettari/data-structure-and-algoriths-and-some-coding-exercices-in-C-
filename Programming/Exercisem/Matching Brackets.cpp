#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{

    string word;
    int x=0,b=0,c=0;
    cout<<"enter a word: ";
    cin>>word;
    int n=word.size();
    for (int i=0; i<n; i++) {

        if (word[i]=='(') {

            for (int j=0; j<n; j++) {

                if (word[j]==')') {

                    x++;
                }


            }
            
            }
            
            
            if (word[i]=='{') {

            for (int j=0; j<n; j++) {

                if (word[j]=='}') {

                    b++;
                }


            }
        


        }
        
        
        
        if (word[i]=='[') {

            for (int j=0; j<n; j++) {

                if (word[j]==']') {

                    c++;
                }


            }
        
        
        }


    }
    
if (x<1){
cout<<"eror in ()"<<endl;
}
else if (x>=1) {
cout<<"great ()"<<endl;
}

if (b<1){
cout<<"eror in {}"<<endl;
}
else if (b>=1) {
cout<<"great {}"<<endl;
}

if (c<1){
cout<<"eror in []"<<endl;
}
else if (c>=1) {
cout<<"great []"<<endl;
}



    return 0;
}