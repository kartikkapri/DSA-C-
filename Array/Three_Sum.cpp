#include<bits/stdc++.h>
using namespace std;

// Brute Force O(n^3)
// find all triplets arr[i]+arr[j]+arr[k]==0
vector<vector<int>> threeSum(vector<int>& arr) {
    int n = arr.size();
    set<vector<int>> st;

    for(int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++)
            for(int k = j+1; k < n; k++)
                if(arr[i]+arr[j]+arr[k] == 0) {
                    vector<int> tmp = {arr[i], arr[j], arr[k]};
                    sort(tmp.begin(), tmp.end());
                    st.insert(tmp);
                }
    return vector<vector<int>>(st.begin(), st.end());
}

// Optimal: Sort + Two Pointer O(n^2)
vector<vector<int>> threeSumOptimal(vector<int>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> res;

    for(int i = 0; i < n-2; i++) {
        if(i > 0 && arr[i] == arr[i-1]) continue;  // skip duplicates
        int left = i+1, right = n-1;
        while(left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if(sum == 0) {
                res.push_back({arr[i], arr[left], arr[right]});
                while(left < right && arr[left] == arr[left+1]) left++;
                while(left < right && arr[right] == arr[right-1]) right--;
                left++; right--;
            }
            else if(sum < 0) left++;
            else right--;
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    vector<vector<int>> res = threeSumOptimal(arr);
    for(auto& v : res)
        cout << v[0] << " " << v[1] << " " << v[2] << "\n";

    return 0;
}
