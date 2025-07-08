#include<bits/stdc++.h>  // hashing for integers !!
using namespace std;  

int main(){  

    int num;  
    cout << "Enter the number of elements: ";  
    cin >> num;  

    vector<int> arr(num);  // Using vector instead of array  
    cout << "Enter the elements:" << endl;  
    for(int i = 0; i < num; i++) {  
        cin >> arr[i];  
    }  

    // Precomputing frequency
    int hash[15] = {0};  
    for(int i = 0; i < num; i++) {  
        hash[arr[i]]++;  
    }  

    // Displaying the frequency
    cout << "\nFrequency of elements:\n";  
    for(int i = 0; i < 15; i++) {  
        if(hash[i] > 0)
            cout << "Element: " << i << " -> Frequency: " << hash[i] << endl;  
    }  

    return 0;  
}

//===================================HASHING FOR STRING =====================================
#include<bits/stdc++.h>     // Include all libraries  
using namespace std;  

int main() {  
    string s;  
    cin >> s;                // Take string input  

    // Pre-compute frequency of characters
    int hash[26] = {0};       // Hash array of size 26 (for a-z) initialized to 0  , 

    for(int i = 0; i < s.size(); i++) {  
        hash[s[i] - 'a']++;   // Increment the frequency of each character  
    }  

    int q;  
    cin >> q;                 // Take number of queries  

    while(q--) {               // Loop for queries  
        char c;  
        cin >> c;              // Take the character to query  
        cout << hash[c - 'a'] << endl;  // Print the frequency of the character  
    }  

    return 0;  

    //=====================hashing for string (optimal approach=)==============================

    #include<bits/stdc++.h>  
using namespace std;  

int main() 
    string s; 
    cout << "Enter the string: ";  
    cin >> s;  

    // Using an unordered map for dynamic hashing
    unordered_map<char, int> freq;  

    // Pre-compute the frequency of each character  
    for(char ch : s) {  
        freq[ch]++;  
    }  

    // Display the frequencies  
    cout << "\nCharacter Frequencies:\n";  
    for(auto &pair : freq) {  
        cout << "'" << pair.first << "' -> " << pair.second << endl;  
    }  

    return 0;  
}



