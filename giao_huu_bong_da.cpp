
#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

int countGoalCombinations(int x, int y)
{

  std::vector<std::vector<int>> dp(x + 1, std::vector<int>(y + 1, 0));

  dp[0][0] = 1;

  for (int i = 0; i <= x; i++)
  {
    for (int j = 0; j <= y; j++)
    {

      if (i > 0)
      {
        dp[i][j] += dp[i - 1][j];
      }
      if (j > 0)
      {
        dp[i][j] += dp[i][j - 1];
      }
    }
  }

  return dp[x][y];
}

int main()
{
  int N;
  cin >> N;
  int result[N];
  for (int i = 0; i < N; i++)
  {
    int x, y;
    cin >> x >> y;
    int sum = countGoalCombinations(x, y);
    result[i] = sum;
  }

  for (int i = 0; i < N; i++)
  {
    cout << result[i] << "\n";
  }

    return 0;
  }
