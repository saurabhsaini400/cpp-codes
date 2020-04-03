#include<bits/stdc++.h>
using namespace std;
int main(){
for(int i=1;i<=4;i++){
    for(int j=4;j>i;j--){
        cout<<" ";
    }
    for(int k=1;k<i;k++){
        cout<<"*";
    }
    for(int l=1;l<=4;l++){
        cout<<"*";
    }
    for(int m=1;m<i;m++){
        cout<<"*";
    }
    for(int j=4;j>i;j--){
        cout<<"  ";
    }
    for(int k=1;k<i;k++){
        cout<<"*";
    }
    for(int l=1;l<=4;l++){
        cout<<"*";
    }
    for(int m=1;m<i;m++){
        cout<<"*";
    }
    cout<<"\n";
}

for(int q=1;q<=19;q++){
    for(int r=1;r<q;r++){
        cout<<" ";
    }
 
    for(int t=19;t>=2*q-1;t--){
        cout<<"*";
    }
    cout<<"\n";
}



    return 0;
}
