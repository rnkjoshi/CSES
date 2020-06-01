#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,x,temp;
    cin>>n>>x;
    vector<int> weight;
    for(int i=0;i<n;i++){
        cin>>temp;
        weight.push_back(temp);
    }
    sort(weight.begin(),weight.end());
    int counter=0;
    for(int i=0,j=n-1;i<=j;){
        if(weight[j]+weight[i] > x)
            j--;
        else{
            i++;
            j--;
        }
        counter++;
    }
    cout<<counter<<endl;
}
