#include <bits/stdc++.h>
using namespace std;

long long quick_power(long long a, long long x)
// potêgowanie szybkie O(log(x))
// a > 0, x >= 0
{
  if(x == 0)
    return 1;
  long long p = quick_power(a, x/2);
  long long result = p*p;
  if(x%2 != 0) result = a*result;
  return result;
}

int main()
{
  long long a, x;
  cin >> a >> x;
  cout << quick_power(a, x) << endl;
  return 0;
}
