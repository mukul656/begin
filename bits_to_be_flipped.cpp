#include <iostream>
using namespace std;
int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;  
        n >>= 1;          
    }
    return count;
}
int countBitsToFlip(int a, int b) {
    int xor_result = a ^ b; 
    return countSetBits(xor_result);
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    int result = countBitsToFlip(a, b);
    cout << "Number of bits to be flipped to convert " << a << " to " << b << " is: " << result << endl;
    
    return 0;
}
