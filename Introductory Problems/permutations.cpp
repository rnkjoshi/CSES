#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"1";
        return 0;
    }
    if(n<=3){
        cout<<"NO SOLUTION";
        return 0;
    }
    else{
        if(n%2==0){
            cout<<n/2<<" "<<n/2+2<<" "<<n/2-1<<" "<<n/2+1<<" ";
            for(int i=2;i<n/2;i++){
                cout<<n/2-i<<" "<<n/2+i+1<<" ";
            }
        }
        else{
            for(int i=0;i<n/2;i++){
                cout<<n/2-i<<" "<<n/2+i+2<<" ";
            }
            cout<<" "<<n/2+1;
        }
    }
    return 0;
}
