
#include<bits/stdc++.h>

using namespace std;

int main(){
    char word[150],word1[150];
    long long int i,j,ret;

    cin>>word>>word1;
    for(i=0;word[i]!=NULL;i++){
        if(word[i]>=65 && word[i]<=90){
                word[i]=word[i]+32;
                }
    }
    for(i=0;word[i]!=NULL;i++){
        if(word1[i]>=65 && word1[i]<=90){
                word1[i]=word1[i]+32;
                }
    }
    ret = strcmp(word, word1);
    if(ret < 0)
   {
      cout<<-1<<endl;
   }
   else if(ret > 0)
   {
      cout<<1<<endl;
   }
   else
   {
      cout<<0<<endl;
   }
   return 0;
}
