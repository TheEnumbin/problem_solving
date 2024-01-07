
#include<bits/stdc++.h>

using namespace std;

int main(){

char word[100];
int tc,i,j,l;
cin>>tc;
    for(i=0;i<tc;i++)
        {
            cin>>word;
            for(j=0;word[j]!=NULL;j++);
            if(j>10){
               cout<<word[0]<<j-2<<word[j-1]<<endl;
            }
            else{
                cout<<word<<endl;
            }
            }

        }



