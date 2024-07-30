#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string s;
    cin >> s;
    int n = s.size();
 
    int arr[100] = {};
    int ctr = 0;
 
    for (int i = 0; i < n; i++) {
        if (arr[s[i] - 'a'] == 0) {
            arr[s[i] - 'a'] = 1;
            ctr++;
        }
    }
 
    if (ctr % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
 
    return 0;
}
