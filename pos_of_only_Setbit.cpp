#include<bits/stdc++.h>
using namespace std;

int pos_of_only_setbit(int n){
    if(n<=0 || (n&(n-1))!=0){
        return -1;
    }
    return (log2(n)+1);
}
int main(){
    int n;
    cin>>n;

    int pos=pos_of_only_setbit(n);
    if(pos==-1) cout<<"No. is either zero or not power of 2 ";
    else cout<<"position of only set bit is "<<pos;

    return 0;
}