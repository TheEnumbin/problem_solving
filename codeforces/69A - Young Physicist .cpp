
#include<bits/stdc++.h>

using namespace std;

int main(){

int n,a,b,c,suma=0,sumb=0,sumc=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a>>b>>c;
    suma = suma+a;
    sumb = sumb+b;
    sumc = sumc+c;
}

if(suma==0 && sumb==0 && sumc==0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
