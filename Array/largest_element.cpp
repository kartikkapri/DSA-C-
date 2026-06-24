#include<bits/stdc++.h>
using namespace std;
int largestelement(vector<int>& arr,int n){
    int maxelement = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i] > maxelement)
        maxelement = arr[i];
    }
    return maxelement;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    cout << largestelement(arr,n);
    return 0;
}