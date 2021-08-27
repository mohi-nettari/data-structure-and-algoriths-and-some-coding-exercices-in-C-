#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;

int main()
{
int x;
int n,c;
cout <<"how much  ellergic score u got: ";
cin>>x;
map <int ,string> allergy;
allergy[1]="egge";
allergy[2]="peanuts";
allergy[4]="shellfish";
allergy[8]="strawberries";
allergy[16]="tomato";
allergy[32]="chocolate";
allergy[64]="pollen";
allergy[128]="cats";

//cout<<allergy[x];
for(int i=0;i<257;i++){

if (x<256 && x>=128){
if (i<=0){
cout<<allergy[128]<<endl;
}
n=(x%128);

cout<<allergy[n-i];


}


else if (x<128 && x>=64){
if (i<=0){
cout<<allergy[64]<<endl;
}

n=(x%64);

cout<<allergy[n-i]<<endl;

}


else if (x<64 && x>=32){
if (i<=0){
cout<<allergy[32]<<endl;
}
n=(x%32);

cout<<allergy[n-i]<<endl;

}


else if (x<32 && x>=16){
if (i<=0){
cout<<allergy[16]<<endl;
}
n=(x%16);

cout<<allergy[n-i];
}


else if (x<16 && x>=8){
if (i<=0){
cout<<allergy[8]<<endl;
}
n=(x%8);

cout<<allergy[n-i];
}


else if (x<8 && x>=4){
if (i<=0){
cout<<allergy[4]<<endl;
}
n=(x%4);

cout<<allergy[n-i];
}


else if (x<4 && x>=2){
if (i<=0){
cout<<allergy[2]<<endl;
}
n=(x%2);

cout<<allergy[n-i];
}


else {

cout<<allergy[x];
}


}

return 0;
}