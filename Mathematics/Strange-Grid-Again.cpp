#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

long strangeGrid(int r_, int c_) {
    long r = r_, c = c_;
  
    if(r%2 == 0)
        return 5*(r-2) + 2*(c-1) + 1;
    else
        return 5*(r-1) + 2*(c-1);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string rc_temp;
    getline(cin, rc_temp);

    vector<string> rc = split_string(rc_temp);

    int r = stoi(rc[0]);

    int c = stoi(rc[1]);

    long result = strangeGrid(r, c);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
