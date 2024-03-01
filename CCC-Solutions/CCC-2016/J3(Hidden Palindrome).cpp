#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool isPal(string s) {
    string rev = s; 
    reverse(rev.begin(), rev.end());
    return rev == s; 
}
int main() {
    string s; cin >> s;
    int maxlen = 0;
    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            int len = j - i + 1;
            string a = s.substr(i, len);
            if (isPal(a) && len > maxlen) {
                maxlen = len; 
            }
       }
    }
    cout << maxlen << endl;
}
