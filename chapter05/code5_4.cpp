// atcoder educational dp contest a
// frog1
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
const long long INF = 1LL << 60;

template <class T>
void chmin(T & a, T b)
{
  if (a > b)
  {
    a = b;
  }
}

int main()
{
  int N;
  cin >> N;
  vector<long long> h(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> h[i];
  }

  vector<long long> dp(N, INF);

  dp[0] = 0;

  for (int i = 0; i < N; ++i)
  {
    if (i + 1 < N)
    {
      chmin(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
    }
    if (i + 2 < N)
    {
      chmin(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));
    }
  }

  cout << dp[N - 1] << endl;

  return 0;
}
