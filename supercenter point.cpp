#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a1=0,b1=0,c=0,d=0,m=0;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++){
    cin>>a[i]>>b[i];
}
for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(a[i]==a[j]&&b[i]>b[j])
        a1=a1+1;
        else if(a[i]==a[j]&&b[i]<b[j])
        b1=b1+1;
        else if(a[i]<a[j]&&b[i]==b[j])
        c=c+1;
        else if(a[i]>a[j]&&b[i]==b[j])
        d=d+1;
        }
        if(a1>=1&&b1>=1&&c>=1&&d>=1)
            m=m+1;
            a1=0;
            b1=0;
            c=0;
            d=0;
        }
        cout<<m;
return 0;
}
