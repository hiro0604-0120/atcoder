#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  // N要素の配列
  vector<int> A(N);

  // 入力処理
  for (int i = 0; i < N; i++)
  {
    cin >> A.at(i);
  }

  // 合計点
  int sum = 0;

  // 合計点を計算
  for (int i = 0; i < N; i++)
  {
    sum += A.at(i);
    // ①ここにプログラムを追記
  }
  // 平均点
  int mean = sum / N;

  // 平均点から何点離れているかを計算して出力
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
