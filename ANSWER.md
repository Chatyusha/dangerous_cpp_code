# はじめに

このコードは露骨に悪意を持って不具合が発生するようなコードを書いています。

# 解答

1~4全てバグの温床になり得ます。

## 1

```c++
#include <bits/stdc++.h>
```

環境依存なのでできれば使いたくないし、
不必要なヘッダーファイルをincludeしてコンパイル時間を
長くして何をしたいのかは正直分からない。

適切な使い方はこの記事が良さそう。
[https://qiita.com/hakatashi/items/f9d9abf05a002b5c4dc5](https://qiita.com/hakatashi/items/f9d9abf05a002b5c4dc5)

## 2

```c++
#define int long long
int m = 2147483649;
std::cout<<nekolib::nyannyan_function(m)<<std::endl;
```

`#define int long long` は未定義動作の一種[^1]なので、できるだけ使いたくない。

`#define int long long`のせいで`int m = 2147483649`は`long long m = 2147483649`と解釈されるのでオーバーフローはしない。

`nekolib::nyannyan_function`は引数も返値も`int`型なので確実にオーバーフロー

## 3

名前空間`std`と`nekolib`で同じ名前の関数やclassがあったらどちらが優先される？ -> わからない。
詳しくはこの記事で
[https://marycore.jp/prog/cpp/de-using-namespace-std/](https://marycore.jp/prog/cpp/de-using-namespace-std/)

## 4

```c++
std::cout<<V[6]<<std::endl;
```

配列の大きさが7より小さい場合は範囲外アクセスすることになります。

[^1]:gccでは定義済みらしい(ソース未確認)