#include<bits/stdc++.h>
using namespace std;
int main(){
 for(int i=1;i<=3;i++){
     for(int j=1;j<=5;j++){
         if(i>1&&i<3){
         if(j>1&&j<5){
             cout<<"  ";
         }
         else{
             cout<<" *";
         }
         }
         else{
             cout<<" *";
         }
     }
    
     cout<<"\n";
 }



    return 0;
}
