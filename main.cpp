#include <bits/stdc++.h>
#include "./nekolib.hpp"
#define int long long
using namespace std;
using namespace nekolib;

signed main () {
  int N;
  int a = 2;
  int b = 3;
  int m = 2147483649;
  std::cin >> N; // 入力は1以上100以下の整数であることが保証されている。
  std::vector<int> V(N,10);
  std::cout<<V[6]<<std::endl;

  // a,bのうち大きい方を表示
  std::cout<<max(a,b)<<std::endl;

  // nekolib:nyannyan_function(x)はxに1足した数を返す関数で以下のように定義されています。
  // int nyannyan_function(int x){returnx+1;}
  std::cout<<nekolib::nyannyan_function(m)<<std::endl;
  return 0;
}
