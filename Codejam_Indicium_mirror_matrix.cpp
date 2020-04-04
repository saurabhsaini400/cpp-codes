#include<bits/stdc++.h>
using namespace std;
const int MAX = 100; 
int mat[MAX][MAX]; 

void fillRemaining(int i, int j, int n) 
{ 
    
    int x = 2; 

    for (int k = i + 1; k < n; k++) 
        mat[k][j] = x++; 
  
    for (int k = 0; k < i; k++) 
        mat[k][j] = x++; 
} 

void constructMatrix(int n) 
{ 
   
    int right = n - 1, left = 0; 
    for (int i = 0; i < n; i++) 
    { 
        
        if (i % 2 == 0) 
        { 
            mat[i][right] = 1; 
  
           
            fillRemaining(i, right, n); 
  
          
            right--; 
        } 
          
       
        else 
        { 
            mat[i][left] = 1; 
  
           
            fillRemaining(i, left, n); 
  
        
            left++; 
        } 
    } 
} 
int main() 
{ 
    int n,t,k,sum=0,sum1=0,arrayimg[100][100]; 
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>k;
        if(n==0){
            cout<<"Case #"<<i<<": IMPOSSIBLE";
            continue;
        }
        cout<<"\n";
    constructMatrix(n); 
  
//starting

for(int i=0;i<n;i++){                       
        for(int j=0;j<n;j++){
            arrayimg[i][j]=mat[n-1-i][j];      
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
            sum1=sum1+arrayimg[i][j];
        }
    }
    }








  //ending
       for (int i = 0; i < n; i++) 
    { 
        for (int j = 0; j < n; j++){
            if(i==j){
                sum=sum+mat[i][j];
            }
        }
    }
    if(sum==k){
        cout<<"Case #"<<i<<": POSSIBLE"; 
        cout<<"\n";
    for (int i = 0; i < n; i++) 
    { 
        for (int j = 0; j < n; j++) 
            cout<<mat[i][j]<<" "; 
        cout<<"\n"; 
    } 
    }
     else if(sum1==k){
        cout<<"Case #"<<i<<": POSSIBLE"; 
        cout<<"\n";
    for (int i = 0; i < n; i++) 
    { 
        for (int j = 0; j < n; j++) 
            cout<<arrayimg[i][j]<<" "; 
        cout<<"\n"; 
    } 
    }
    else{
        cout<<"Case #"<<i<<": IMPOSSIBLE";
    }
    }
    return 0; 
} 
