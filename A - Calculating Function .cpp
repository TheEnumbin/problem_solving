
#include<bits/stdc++.h>

using namespace std;

int main(){

   long long int i,j,n,sumi=0,sumj=0;
    cin>>n;
    if((n%2)==0){
        cout<<n/2<<endl;
    }
    else{
        n=(n+1)/2;
        cout<<n*(-1)<<endl;
    }
}
