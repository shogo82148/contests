# Equation 恒等式
English text is not available in this practice contest.

論理演算では，値は T と F の2種類だけを扱う．

"-"を単項演算子（入力が 1 つの演算を表す記号）， "*", "+", "->" を 2 項演算子（入力が 2 つの演算を表す記号）とする． "-" は論理否定(NOT)， "*" は論理積(AND)， "+" は論理和(OR)， "->" は論理包含(IMP)を表す演算子である． これらの論理演算の真理値表を下の表に示す．


論理式は以下のいずれかの形式である． X, Yは論理式とし， 2 項演算子は必ず括弧で囲むものとする．

- 定数: T, F
- 変数: a, b, c, d, e, f, g, h, i, j, k
- 論理否定: -X
- 論理積: (X*Y)
- 論理和: (X+Y)
- 論理包含: (X->Y)

2 つの論理式を等号 "=" で結合した等式が与えられる． 恒等式とは，式に現れる変数がどのような値であっても成立する等式のことである． 与えられた等式が恒等式であるかを判定するプログラムを作りたい．

# Input
入力は複数の行で構成され，各行は 1 つのデータセットである． データセットはT, F, a, b, c, d, e, f, g, h, i, j, k, (, ), =, -, +, *, > から成る文字列であり， 空白など他の文字を含まない． 1 行の文字数は 1000 文字以下と仮定してよい．

1 つのデータセットは等式ひとつを含む． 等式の文法は次の BNF で与えられる． すべての等式はこの構文規則に従う．

    <equation> ::= <formula> "=" <formula>
    <formula>  ::= "T" | "F" |
    "a" | "b" | "c" | "d" | "e" | "f" |
    "g" | "h" | "i" | "j" | "k" |
    "-" <formula> |
    "(" <formula> "*" <formula> ")" |
    "(" <formula> "+" <formula> ")" |
    "(" <formula> "->" <formula> ")"

入力の終わりは "#" だけからなる行で示されており，この行はデータセットではない．

# Output
各データセットについて，等式が恒等式であれば“YES”を， そうでなければ“NO”をそれぞれ1行に出力しなさい． 出力には余分な文字を含んではならない．

# Sample Input

    -(a+b)=(-a*-b)
    (a->b)=(-a+b)
    ((a*T)+b)=(-c+(a*-b))
    #

# Output for Sample Input

    YES
    YES
    NO