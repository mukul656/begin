#include <iostream>
#include <climits>
using namespace std;
int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }
    bool isNegative = (dividend < 0) ^ (divisor < 0);
    long long absDividend = abs((long long)dividend);
    long long absDivisor = abs((long long)divisor);
    int quotient = 0;
    for (int i = 31; i >= 0; --i) {
        if ((absDivisor << i) <= absDividend) {
            absDividend -= (absDivisor << i);
            quotient += (1 << i);
        }
    }
    return isNegative ? -quotient : quotient;
}

int main() {
    int dividend, divisor;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    
    int result = divide(dividend, divisor);
    cout << "Result of division: " << result << endl;
    
    return 0;
}
