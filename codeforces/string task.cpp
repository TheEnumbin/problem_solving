#include<bits/stdc++.h>

using namespace std;

int main(){
    char word[100];


    int i;
    cin>>word;

    for(i=0;word[i]!=NULL;i++){
        if(word[i]!='a' && word[i]!='i' && word[i]!='e' && word[i]!='o' && word[i]!='u' && word[i]!='y' && word[i]!='A'
           && word[i]!='E' && word[i]!='I' && word[i]!='O' && word[i]!='U' && word[i]!='Y'){
                if(word[i]>=65 && word[i]<=90){

                    word[i]=word[i]+32;
                    //cout<<"."<<word[i];
                }
            cout<<"."<<word[i];
        }
    }


}




