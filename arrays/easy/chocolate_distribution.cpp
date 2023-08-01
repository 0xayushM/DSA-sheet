#include<iostream>
using namespace std;

int distribution(int arr[],int n,int m) {
    int min = INT_MAX;
    sort(arr,arr+n);
    if(n<m) return -1;
    for(int i=0;i+m-1<n;i++) {
        int diff = arr[i+m-1] - arr[i];
        if(min > diff)
            min = diff;
    }
    return min;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int m;
    cin >> m;
    cout << distribution(arr,n,m);
}