#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr1[n], arr2[m];

    for(int i = 0; i < n; i++) cin >> arr1[i];
    for(int i = 0; i < m; i++) cin >> arr2[i];

    int i = 0, j = 0;

    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) {
            cout << arr1[i] << " ";
            i++;
        }
        else if(arr1[i] > arr2[j]) {
            cout << arr2[j] << " ";
            j++;
        }
        else {  // equal elements
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }

    // Remaining elements
    while(i < n) {
        cout << arr1[i] << " ";
        i++;
    }

    while(j < m) {
        cout << arr2[j] << " ";
        j++;
    }

    return 0;
}
