#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[]={3,-2,1,4};
	int max=4;
	int mat[6][4]={0};
	
	for(int i=0;i<4;i++){
	    int curr=arr[i];
	    if(curr>0){
	    for(int j=max-curr;j<max;j++){
	        mat[j][i]=99;
	    }
	    }
	    else{
	        for(int j=max;j<6;j++){
	        mat[j][i]=99;
	    }
	    }
	}
	for(int i=0;i<6;i++){
	    for(int j=0;j<4;j++){
	        cout<<mat[i][j]<<" ";
	    }
	    cout<<endl;
	}
		return 0;
}


// OUTPUT:
// 0  0  0  99 
// 99 0  0  99 
// 99 0  0  99 
// 99 0  99 99 
// 0  99 0  0 
// 0  99 0  0 
