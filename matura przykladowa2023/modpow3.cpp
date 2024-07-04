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

long long modular_power(long long a, long long x, long long M)
// potêgowanie modularne O(log(x))
// a > 0, x >= 0, M > 0
{
  if(x == 0)
    return 1;
  long long p = modular_power(a, x/2, M);
  long long result = (p*p) % M;
  if(x%2 != 0) result = (a*result) % M;
  return result;
}

bool find_x(long long M, long long a, long long b)
{
  for(int x=0; x<=M-1; x++)
    if(modular_power(a, x, M) == b) return true;

  return false;
}

int main()
{
  long long M, a, b;
  cin >> M >> a >> b;
  cout << find_x(M, a, b) << endl;
  return 0;
}
