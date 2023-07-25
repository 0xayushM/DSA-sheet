#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int max = INT_MAX, min = INT_MIN;
    if(arr[0] < arr[1]) {
        min = arr[0];
        max = arr[1];
    } else {
        min = arr[1];
        max = arr[0];
    }
    for(int i=2;i<n;i++) {
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] >= max)
            max = arr[i];
    }
    cout << min << " " << max;
    return 0;
}