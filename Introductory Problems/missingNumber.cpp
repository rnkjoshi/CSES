#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a[n+1];
  a[0]=0;
  for(int i=1;i<=n;i++)
    cin>>a[i];
  sort(a,a+n);
  for(int i=1;i<=n;i++)
  {
    if(i!=a[i]){
      cout<<i;
      break;
    }
  }
}
