#include <iostream>
#include <string>

using namespace std;

int FindThirdDotIndex(const string& s) {
    int dotCount = 0;
    size_t pos = 0; 
    while (pos < s.length()) {
        if (s[pos] == '.') {
            ++dotCount;
            if (dotCount == 3) {
                return pos; 
            }
        }
        ++pos; 
    }
    return -1; 
}

string ReplaceEveryFourthCharWithDot(const string& s) {
    string result = s; 
    for (size_t pos = 3; pos < result.length(); pos += 4) {
        result[pos] = '.'; 
    }
    return result; 
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    int thirdDotIndex = FindThirdDotIndex(str);
    cout << "Index of the third dot: " << thirdDotIndex << endl;

    string modifiedString = ReplaceEveryFourthCharWithDot(str);
    cout << "Modified string (param) : " << modifiedString << endl;
    cout << "Modified string (result): " << modifiedString << endl;

    return 0;
}