// Dotyczy problemu 4.1 w arkuszu z 2020 r.

#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
  if(n < 2) return false;  // 0, 1 nie sa pierwsze
  if(n == 2) return true;  // 2 jest pierwsze
  if(n % 2 == 0) return false; // parzysta, wiêksza od 2
  for(int p=3; p < n; p += 2) // tylko nieparzyste podzielniki
    if(n % p == 0)
      return false;
  return true;
}

void goldbach(int n) // rozk³ad liczby parzystej > 4
{
  int k = 3;  // n = k + (n-k)
  while(! prime(k) || ! prime(n-k))
  {
    k += 2;
  }
  cout << k << " " << n-k << endl;
}

int main()
{
  int n;
  cin >> n;
  goldbach(n);
  return 0;
}
