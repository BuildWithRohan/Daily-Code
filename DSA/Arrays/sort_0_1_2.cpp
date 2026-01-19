// Brute Force Approach
// Time: O(n log n)
// Space: O(1)
/*#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void sort012_brute(vector<int>& arr) {
    sort(arr.begin(), arr.end());
}

int main() {
    vector<int> arr = {0, 2, 1, 2, 0, 1};

    sort012_brute(arr);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}*/

// Better Approach
// Time: O(2n)
// Space: O(1)
/*#include <iostream>
using namespace std;

int n = 12;
int arr[12] = {0,1,2,1,2,0,1,2,0,1,1,0};

int main() {
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) cnt0++;
        else if (arr[i] == 1) cnt1++;
        else cnt2++;
    }

    int index = 0;

    for (int i = 0; i < cnt0; i++) {
        arr[index++] = 0;
    }

    for (int i = 0; i < cnt1; i++) {
        arr[index++] = 1;
    }

    for (int i = 0; i < cnt2; i++) {
        arr[index++] = 2;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}*/

// Optimal Approach
// Time: O(n)
// Space: O(1)

#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 12
int arr[MAX] = {0,1,2,0,2,1,2,2,1,0,0,1};
int main(){
    int low = 0;
    int mid = 0;
    int high = MAX-1;
    while (mid<=high)
    {
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for (int i = 0; i < MAX; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}