#include <bits/stdc++.h>
using namespace std;

void badtameez_pattern(int n) {
    int num = 1;
    int freq = 1;
    int start;

    for (int i=1;i<=n;i++) {
        start=num;

        // Print the pattern row
        for (int j=1;j<=i;j++) {
            cout << num << " ";
            num += 2;
        }

        cout << endl;

        // Adjust frequency based on row number
        if (i % 2 != 0)
            freq = i;
        else
            freq = i - 1;

        // Update starting number for the next row
        num = start + freq;
    }
}

int main(){
    int n;
    cout<<"number btao paaji : ";
    cin>>n;
    cout<<"ae lo paaji.. tuada pattern.."<<endl;
    badtameez_pattern(n);
    
 
    return 0;
}