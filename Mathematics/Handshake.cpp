#include <bits/stdc++.h>

using namespace std;

//Complete the handshake function below.
int handshake(int n) {
    //each of the n people can shake hands with n - 1 people (they would not shake their own hand), and the handshake between two people is not counted twice
    return n*(n-1)/2;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = handshake(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
