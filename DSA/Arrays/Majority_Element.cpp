// Majority Element - Brute Force
// Time: O(n^2), Space: O(1)

/*#include <iostream>
#include <vector>
using namespace std;

int majorityElementBrute(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > n / 2)
            return arr[i];
    }
    return -1;
}

int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElementBrute(arr);
    return 0;
}*/

// Majority Element - Better Approach (Hash Map)
// Time: O(n), Space: O(n)

/*#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int majorityElementBetter(vector<int>& arr) {
    unordered_map<int, int> freq;
    int n = arr.size();

    for (int x : arr) {
        freq[x]++;
        if (freq[x] > n / 2)
            return x;
    }
    return -1;
}

int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElementBetter(arr);
    return 0;
}*/

// Majority Element - Optimal (Moore's Voting Algorithm)
// Time: O(n), Space: O(1)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    int ele = 0;

    for(int i = 0; i < n; i++) {
        if(count == 0) {
            count = 1;
            ele = arr[i];
        }
        else if(arr[i] == ele) {
            count++;
        }
        else {
            count--;
        }
    }

    int count1 = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == ele) {
            count1++;
        }
    }

    if(count1 > n / 2) {
        cout << ele << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}