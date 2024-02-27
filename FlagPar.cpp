#include <iostream>
using namespace std;

int main()
{
    int n, x;
    bool par = false;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            par = true;
            break;
        }
    }

    if (par == false)
    {
        cout << "Sirul nu contine numere pare";
    }
    else
    {
        cout << "Sirul contine cel putin un numar par";
    }
    return 0;
}