// Write a program to find Sum of digits of a number
#include <iostream>
using namespace std;
void findsum(int ok) {
  int b = 0;
  while (ok != 0) {
    b = b + ok % 10;
    ok = ok / 10;
  }
  cout << b << endl;
}
int main() {
  int a = 4521;
  findsum(a);
}