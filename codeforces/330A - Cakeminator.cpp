


#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,j,cj,ci,tci,tcj,ct=0;
    int r,c;
    cin>>r>>c;
    char arr[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    tcj=0;
    for(i=0;i<r;i++){
            cj=0;
        for(j=0;j<c;j++){
            if(arr[i][j]=='S'){
                cj=0;
                break;
            }
            else{
                cj++;
            }
        }
        if(cj>0){
            ct++;
        }
        tcj=cj+tcj;
        //cout<<ct<<endl;
        //cout<<cj<<endl;
        //cout<<tcj<<endl;
    }
    ci=0;
    tci=0;
    for(j=0;j<c;j++){
        ci=0;
        for(i=0;i<r;i++){
            if(arr[i][j]=='S' ){
                ci=0;
                break;
            }
            else{
                ci++;
            }
        }

        //cout<<ci<<endl;
        if(tcj>0 && ci>0){
        ci=ci-ct;
        }
        //cout<<ci<<endl;
        //cout<<ci<<endl;
        tci=(ci+tci);
        //cout<<ci<<endl;
    }
    //cout<<tcj<<" "<<tci<<endl;
    cout<<(tcj+tci)<<endl;

}
