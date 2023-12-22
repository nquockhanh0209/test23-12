#include <iostream>
using namespace std;

int minGoldToPassLevel(int m, int d, int k, int c)
{
    int remainingDurability = d;
    int goldSpent = 0;

    for (int i = 0; i < m; i++)
    {
        if (remainingDurability <= 0)
        {
            return -1; 
        }

        if (remainingDurability <= k)
        {
            goldSpent += c;
            remainingDurability = d;
        }
        else
        {
            remainingDurability -= k;
        }
    }

    return goldSpent;
}

int main()
{

    int m, d, k, c;
    cin >> m >> d >> k >> c;
    int sum = minGoldToPassLevel(m, d, k, c);

    cout << sum << "\n";

    return 0;
}
