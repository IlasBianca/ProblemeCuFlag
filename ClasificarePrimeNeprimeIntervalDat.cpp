#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        bool prim = true;
        if (i < 2)
        {
            prim = false;
            cout << i << " nu e prim" << endl;
        }
        else
        {
            for (int d = 2; d * d <= i; d++)
            {
                if (i % d == 0)
                {
                    prim = false;
                    cout << i << " nu e prim" << endl;
                }
            }
        }
        if (prim == true)
        {
            cout << i << " e prim" << endl;
        }
    }
    return 0;
}
