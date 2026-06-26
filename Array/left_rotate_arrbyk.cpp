#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateanticlockwise(vector<int>& arr, int k) {
        int n = arr.size();
        if (n == 0) return;
        k = k % n;
        
        reverse(arr.begin() + k, arr.end());
        reverse(arr.begin(), arr.begin() + k);
        reverse(arr.begin(), arr.end());
    }
};

int main() {
        vector<int> arr = {1, 2, 3, 4, 5};
        int k = 2;
        Solution obj;
        obj.rotateanticlockwise(arr, k);
        cout << "Rotated array: ";
        for (int x : arr) {
        cout << x << " ";
    }
        return 0;
}