// input [ 0 , 1 , 0, 2 , 4 ,5]
// output [1 , 2 , 4 ,5 , 0 , 0 ]
#include<bits/stdc++.h>
using namespace std;

void movezeroend(int arr[], int n) {
    int j = 0;  // position for next non-zero

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    movezeroend(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}