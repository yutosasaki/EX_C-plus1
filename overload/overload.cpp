#include <iostream>
using namespace std;

// 絶対値を求める
int Abs(int a) {
  if ( a < 0 ) {
    return -a;
  } else {
    return a;
  }
}

double Abs(double a) {
  if( a < 0 ) {
    return -a;
  } else {
    return a;
  }
}

// 入力
int Input( int& i, double& d) {
  cout << "整数値を入力してください > " << flush;
  cin >> i;
  if( i == 0 ) {
    return 0;
  }

  cout << "小数値を入力してください > " << flush;
  cin >> d;
  if(d == 0) {
    return 0;
  }

  return 1;
}

// 絶対値の表示
void ShowAbs(int i, double d) {
  cout << i << " の絶対値は " << Abs(i) << " で, " <<endl
       << d << " の絶対値は " << Abs(d) << " です. " <<endl;
}

int main() {
  int i;
  double d;

  while(Input(i, d) != 0) {
    ShowAbs(i, d);
  }
}
