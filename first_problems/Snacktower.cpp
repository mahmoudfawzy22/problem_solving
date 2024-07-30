#include <iostream>
#include <queue>
 
using namespace std;
 
int main() {
    int n; cin >> n;
 
    int count = n; 
    priority_queue<int> pq;
 
    for (int i = 0; i < n; i++)
    {
        int current; cin >> current; 
 
        if (current == count)
        {
            cout << current; 
 
            count--; 
            while(!pq.empty() && pq.top() == count)
            {
                cout << " " << count;
                pq.pop();
 
                count--;
            }
            if (count > 0)
                cout << endl;
        }
        else
        {
            pq.push(current);
            cout << endl;
        }
    }
 
    return 0;
}
