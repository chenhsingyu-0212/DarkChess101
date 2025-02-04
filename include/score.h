#ifndef SCORE_INCLUDED
#define SCORE_INCLUDED

class score {
 public:

  score(void);
  ~score(void);

  // set the score level of the chess
  void setScoreLevel(int scoreLevel[7]);
  
  // get the dynamic score of the chess
  // opponent-King, opponent-Guards, opponent-Ministers, opponent-Rooks, 
  // opponent-Knights, opponent-Cannons, opponent-Pawns, our side chess type
  double getDynamicScore(int K, int G, int M, int R, int N, int C, int P, int chessType);

 private:
  int scoreLevel[7] = {6000, 2700, 900, 400, 150, 2000, 100};
};

#endif