#include "thread.h"

void Thello(int id) {
  while (1) {
    //TODO:解释一下语法
    //printf("%c", "_ABCDEFGHIJKLMNOPQRSTUVWXYZ"[id]);
  }
}

int main() {
  for (int i = 0; i < 10; i++) {
    spawn(Thello);
  }
}