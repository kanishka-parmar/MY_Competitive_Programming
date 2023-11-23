#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if ((s[i] == 'x' && s[i + 1] == 'y') || (s[i] == 'y' && s[i + 1] == 'x'))
            {

                x++;
                i++;
            }
        }

        cout << x << endl;
    }
    return 0;
}
