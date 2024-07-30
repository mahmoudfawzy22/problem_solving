#include <iostream>
#include <stack>
using namespace std;
 
int main() {
   string s; cin >> s;
 
   int size = s.length();
   stack<char> st;
   for (int i = 0; i < size; i++)
   {
       if (!st.empty() && st.top() == s[i])
           st.pop();
       else
           st.push(s[i]);
   }
 
   if (st.empty())
       printf("Yes");
   else
       printf("No");
 
    return 0;
}
