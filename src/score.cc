#include "score.h"

score::score(void) {}
score::~score(void) {}

void score::setScoreLevel(int scoreLevel[7]) {
  for (int i = 0; i < 7; i++) {
    this->scoreLevel[i] = scoreLevel[i];
  }
}

double score::getDynamicScore(int P, int C, int N, int R, int M, int G, int K,
                              int chessType) {
  switch (chessType) {
    case 0:
      return this->scoreLevel[0] + P * 10 + K * 600;
      break;
    case 1:
      return this->scoreLevel[1] + P * 10 + C * 200 + N * 15 + R * 40 + M * 90 +
             G * 270 + K * 600;
      break;
    case 2:
      return this->scoreLevel[2] + P * 10 + C * 200 + N * 15;
      break;
    case 3:
      return this->scoreLevel[3] + P * 10 + C * 200 + N * 15 + R * 40;
      break;
    case 4:
      return this->scoreLevel[4] + P * 10 + C * 200 + N * 15 + R * 40 + M * 90;
      break;
    case 5:
      return this->scoreLevel[5] + P * 10 + C * 200 + N * 15 + R * 40 + M * 90 +
             G * 270;
      break;
    case 6:
      return this->scoreLevel[6] + C * 200 + N * 15 + R * 40 + M * 90 +
             G * 270 + K * 600;
      break;
  }
}
