# 問題

以下のコード(main.cpp)からエラーまたは、想定外の動作をしそうな箇所を
全て選べ。
ただし、`CC`を任意のC++コンパイラ(g++/clang++)、
実行ファイル(main)の作り方は以下のようであるとする。

```sh
CC -c nekolib.c
CC main.c nekolib.o -o main
```

```c++:main.cpp
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
  std::cin >> N;
  std::vector<int> V(N,10);
  std::cout<<V[6]<<std::endl;

  // a,bのうち大きい方を表示
  std::cout<<max(a,b)<<std::endl;

  // nekolib:nyannyan_function(x)はxに1足した数を返す関数
  std::cout<<nekolib::nyannyan_function(m)<<std::endl;
  return 0;
}
```