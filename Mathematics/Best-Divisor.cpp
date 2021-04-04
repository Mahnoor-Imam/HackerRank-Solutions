#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int bestDivisor = 0, bestDivisorSum = 0;
    int temp, sum;
    for(int i=1; i<=n; i++)
    {
        if(n%i == 0)
        {
            temp = i;
            sum = 0;
            while(temp > 0)
            {
                sum += temp % 10;
                temp /= 10;
            }
            if(sum > bestDivisorSum || (sum == bestDivisorSum && i < bestDivisor))
            {
                bestDivisor = i;
                bestDivisorSum = sum;
            }
        }
    }
    cout << bestDivisor;

    return 0;
}
