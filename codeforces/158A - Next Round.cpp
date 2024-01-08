
#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n,k,m,counter=0;
    long long int a[100];

    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    m=a[k];
    //cout<<m<<endl;
    if(m<=0){
    for(int i=1;i<=n;i++){
        if(a[i]>m){
            counter++;
        }
    }
    cout<<counter<<endl;
    }
    else{
        for(int i=1;i<=n;i++){
        if(a[i]>=m){
            counter++;
        }
    }
    cout<<counter<<endl;
    }

}



