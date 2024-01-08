
#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char word[150];

    int i,j;

    cin>>word;

    for(i=0;word[i]!=NULL;i+=2){
        for(j=0;word[j]!=NULL;j+=2){
            if(word[i]<=word[j]){
                swap(word[i],word[j]);

            }
            if(word[j+1]==NULL){
                break;
            }
            //cout<<word<<endl;
        }
        if(word[i+1]==NULL){
                break;
        }
        //cout<<word<<endl;
    }
    cout<<word<<endl;
}
