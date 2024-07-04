
const int n = 10;
int a[n+1] = {0,5,1,8,9,7,2,3,11,20,15};

int F(int i)
{
  if(i == n)
    return n;
  else
  {
    int j = F(i+1);
    if(a[i] < a[j])
      return i;
    else
      return j;
  }
}

int main()
{
  for(int i=1; i<=n; i++)
    cout << i << " " << F(i) << endl;
  return 0;
}
