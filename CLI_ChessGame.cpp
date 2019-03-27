#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <tuple>
using namespace std;


void printboard();

void makemove();

tuple <int, int> find(string) ;

class Pawn {
  private:
    string color;
    int number;

  public:
    Pawn (string c, int n) {color = c; number = n;}

    string abbr() {
      string x;
      if(color=="black" && number==1) {
        x = "bP1";
      }
      else if(color=="black" && number==2) {
        x = "bP2";
      }
      else if(color=="black" && number==3) {
        x = "bP3";
      }
      else if(color=="black" && number==4) {
        x = "bP4";
      }
      else if(color=="black" && number==5) {
        x = "bP5";
      }
      else if(color=="black" && number==6) {
        x = "bP6";
      }
      else if(color=="black" && number==7) {
        x = "bP7";
      }
      else if(color=="black" && number==8) {
        x = "bP8";
      }
      else if(color=="white" && number==1) {
        x = "wP1";
      }
      else if(color=="white" && number==2) {
        x = "wP2";
      }
      else if(color=="white" && number==3) {
        x = "wP3";
      }
      else if(color=="white" && number==4) {
        x = "wP4";
      }
      else if(color=="white" && number==5) {
        x = "wP5";
      }
      else if(color=="white" && number==6) {
        x = "wP6";
      }
      else if(color=="white" && number==7) {
        x = "wP7";
      }
      else if(color=="white" && number==8) {
        x = "wP8";
      }
       return x;
    }
  };

class Rook {
  private:
    string color;
    int number;

  public:
    Rook (string c, int n) {color = c; number = n;}

    string abbr() {
      string x;
      if(color=="black" && number==1) {
        x = "bR1";
      }
      else if(color=="black" && number==2) {
        x = "bR2";
      }
      else if(color=="white" && number==1) {
        x = "wR1";
      }
      else if(color=="white" && number==2) {
        x = "wR2";
      }
    return x;
  }
};

class Knight {
  private:
    string color;
    int number;

  public:
    Knight (string c, int n) {color = c; number = n;}

    string abbr() {
      string x;
      if(color=="black" && number==1) {
        x = "bKn1";
      }
      else if(color=="black" && number==2) {
        x = "bKn2";
      }
      else if(color=="white" && number==1) {
        x = "wKn1";
      }
      else if(color=="white" && number==2) {
        x = "wKn2";
      }
    return x;
  }
};

class Bishop {
  private:
    string color;
    int number;

  public:
    Bishop (string c, int n) {color = c; number = n;}

    string abbr() {
      string x;
      if(color=="black" && number==1) {
        x = "bB1";
      }
      else if(color=="black" && number==2) {
        x = "bB2";
      }
      else if(color=="white" && number==1) {
        x = "wB1";
      }
      else if(color=="white" && number==2) {
        x = "wB2";
      }
    return x;
  }
};

class Queen {
  private:
    string color;

  public:
    Queen (string c) {color = c;}

    string abbr() {
      string x;
      if(color=="black") {
        x = "bQ";
      }
      else if(color=="white") {
        x = "wQ";
      }
    return x;
  }
};

class King {
  private:
    string color;

  public:
    King (string c) {color = c;}

    string abbr() {
      string x;
      if(color=="black") {
        x = "bK";
      }
      else if(color=="white") {
        x = "wK";
      }
    return x;
  }
};

string board[9][9] {
  {"0", "1", "2", "3", "4", "5", "6", "7", "8"},
  {"1", "x", "x", "x", "x", "x", "x", "x", "x"},
  {"2", "x", "x", "x", "x", "x", "x", "x", "x"},
  {"3", "x", "x", "x", "x", "x", "x", "x", "x"},
  {"4", "x", "x", "x", "x", "x", "x", "x", "x"},
  {"5", "x", "x", "x", "x", "x", "x", "x", "x"},
  {"6", "x", "x", "x", "x", "x", "x", "x", "x"},
  {"7", "x", "x", "x", "x", "x", "x", "x", "x"},
  {"8", "x", "x", "x", "x", "x", "x", "x", "x"}
};


int main(int argc, char const *argv[]) {
  cout << "Please maximize your screen for optimal performance. \nI hope you enjoy the game." << endl;
  // initializing pieces
  // Pawns
  Pawn bP1 ("black", 1);
  Pawn bP2 ("black", 2);
  Pawn bP3 ("black", 3);
  Pawn bP4 ("black", 4);
  Pawn bP5 ("black", 5);
  Pawn bP6 ("black", 6);
  Pawn bP7 ("black", 7);
  Pawn bP8 ("black", 8);
  Pawn wP1 ("white", 1);
  Pawn wP2 ("white", 2);
  Pawn wP3 ("white", 3);
  Pawn wP4 ("white", 4);
  Pawn wP5 ("white", 5);
  Pawn wP6 ("white", 6);
  Pawn wP7 ("white", 7);
  Pawn wP8 ("white", 8);
  // Rooks
  Rook bR1 ("black", 1);
  Rook bR2 ("black", 2);
  Rook wR1 ("white", 1);
  Rook wR2 ("white", 2);
  // Knights
  Knight bKn1 ("black", 1);
  Knight bKn2 ("black", 2);
  Knight wKn1 ("white", 1);
  Knight wKn2 ("white", 2);
  // Bishops
  Bishop bB1 ("black", 1);
  Bishop bB2 ("black", 2);
  Bishop wB1 ("white", 1);
  Bishop wB2 ("white", 2);
  // Queens
  Queen bQ ("black");
  Queen wQ ("white");
  // Kings
  King bK ("black");
  King wK ("white");

  // initializing locations
  // Pawns
  board[2][1] = bP1.abbr();
  board[2][2] = bP2.abbr();
  board[2][3] = bP3.abbr();
  board[2][4] = bP4.abbr();
  board[2][5] = bP5.abbr();
  board[2][6] = bP6.abbr();
  board[2][7] = bP7.abbr();
  board[2][8] = bP8.abbr();
  board[7][1] = wP1.abbr();
  board[7][2] = wP2.abbr();
  board[7][3] = wP3.abbr();
  board[7][4] = wP4.abbr();
  board[7][5] = wP5.abbr();
  board[7][6] = wP6.abbr();
  board[7][7] = wP7.abbr();
  board[7][8] = wP8.abbr();
  // Rooks
  board[1][1] = bR1.abbr();
  board[1][8] = bR2.abbr();
  board[8][1] = wR1.abbr();
  board[8][8] = wR2.abbr();
  // Knights
  board[1][2] = bKn1.abbr();
  board[1][7] = bKn2.abbr();
  board[8][2] = wKn1.abbr();
  board[8][7] = wKn2.abbr();
  // Bishops
  board[1][3] = bB1.abbr();
  board[1][6] = bB2.abbr();
  board[8][3] = wB1.abbr();
  board[8][6] = wB2.abbr();
  // Queens
  board[1][4] = bQ.abbr();
  board[8][4] = wQ.abbr();
  // Kings
  board[1][5] = bK.abbr();
  board[8][5] = wK.abbr();

  // limits game to 40 moves each
  int counter = 1;
  while(counter < 80) {
    // print initialized board
    printboard();

    if(counter % 2 == 0) {
      // move cycle
      cout << "Black its your turn. \n";
      makemove();
      counter++;
    }
    else {
      // move cycle
      cout << "White its your turn. \n";
      makemove();
      counter++;
    }
  }
  return 0;
}


void printboard() {
  cout << endl;
  for(int row = 0; row < 9; row++) {
    for(int index = 0; index < 9; index++){
      cout << fixed << setw(10) << board[row][index] << setw(10) << " | ";
    }
  cout << endl;
  }
}

// finds piece, returns location as column/row tuple
tuple <int, int> find(string name) {
  int index = -1;
  int index2 = -1;
  for(index = 0; index < 9; index++) {
    for(index2 = 0; index2 < 9; index2++) {
      if(board[index][index2] == name) {
        return make_tuple(index, index2);
      }
    }
  }
}

// gets piece to move and new location,
// confirms user entry then moves piece
void makemove() {
  // get piece
  string piece;
  cout << "Please select a piece: ";
  cin >> piece;

  // get location
  int row, col;
  cout << "Enter row: ";
  cin >> row;
  cout << "Enter column: ";
  cin >> col;

  // confirm
  string confirm;
  cout << "Confirm moving " << piece << " to row " << row << ", and column " << col << ".  (y/N)?";
  cin >> confirm;
  if(confirm == "y") {
    string board_base = "x";
    tuple <int, int> prev_loc;
    prev_loc = find(piece);
    board[row][col] = piece;
    board[get<0>(prev_loc)][get<1>(prev_loc)] = board_base;
  }
  else {
    makemove();
  }
}
