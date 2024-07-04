#include <bits/stdc++.h>
using namespace std;

const int N = 100;
bool W[N] = {false, true, false, true, true, true};

int main()
{
    for(int n=6; n<=14; n++)
        if(!W[n-1] || !W[n-3] || !W[n-4])
            W[n] = true;
        else
            W[n] = false;
    for(int n=1; n<=14; n++)
        cout << n << " " << W[n] << "\n";
    return 0;
}
