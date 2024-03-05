#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Introduceti un numar: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        bool prim = true; // Presupunem că i este prim, dacă nu găsim un divizor

        if (i < 2)
        {
            prim = false;
        }
        else
        {
            for (int d = 2; d * d <= i; d++)
            {
                if (i % d == 0)
                {
                    prim = false; // Am găsit un divizor, deci i nu este prim
                    break;        // Putem opri bucla, nu mai trebuie să continuăm să căutăm
                }
            }
        }

        if (prim)
        {
            cout << i << endl;
        }
    }
    return 0;
}
