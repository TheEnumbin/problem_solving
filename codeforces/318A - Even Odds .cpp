
#include<bits/stdc++.h>

using namespace std;

int main(){

   long long int n,k,nth,a;

   cin>>n>>k;
    if(n%2==0){
        if(k<=((n/2))){
            nth = 1 + (k-1)*2;
        }else{
            if(n%2==0){
                a = (n/2);
            k= k-a;
            nth = 2 + (k-1)*2;
            }else{
                a = (n/2)+1;
            k= k-a;
            nth = 2 + (k-1)*2;
            }

        }
    }
    else{
        if(k<=((n/2)+1)){
            nth = 1 + (k-1)*2;
        }else{
            if(n%2==0){
                a = (n/2);
            k= k-a;
            nth = 2 + (k-1)*2;
            }else{
                a = (n/2)+1;
            k= k-a;
            nth = 2 + (k-1)*2;
            }

        }
    }

    cout<<nth<<endl;
}
