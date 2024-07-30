#include <iostream>
#include <map>
 
using namespace std;
 
int main() {
    int n; cin >> n;
 
    map<string, int> mp;
 
    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;
 
        if (mp[s])
        {
            mp[s]++;
            cout << s << mp[s] - 1 << endl;
        }
        else
        {
            cout << "OK" << endl;
 
            mp[s]++;
        }
    }
 
    return 0;
}
