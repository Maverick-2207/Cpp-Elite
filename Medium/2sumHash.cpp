#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cout << "Enter the number of elements in the array:" << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target:" << endl;
    cin >> target;

    unordered_map<int, int> map;

    for (int i = 0; i < n; i++) {
        int curr = arr[i];
        int req = target - curr;

        if (map.find(req) != map.end()) {
            cout << "Pair found at indices: " << map[req] << " and " << i << endl;
            return 0;
        }

        map[curr] = i;
    }

    cout << "No pair found that sums to the target." << endl;
    return 0;
}
