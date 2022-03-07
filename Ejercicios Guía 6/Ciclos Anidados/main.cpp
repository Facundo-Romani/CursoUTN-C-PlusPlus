
#include <iostream>

using namespace std;

int main()
{
    int maxp = 0;
    int gmax;
    int n;
    int x;

    for (x = 0; x < 10; x++)
    {

        cin >> n;
        int ct = 0;
        int cip = 0;

        while (n != 0)
        {
            ct++;
            if ((n % 2 != 0) && (n > 0))
            {
                cip++;
            }

            cin >> n;
        }

        int por = (cip * 100) / ct

                  if (por > maxp)
        {
            maxp = p;
            gmax = x + 1;
        }
    }
    count << "Grupo con mayor porcentaje de numeros impares positivos: " << gmax << endl;

    return 0;
}
