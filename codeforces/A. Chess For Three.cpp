#include<bits/stdc++.h>

/*
The complexity is n that is linear time complexity because the loop will run n times in the worst case scenerio.

The logic behind the solution is if the current winner can only be spectator or winner in the previous game.
*/

using namespace std;

int main(){

    double n,a;
    int counter = 1;
    int wprev = 0;
    int lprev = 0;
    int sprev = 0;
    int flag = 0;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a;
        if(counter > 1){
            if(a==1){
               if(sprev == a){
                    flag = 1;
                    sprev = lprev;
                    lprev = wprev;
                    wprev = a;
                }else if(wprev==a){
                flag = 1;
                    int temp = sprev;
                    sprev = lprev;
                    lprev = temp;
                    wprev = a;
                }else{
                    flag = 0;
                    break;
                }
            }else if(a==2){
                if(sprev == a){
                    flag = 1;
                    sprev = lprev;
                    lprev = wprev;
                    wprev = a;
                }else if(wprev==a){
                    flag = 1;
                    int temp = sprev;
                    sprev = lprev;
                    lprev = temp;
                    wprev = a;
                }else{
                    flag = 0;
                    break;
                }
            }else if(a==3){
                if(sprev == a){
                    flag = 1;
                    sprev = lprev;
                    lprev = wprev;
                    wprev = a;
                }else if(wprev==a){
                    flag = 1;
                    int temp = sprev;
                    sprev = lprev;
                    lprev = temp;
                    wprev = a;
                }else{
                    flag = 0;
                    break;
                }
            }
        }else{
            if(a==3){
                flag = 0;
                break;
            }else{
                if(a == 1){
                    lprev = 2;
                }else{
                    lprev = 1;
                }
                flag = 1;
                wprev = a;
                sprev = 3;
            }
            counter++;
        }
    }
    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
