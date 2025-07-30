#include <bits/stdc++.h>// to find the maj element in the array !
using namespace std;

int MajElement(vector<int> v) {
    int cnt = 0;
    int el;

    // Step 1: Finding potential candidate
    for(int i = 0; i < v.size(); i++) {
        if(cnt == 0) {
            cnt = 1;
            el = v[i];
        } 
        else if(v[i] == el) {
            cnt++;
        } 
        else {
            cnt--;
        }
    }

    // Step 2: Verifying the candidate
    int cnt1 = 0;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == el) cnt1++;
    }

    if(cnt1 > v.size() / 2) {
        return el;
    }
    return -1;
}

int main() {
    int n;
    vector<int> arr;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x); // ✅ Properly filling vector
    }

    int element = MajElement(arr);

    if(element != -1)
        cout << "Majority element is: " << element << endl;
    else
        cout << "No majority element found." << endl;

    return 0;
}
