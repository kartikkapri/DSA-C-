#include<bits/stdc++.h>
using namespace std;
int seclargestelement(vector<int> arr){
    int n =  arr.size();

    int largest = INT_MIN;
    int seclargest = INT_MIN;

    for(int i =0;i<n;i++){
        if(arr[i] > largest ){
            seclargest = largest;
            largest = arr[i];
            
        }else if(arr[i] < largest && arr[i] > seclargest){
            seclargest = arr[i];
        }
    }
    return seclargest;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << seclargestelement(arr) << endl;
    return 0;
}