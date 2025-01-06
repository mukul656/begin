#include <bits/stdc++.h>
using namespace std;
int square(int n) {
    int result = 0;
    int odd = 1;  
    for (int i = 0; i < n; i++) {
        result += odd; 
        odd += 2;      
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int result = square(n);
    cout << "The square of " << n << " is: " << result << endl;
    return 0;
}
