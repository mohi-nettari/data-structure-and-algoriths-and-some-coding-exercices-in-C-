#include<iostream>
#include<map>
#include<stdio.h>
#include<string>
using namespace std;
/*AUG    Methionine
UUU, UUC    Phenylalanine
UUA, UUG    Leucine
UCU, UCC, UCA, UCG    Serine
UAU, UAC    Tyrosine
UGU, UGC    Cysteine
UGG    Tryptophan
UAA, UAG, UGA    STOP
*/

int main()
{
    string rna,r;
    char p[3]= {};

    int d=0;
    char a,b,c;
    cout<<"enter an RNA sequence:  ";
    cin>>rna;

    map<string,string>mp;
    mp["AUG"]="meth";
    mp["UUU"]="Phenyl";
    mp["UUC"]="phenyl";
    mp["UUA"]="leucine";
    mp["UUG"]="leucine";
    mp["UCE"]="serien";
    mp["UCC"]="serine";
    mp["UCA"]="serine";
    mp["UCG"]="serine";
    mp["UAU"]="tyrosine";
    mp["UAC"]="tyrosine";
    mp["UGU"]="cysteine";
    mp["UGC"]="cysteine";
    mp["UGG"]="tryptophan";
    mp["UAA"]="stop";
    mp["UAG"]="stop";
    mp["UGA"]="stop";
   /* AUG	Methionine
UUU, UUC	Phenylalanine
UUA, UUG	Leucine
UCU, UCC, UCA, UCG	Serine
UAU, UAC	Tyrosine
UGU, UGC	Cysteine
UGG	Tryptophan
UAA, UAG, UGA	STOP
*/


    for (int i=0; i<rna.size(); i++) {





      if (d==0) {

            p[0]=rna[i];
        
        }
        
        else if (d==1) {

            p[1]=rna[i];
         
        }

        else if (d==2) {

            p[2]=rna[i];
            
         

d=-1;
if (mp[p]=="stop")
    {
    break;
    }
    
   cout<<mp[p]<<endl;

  }
   d++;

    }



  /*

    for (map<int,char>::iterator it=mp.begin();it!=mp.end();it++ ){

    cout<<it->first<<endl<<it->second;

    }

    */

    return 0;
}