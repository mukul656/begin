#include <iostream>
#include <vector>
using namespace std;

void findNonRepeatingElements(const vector<int>& arr) {
    int xor_all = 0;
    for (int num : arr) {
        xor_all ^= num;
    }
    int set_bit = xor_all & ~(xor_all - 1);
    int first_non_repeating = 0, second_non_repeating = 0;
    for (int num : arr) {
        if (num & set_bit) {
            first_non_repeating ^= num;  
        } else {
            second_non_repeating ^= num; 
        }
    }
    cout << "The two non-repeating elements are: " << first_non_repeating << " and " << second_non_repeating << endl;
}

int main() {
    vector<int> arr = {4, 5, 6, 7, 5, 4, 9, 8};
    findNonRepeatingElements(arr);
    return 0;
}
