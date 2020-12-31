#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,m=0,l=0;
    cin>>n;
    int a[n],b[n-2];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  for(int i=1;i<n-1&&l<n-2;i++){
        k=a[i];
        a[i]=0;
    for(int j=0;j<n-1;j++){
    if(a[j]!=0&&a[j+1]!=0){
       if(m<a[j+1]-a[j])
         m=a[j+1]-a[j];
        }
    }
    if(m<a[i+1]-a[i-1])
        m=a[i+1]-a[i-1];

            b[l]=m;
            m=0;
        l++;
    a[i]=k;
  }
  sort(b,b+l);
  cout<<b[0];
return 0;
}

