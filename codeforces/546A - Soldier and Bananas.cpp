
#include<bits/stdc++.h>

using namespace std;

int main(){

        long double k,n,nth,ntd,a;
        long double w,byt;
        long int sum=0;

        cin>>k>>n>>w;
        byt = (w/2);
        ntd = (w-1)*k;
        a = 2*k;
        nth = byt*(a+ntd);
        sum = nth-n;
            if(sum>0){
            cout<<sum<<endl;
            }else{
            cout<<0<<endl;
            }


}
