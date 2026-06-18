#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                cout << i << " " << j;
                return 0;
            }
        }
    }

    return 0;
}


// approach 2 using two pointer technique
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int,int>> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i;   // store original index
    }

    int target;
    cin >> target;

    sort(arr.begin(), arr.end());

    int left = 0;
    int right = n - 1;

    while(left < right) {
        int sum = arr[left].first + arr[right].first;

        if(sum == target) {
            cout << arr[left].second << " " << arr[right].second;
            return 0;
        }
        else if(sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return 0;
}