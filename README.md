# 問題

以下のコード(main.cpp)からエラーまたは、想定外の動作をしそうな箇所を
選択肢から全て選べ。
ただし、`CC`は`g++`または`clang++`であり、
実行ファイル(main)の作り方は以下のようであるとする。

```sh
CC -c nekolib.c
CC main.c nekolib.o -o main
```
また、`make`を使う場合は以下のコマンドで、実行ファイルを生成できます。

```sh
# g++
make CC=g++

# clang++
make CC=clang++
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
```

## 選択肢

1. 1行目 `#include <bits/stdc++.h>`
2. 3行目 `#define int long long`、11行目 `int m = 2147483649;`、21行目 `std::cout<<nekolib::nyannyan_function(m)<<std::endl;`
3. 4行目 `using namespace std;`、5行目 `using namespace nekolib;`、17行目 `std::cout<<max(a,b)<<std::endl;`
4. 14行目 `std::cout<<V[6]<<std::endl;`

## 解答

ANSWER.mdに解答を載せてあります。