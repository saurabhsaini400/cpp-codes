#include<bits/stdc++.h>
#define N 1005
using namespace std;
vector<int> v;
vector<vector<int>> dv;
int main(){

for(int i=0;i<5;i++){
    int p;
    cin>>p;
    v.push_back(p);

}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

//2d vector

for(int i=0;i<3;i++){
    vector<int>temp;
    for(int j=0;j<3;j++){
        int b;
        cin>>b;
        temp.push_back(b);
    }
    dv.push_back(temp);
}
for(int i=0;i<dv.size();i++){
    for(int j=0;j<dv[i].size();j++){ //yaha dv[i].size() isliye liya h kyoki,
                                        // ith row ka size pta hona chahiye in case of not having Square matrix
        cout<<dv[i][j]<<" ";
    }
    cout<<"\n";
}
    return 0;
}
