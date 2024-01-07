
#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main(){
   char word[100];
   int i,flag=0;
   cin>>word;
   if(word[0]>=97){
    for(i=1;word[i]!=NULL;i++){
        if(word[i]>=97){
            flag=1;
        }
    }
    if(flag==1){
        cout<<word<<endl;
    }
    else{
        word[0]=word[0]-32;
        for(i=1;word[i]!=NULL;i++){
        word[i]=word[i]+32;
    }
    cout<<word<<endl;
   }
   }
   else if(word[0]>=65 && word[0]<=90){
    for(i=0;word[i]!=NULL;i++){
        if(word[i]<=90 && word[i+1]<=90 ){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
   if(flag==0){
    cout<<word<<endl;
   }
   else{
    for(i=0;word[i]!=NULL;i++){
        word[i]=word[i]+32;
        }
        cout<<word<<endl;
   }

}

   }
