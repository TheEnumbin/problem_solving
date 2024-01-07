
#include<iostream>
#include<iomanip>
#include<math.h>
#include<string.h>

using namespace std;

int main(){
   char word[150];

   int i,flag;

   cin>>word;
   flag=0;
   for(i=0;word[i]!=NULL;i++){
    if(flag==0 && word[i]=='h'){
        if(word[i+1]=='e'){
            flag=1;
        }
        else{
            flag=1;
        }
    }
    else if(flag==1 && word[i]=='e'){
        if(word[i+1]=='l'){
            flag=2;
        }
        else{
            flag=2;
        }
    }
    else if(flag==2 && word[i]=='l'){
        if(word[i+1]=='l'){
            flag=3;
        }
        else{
            flag=3;
        }
    }
    else if(flag==3 && word[i]=='l'){
        if(word[i+1]=='o'){
            flag=4;
        }
        else{
            flag=4;
        }
    }
    else if(flag==4 && word[i]=='o'){
        flag=5;
    }

   // cout<<flag<<" "<<word[i]<<" "<<word[i+1]<<endl;
   }
   if(flag==5){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }

}
