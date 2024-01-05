
#include<bits/stdc++.h>

using namespace std;

int main(){
        long long int i,j,k,n,m,nl,ar[200],arr[150];
        long long int flag;
        cin>>n>>m;
        while(n--){
            cin>>nl;
            for(i=1;i<=nl;i++){
            cin>>arr[i];
            }
            for(j=1;j<=nl;j++){
                    //cout<<arr[j]<<endl;
                for(k=1;k<=m;k++){
                    if(arr[j]==k){
                        ar[k]=arr[j];
                        //cout<<ar[k]<<endl;
                    }
                }
            }

       }
        flag=0;
        for(i=1;i<=m;i++){
                //cout<<arr[i]<< " ";
            if(ar[i]==i){
                flag++;
            }
            else{
                flag=0;
            }
            //cout<<flag<<" "<<ar[i]<<endl;
        }
        if(flag==m){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }

}
