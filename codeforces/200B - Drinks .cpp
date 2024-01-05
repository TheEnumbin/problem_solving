
#include<bits/stdc++.h>

using namespace std;

int main(){

    double n,a,b,c,s=0,sum;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a;
        s = s+a;
    }

    sum = s/n;

    cout<<sum<<endl;
}
