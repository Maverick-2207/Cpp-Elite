#include <bits/stdc++.h> // Hashing for integers
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for (int &x : arr)
    {
        cin >> x;
    }

    // Precompute frequency (assuming elements are in range 0 to 14)
    int hash[15] = {0};
    for (int x : arr)
    {
        if (x >= 0 && x < 15)
            hash[x]++;
    }

    // Display frequencies
    cout << "\nFrequency of elements:\n";
    for (int i = 0; i < 15; i++)
    {
        if (hash[i] > 0)
            cout << "Element: " << i << " -> Frequency: " << hash[i] << '\n';
    }

    return 0;
}

== == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == ==

#include <bits/stdc++.h> // Hashing for lowercase strings (a-z)
    using namespace std;

int main()
{
    string s;
    cout << "Enter a lowercase string: ";
    cin >> s;

    int hash[26] = {0};
    for (char ch : s)
    {
        if (ch >= 'a' && ch <= 'z')
            hash[ch - 'a']++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while (q--)
    {
        char c;
        cout << "Enter character to query: ";
        cin >> c;

        if (c >= 'a' && c <= 'z')
            cout << "Frequency of '" << c << "': " << hash[c - 'a'] << '\n';
        else
            cout << "Invalid character.\n";
    }

    return 0;
}
== == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == == =

#include <bits/stdc++.h> // Hashing for all characters using unordered_map
                                                                                                                                                                         using namespace std;

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;

    unordered_map<char, int> freq;
    for (char ch : s)
    {
        freq[ch]++;
    }

    cout << "\nCharacter Frequencies:\n";
    for (auto &pair : freq)
    {
        cout << "'" << it->first << "' -> " << it->second << '\n';
    }

    return 0;
}
