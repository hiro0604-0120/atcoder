#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);

  for (int i = 0; i < N; i++)
  {
    cin >> A.at(i);
  }
  int sum = 0;

  for (int i = 0; i < N; i++)
  {
    sum += A.at(i);
  }
  int mean = sum / N;

  for (int i = 0; i < N; i++)
  {
    int result = mean - A.at(i);

    if(result > 0 ){
    cout << result << endl;
    }
    else {
      int AbsoluteValue = result * -1;
      cout << AbsoluteValue << endl;
    }
  }
}
