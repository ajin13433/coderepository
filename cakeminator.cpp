#include<iostream>
using namespace std;

int main(){
int a,b,t=0,k=0,l=0,m=0;
cin>>a>>b;
string arr[a][b];
for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        cin>>arr[i][j];
    }
}
for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
      if(arr[i][j]==".")
        t=t+1;
    }
    if(t==b){
    k=k+1;
    for(int j=0;j<b;j++){
        arr[i][j]="0";
    }
}
    t=0;
}
k=k*b;
for(int i=0;i<b;i++){
    for(int j=0;j<a;j++){
      if(arr[j][i]=="."||arr[j][i]=="0")
        t=t+1;
    }
    if(t==a){
    l=l+1;
    for(int j=0;j<a;j++){
        if(arr[j][i]=="0")
            m=m+1;
    }
}
t=0;
}
l=l*a;
cout<<k+l-m<<endl;
return 0;
}
