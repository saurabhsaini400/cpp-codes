#include <bits/stdc++.h>
using namespace std;

void update(int *a,int *b) {
    
    int sum=*a+*b;
    int dif=(*a-*b>0?(*a-*b):-(*a-*b));
    *a=sum;
    *b=dif;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<endl<<b;
    return 0;
}

