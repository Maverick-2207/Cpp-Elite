#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int n;
    cout << "Enter number of bits (<= 32): ";
    cin >> n;
    if (n < 0 || n > 32) {
        cout << "Invalid number of bits!" << endl;
        return 1;
    }
    // Generate binary numbers of size n
    // We will use a fixed-size bitset of 32 bits to represent the binary numbers
    cout << "Binary numbers of size " << n << ":\n";
    for (int i = 0; i < (1 << n); i++) {  // we used (1 << n) to generate numbers from 0 to 2^n - 1
        // Create a fixed-size bitset of 32 bits
        bitset<32> bits(i);              // fixed 32-bit bitset
        string s = bits.to_string();    // get full 32-bit string representation
        cout << s.substr(32 - n) << endl;  // print only last n bits
    }
    return 0;
}
// first i tried bitset<n>binary(i); but it was not working
// then i tried bitset<32>binary(i); and it worked
// bitset<32> creates a fixed-size bitset of 32 bits, which is suitable for representing binary numbers up to 32 bits.
// The to_string() method converts the bitset to a string representation, which is always 32 characters long.
// The substr(32 - n) extracts the last n bits from this string, effectively giving you the binary representation of the number with leading zeros removed.
// This approach ensures that you can handle binary representations of any size up to 32 bits without running into issues with variable-sized bitsets.