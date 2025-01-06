#include<bits/stdc++.h>
using namespace std;

bool pow_of_two(int n){
    return (n>0) && (n&(n-1))==0;
}
int main(){
    int n;
    cin>>n;

    if(pow_of_two(n)){
        cout<<n<<"is power of 2 ";
    }
    else{
        cout<<n<<"is not power of 2 ";
    }

    return 0;
}