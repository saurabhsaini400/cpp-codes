#include<bits/stdc++.h>
using namespace std;
void minmax(int arr[],int n,int &min,int &max){  // agr kisi fun mein Main function se koi
                                                    //koi value pass ho rhi h PASS BY VALUE to wo changes Main function mein
                                                    //reflect nhi honge that's why we used & here . Pass by Reference.

    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
     for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }


return;
}




int main(){
    int arr[]={1,2,4,5,6};
    int min=arr[0];
    int max=arr[0];
    int n=sizeof(arr)/sizeof(arr[0]);
    minmax(arr,n,min,max);
    cout<<min<<" "<<max;


    return 0;
}
