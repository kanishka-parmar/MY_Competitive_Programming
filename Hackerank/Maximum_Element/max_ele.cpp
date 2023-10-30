#include <iostream>
#include <stack>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    stack<int> s1;
    stack<int> s2;
  while(t--)
    {
        int ch=0;
        int ele=0;
        cin>>ch;
          
        switch (ch)
        {
        case 1:
            cin >> ele;
            s1.push(ele);
            if (s2.empty()==true || (ele>=s2.top()) )
                s2.push(ele);
            break;
        case 2:
            if (s1.top() == s2.top())
                  s2.pop();
            s1.pop();
            break;
        case 3:
            cout << s2.top() << endl;
            break;

        }
    }
    return 0;
}