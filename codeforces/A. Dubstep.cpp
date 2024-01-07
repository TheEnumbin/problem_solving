
#include<iostream>
#include<iomanip>
#include<math.h>
#include<string.h>

using namespace std;

int main(){

   char word[250];

   int i,flag;

   cin>>word;
    i=0;
   while(word[i]!=NULL){
       flag=0;

    if(word[i]=='W' && word[i+1]=='U' && word[i+2]=='B') {
        if(i==0){
            i=0;
        }
        else{
           cout<<" ";
        };
        i+=3;
    }
    else{
        cout<<word[i];
        i++;
    }
   }

}
