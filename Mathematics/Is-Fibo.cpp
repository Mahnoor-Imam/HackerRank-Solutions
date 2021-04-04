#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
string solve(long n) {
    int size = 52; // due to exponential growth the max value is reached in 50 entries only
    long f[size];
    f[0] = 0;
    f[1] = 1;
    
    if(n == 0 || n == 1)
        return "IsFibo";
    for (int i = 2; i < size; i++)
    {
        f[i] = f[i-1] + f[i-2];
        if (f[i] == n)
            return "IsFibo";
    }

    return "IsNotFibo";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string result = solve(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
