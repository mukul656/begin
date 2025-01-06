#include <iostream>
using namespace std;
int countSetBits(int n) {
    int count = 0;
    for (int i = 0; i <= 31; i++) {
        int total_pairs = n / (1 << (i + 1));
        int remainder = n % (1 << (i + 1)); 
        count += total_pairs * (1 << i);
        count += max(0, remainder - (1 << i) + 1);
    }
    return count;
}

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int result=countSetBits(n);
    cout<<"Total set bits from 1 to " << n << " is: " << result << endl;

    return 0;
}
