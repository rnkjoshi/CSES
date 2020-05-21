#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  unsigned long long int counter=0, a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(int i=1;i<n;i++){
      if(a[i]<a[i-1]){
          counter+=(a[i-1]-a[i]);
          a[i]=a[i-1];
      }
  }
  cout<<counter;
}
