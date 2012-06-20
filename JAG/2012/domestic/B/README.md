# You Are the Judge 審判は君だ！
English text is not available in this practice contest.

あなたはプログラミングコンテスト iCPC の審判だ。今日も何事もなく試合が終わり、後は結果を出力するだけだと思いきや、突然システムが停止してしまった！　

これでは結果が出力できない！　でも、大丈夫。我々にはログがある。

あなたは優れたプログラマーであり、かつて iCPC で輝かしい成績を残したこともある。

そこであなたはシステムログから各チームの成績を割り出し、チームの順位表を出力するプログラムを作成することにした。

入力としてチームの数、問題の数、システムログが与えられる。

シムテムログは以下の 2 種類のレコードからなる。

- tID pID time CORRECT
  - 時刻 time に、チーム tID が 問題 pID に正解するプログラムを送信。
  - チーム tID の正解数に1が加算される。チーム tID のペナルティに、(チーム tID の問題 pID に対する誤答数*1200+time)が加算される。以後, チーム tID の問題 pID に対する解答は棄却され、システムログにも送信履歴が残らない。
- tID pID time WRONG
  - 時刻 time に、チーム tID が 問題 pID に誤答するプログラムを送信。
  - チーム tID の 問題 pID に対する誤答数に1が加算される。

iCPCにおける順位付けのルールは以下の通りである。

- より多くの問題を解いたチームは順位が上になる
- 解いた問題が同じ場合、ペナルティの少ないチームのほうが順位が上になる
- 解いた問題もペナルティも同じ場合、チーム番号が小さいほうのチームが順位が上になる
- 入力より与えられるコンテストの情報・システムログから各チームの成績を割り出し、チームの順位表を出力せよ。

# Input
入力は複数のデータセットからなる。各データセットは以下の形式で与えられる。

    T P R
    tID1 pID1 time1 message1
    tID2 pID2 time2 message2
    ...
    tIDR pIDR timeR messageR

データセットの1行目には 参加チーム数 T 、問題数 P、システムログのレコード数 R が含まれる。
続くR行にはシステムログの各レコードが含まれる。
システムログのレコードとして、チーム番号 tIDi、問題番号 pIDi、試合開始からの経過時間 timei、メッセージの種類 messagei が含まれる。
入力は以下の制約を満たす。

- 1 ≤ T ≤ 50
- 1 ≤ P ≤ 10
- 1 ≤ R ≤ 500
- 1 ≤ tIDi ≤ T
- 1 ≤ pIDi ≤ P
- 1 ≤ timei ≤ 10800
- messagei は CORRECT, WRONGのいずれか
- システムログのレコードは、時刻の小さいものから順に与えられ、複数のレコードの時刻が同じになることはない
- 入力の終わりはスペースで区切られた3個の0で与えられる。

# Output
与えられたシステムログより各チームの成績・順位を割り出し、順位が上のチームから順に、チーム番号、正解数、ペナルティ を出力せよ。

# Sample Input
    3 3 5
    3 1 800 WRONG
    1 1 1200 CORRECT
    3 1 1400 CORRECT
    1 2 2400 CORRECT
    1 3 3600 CORRECT
    5 2 5
    3 1 1000 WRONG
    5 2 2000 CORRECT
    3 1 2800 CORRECT
    4 1 4000 CORRECT
    5 1 5000 CORRECT
    6 3 15
    2 1 10 WRONG
    3 3 15 WRONG
    3 3 20 CORRECT
    1 1 50 CORRECT
    4 2 60 WRONG
    1 2 70 WRONG
    4 1 80 CORRECT
    1 2 90 WRONG
    1 2 150 CORRECT
    3 1 160 WRONG
    3 1 180 CORRECT
    3 2 210 WRONG
    5 3 500 CORRECT
    4 2 720 CORRECT
    5 1 1500 CORRECT
    0 0 0

# Output for Sample Input
    1 3 7200
    3 1 2600
    2 0 0
    5 2 7000
    3 1 4000
    4 1 4000
    1 0 0
    2 0 0
    4 2 2000
    5 2 2000
    1 2 2600
    3 2 2600
    2 0 0
    6 0 0

# Source
ACM International Collegiate Programming Contest , ACM-ICPC Japan Alumni Group Practice Contest for Japan Domestic 2012, 2012-06-17

[Problem 2400 on Aizu Online Judge](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2400)
