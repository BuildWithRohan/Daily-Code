#include <iostream>
#include <vector>
#include <unordered_map>
#include <utility>

using namespace std;

bool twoSum(vector<int>& arr, int target, pair<int,int>& indices) {
    unordered_map<int, int> mp; // value -> index

    for (int i = 0; i < arr.size(); i++) {
        int need = target - arr[i];

        if (mp.find(need) != mp.end()) {
            indices = {mp[need], i};
            return true;
        }

        mp[arr[i]] = i;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    pair<int,int> indices;
    if (twoSum(arr, target, indices)) {
        cout << "YES\n";
        cout << "Indices: " << indices.first << " " << indices.second << "\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
