#include <iostream>

using namespace std;

int main()
{
    int i,aux;

    int a[] = {2, 14, 1, 4, 9, 11, 7};

    int max1 = a[0];
    int max2 = a[1];

    if(max1 < max2)
    {
        aux = max1;
        max1 = max2;
        max2 = aux;
    }

    for(i = 2; i < 7; i++)
    {
        if(max1 < a[i])
        {
            max2 = max1;
            max1 = a[i];
        }
        else if(max2 < a[i] && a[i] < max1)
            max2 = a[i];
    }
    cout << "Cele mai mari 2 valori din sir sunt: " << max1 << ", " << max2 << endl;

    return 0;
}
