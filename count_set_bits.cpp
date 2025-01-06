#include <bits/stdc++.h>
using namespace std;
int count_set_bits(int n) {
    int count = 0;
    while(n){
        n=n&(n - 1);
        count++;
    }
    return count;
}

int main() {
    int n;
    cout<<"Enter an integer: ";
    cin>> n;
    cout<<"Number of set bits: " << count_set_bits(n) << endl;
    
    return 0;
}
