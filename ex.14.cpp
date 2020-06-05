#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  vector<int> vec = {a, b, c};
  //値を背の低い順に並べ替える
  sort(vec.begin(), vec.end());// {a < b < c}
  int row = vec[0];

  //値を背の高い順に並べかえる
  reverse(vec.begin(), vec.end());
  int high = vec[0];

  int diff = high - row;
  cout << diff << endl;
}
