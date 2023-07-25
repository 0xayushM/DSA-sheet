#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    int start = 0;
    int last = n-1;
    while(start != last && start < last) {
        int temp = arr[start];
        arr[start] = arr[last];
        arr[last] = temp;
        start++;
        last--;
    }
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    return 0;
}