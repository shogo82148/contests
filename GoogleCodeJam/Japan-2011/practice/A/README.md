# 問題A. 数珠繋ぎ

Snapper はちっちゃな電化製品で、片側に入力プラグ、反対側に出力ソケットがついています。 この出力ソケットには、電球などの電化製品や、他の Snapper の入力プラグを接続することができます。

Snapper は ON か OFF の状態を持っていて、状態が ON で入力プラグから電力を受け取っているときのみ、出力ソケットに電力が供給されます。 また、あなたが指をパチリと鳴らすと、その破裂音に反応して、入力プラグから電力を受け取っている Snapper は ON/OFF の状態が切り替わります。

ある日、私は N 個の Snapper を買ってきて、1 個目の Snapper の入力プラグを電源ソケットに接続、2 個目の Snapper の入力プラグを 1 個目の出力ソケットに接続、といった要領で数珠つなぎにし、N 個目の Snapper の出力ソケットに電球を取り付けました。

はじめの状態では、Snapper はすべて OFF で、1 個目の Snapper のみに電力が供給され、電球は付いていません。 一回指を鳴らすと、1 個目の Snapper は ON になり、2 個目の Snapper に電力が供給されます。 もう一度指を鳴らすと、1 個目と 2 個目の Snapper の状態が切り替わり、2 個目の Snapper は ON であるものの電源が供給されていない、という状態になります。 3 回目には、1 個目の状態が切り替わり、1 個目と 2 個目の両方が ON になります。 もし、ここで 2 個目の出力ソケットに電球が接続されていたとすると、電球が光ります。

私は指を何時間にもわたって鳴らし続けました。 指を K 回鳴らしたとき、果たして電球は光っているでしょうか？ 電球は仕掛けのないどこにでもあるようなもので、直前の Snapper から電力を供給されているときにのみ光ります。

# 入力

1 行目にはテストケースの数 T が含まれています。その後ろに T 行が続きます。 それらの行にはそれぞれ 2 つの整数 N と K が含まれています。

# 出力

各テストケースにつき 1 行、 "Case #X: Y" と出力してください。ただし、X は 1 から始まるテストケースの番号です。Y は電球が光っているかどうかで、光っているならば "ON"、消えているならば "OFF" としてください。

# 制約

- 1 ≤ T ≤ 5000

## Small

- 1 ≤ N ≤ 10
- 0 ≤ K ≤ 100

## Large

- 1 ≤ N ≤ 30
- 0 ≤ K ≤ 108

# サンプル

##入力

    4
    1 0
    1 1
    4 0
    4 47
    
## 出力
    Case #1: OFF
    Case #2: ON
    Case #3: OFF
    Case #4: ON
    
# Source
[Google Code Jam 2011 Japan 練習問題 問題A. 数珠繋ぎ](http://code.google.com/codejam/contest/1343486/dashboard#s=p0)
© 2008-2012 Google
