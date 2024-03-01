#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> a;
    string input;

    while (true) {
        cin >> input;
        if (input == "99999") {
            break;
        }
        a.push_back(input);
    }

    string b = "";
    for (int i = 0; i < a.size(); i++) {
        string s = a[i];
        int sum = (s[0] - '0') + (s[1] - '0');

        string direction;
        if (sum % 2 == 1) {
            direction = "left";
        } else if (sum != 0) {
            direction = "right";
        } else {
            direction = b;
        }

        int steps = stoi(s.substr(2));
        cout << direction << " " << steps << endl;

        b = direction;
    }

    return 0;
}