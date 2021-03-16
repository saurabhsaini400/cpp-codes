#include<bits/stdc++.h>
using namespace std;
void reverse(int v[],int n){
    int l=0;
    int r=n-1;
    while(l<r){
        int temp=v[l];
        v[l]=v[r];
        v[r]=temp;
        l++;
        r--;
    }
  
}
void print(int v[],int n){
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
   
    int v[5]={1,2,3,4,5};
    int n=sizeof(v)/sizeof(v[0]);
print(v,n);
reverse(v,n);
print(v,n);


    return 0;
}
