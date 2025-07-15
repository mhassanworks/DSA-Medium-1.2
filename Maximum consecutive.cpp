// C++ program to find the maximum consecutive
// repeating character in given string
#include<iostream>
using namespace std;

// function to find out the maximum repeating
// character in given string
char maxRepeating(string s) {
    int n = s.length();
    int maxCnt = 0;
    char res = s[0];
    
    // Find the maximum repeating character
    // starting from s[i]
    for (int i=0; i<n; i++) {
        int cnt = 0;
        for (int j=i; j<n; j++) {
            if (s[i] != s[j])
                break;
            cnt++;
        }

        // Update result if required
        if (cnt > maxCnt) {
            maxCnt = cnt;
            res = s[i];
        }
    }
    
    return res;
}

int main() {

    string s = "aaaabbaaccde";
    cout << maxRepeating(s);
    return 0;
}
