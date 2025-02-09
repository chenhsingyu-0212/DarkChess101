# DarkChess101

此為教學用的專案，旨在學習與了解 AI 電腦對局，我們使用暗棋作為學習的遊戲。

- 講義網址：https://drive.google.com/file/d/1oIJ-zjAXbN_c9iCO1MkFKKxQ8bOJcph7/view?usp=drive_link

## AI Computer Game

電腦對局是 AI 領域中非常重要的一個分支，自電腦被發明後，許多人就熱衷於研究讓電腦會下棋。

或許許多人會認為 AI 等於神經網路，不過傳統的 AI 其實是泛指可以表現出類似於人類的思維的程式，而我們將藉由個專案讓大家了解到傳統的 AI。

### Computer Game Type

電腦對局可以區分成多種類別，像依照人數可以分成：

- **單人對局**
  - 如：Nonogram
- **雙人對局**
  - 如：圍棋、暗棋
- **多人對局**
  - 如：麻將、橋牌

而依照盤面資訊是否完全(隨機性)可以分成：

- **perfect-information games**
  - 如：西洋棋、圍棋
- **imperfect-information games**
  - 如：暗棋、麻將

## Prior knowledge

此專案使用 C++ 所撰寫的，需要先了解一些 C++ 的語法，包括：變數、條件運算子、if-else、for loop 以及陣列等。

## Dark Chess platform

- **暗棋平台下載網址：** http://120.126.151.216/index.php
- **暗棋平台說明文件：** http://120.126.151.216/Data/Other/DarkChess/README.pdf

## Algorithm

使用 `mix-max search tree` 來作為整個暗棋程式的思考主體。

## Try it

我們主要挖空了兩個部分

- `Referee()`
  - 用於判斷走其是否有合法
- `Evaluate()`
  - 用評估某個盤面的分數高或低