#include <iostream>
using namespace std;

void Func1();
void Func2();
void Func3();
void Func4();
void Func5();
void Func6();

int main() {
  Func1();
}


void Func1() { Func2(); }
void Func2() { Func3(); }
void Func3() { Func4(); }
void Func4() { Func5(); }
void Func5() { Func6(); }
void Func6() {

  cout << "good job!" << endl;
}
