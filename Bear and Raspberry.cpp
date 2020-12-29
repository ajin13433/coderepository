#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,d;
cin>>n>>d;
int t=0;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];}
for(int i=0;i<n-1;i++){
    t=max(t,a[i]-a[i+1]);
}
if(t-d>=0)
    cout<<t-d;
else
    cout<<0;
return 0;
}
