#include <iostream>
#include <vector>
#include <string>
#include <algorithm>



using namespace std; 
int main()
{
    int n; cin >> n;
    vector<string> students(n);
    vector<string> partners(n);

    for (int i = 0; i < students.size(); i++) {
        cin >> students[i];
    }

    for (int i = 0; i < partners.size(); i++) {
        cin >> partners[i];
    }

    vector< pair <string, string> > v;

    for (int i = 0; i < n; i++) {
        v.push_back(make_pair(partners[i], students[i]));

    }

    vector<int> a;

    for (int i = 0; i < v.size(); i++) {
        bool exists = find(v.begin(), v.end(), make_pair(v[i].second, v[i].first)) != v.end();
        if (exists) {

            a.push_back(1);
        }
        else {

            a.push_back(0);

        }
    }



    for (int i = 0; i < n; i++) {
        if (students[i] == partners[i]) {
            a.push_back(0);
        }
        else {
            bool found = false;
            for (int j = 0; j < n; j++) {
                if (students[j] == partners[i] && partners[j] != students[i]) {
                    found = true;
                    break;
                }
            }
            if (found) {
                a.push_back(0);
            }
            else {
                a.push_back(1);
            }
        }
    }

        if (students.size() != partners.size()) {
            a.push_back(0);
        }
      
        bool has0 = find(a.begin(), a.end(), 0) != a.end();
        if (has0) {
            cout << "bad";
        }
        else {
            cout << "good";
        }



        return 0;
    }