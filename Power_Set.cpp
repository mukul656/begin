#include <bits/stdc++.h>
using namespace std;
void generatePowerSet(const vector<int>& set) {
    int n = set.size();
    int powerSetSize = 1 << n;      
    for (int subsetMask = 0; subsetMask < powerSetSize; ++subsetMask) {
        vector<int> subset;
        for (int i = 0; i < n; ++i) {
            if (subsetMask & (1 << i)) {
                subset.push_back(set[i]);
            }
        }
        cout << "{ ";
        for (int elem : subset) {
            cout << elem << " ";
        }
        cout << "}" << endl;
    }
}

int main() {
    vector<int> set = {1, 2, 3};  
    cout << "Power set of the given set is: " << endl;
    generatePowerSet(set);
    
    return 0;
}
