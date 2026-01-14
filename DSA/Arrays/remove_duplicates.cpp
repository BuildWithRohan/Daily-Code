#include <iostream>
using namespace std;

#define MAX 7
int arr[MAX];

int main() {
    
    for (int i = 0; i < MAX; i++) {
        cin >> arr[i];
    }

    if (MAX == 0) {
        cout << 0 << endl;
        return 0;
    }

    int i = 0;

    for (int j = 1; j < MAX; j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }

    int uniqueCount = i + 1;

    cout << uniqueCount << endl;

    for (int k = 0; k < uniqueCount; k++) {
        cout << arr[k] << " ";
    }

    return 0;
}
