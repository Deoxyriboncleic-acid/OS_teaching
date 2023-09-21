#include <iostream>
#include <cassert>

// typedef struct {
//     int pc, n, fn_result, gn_result;
//     char func_type;  // 'f' for f() and 'g' for g()
// } Frame;

// #define call(fn, n_val) ({ *(++top) = (Frame) { .pc = 0, .n = (n_val), .func_type = (fn) }; })
// #define ret()     ({ top--; })
// #define goto(loc) ({ f->pc = (loc) - 1; })

int f(int n);
int g(int n);

int f(int n) {
  if (n <= 1) return 1;
  return f(n - 1) + g(n - 2);
}

int g(int n) {
  if (n <= 1) return 1;
  return f(n + 1) + g(n - 1);
}

// int f(int n) {
//     Frame stk[64], *top = stk - 1;
//     call('f', n);
//     for (Frame *f; (f = top) >= stk; f->pc++) {
//         switch (f->func_type) {
//             case 'f':
//                 switch (f->pc) {
//                     case 0: 
//                         if (f->n <= 1) { f->fn_result = 1; ret(); break;}
//                         call('f', f->n - 1);
//                         break;
//                     case 1:
//                         f->fn_result = top[1].fn_result;
//                         call('g', f->n - 2);
//                         break;
//                     case 2:
//                         f->fn_result += top[1].gn_result;
//                         ret();
//                         break;
//                     default:
//                         assert(0);
//                 }
//                 break;
//             case 'g':
//                 switch (f->pc) {
//                     case 0:
//                         if (f->n <= 1) { f->gn_result = 1; ret(); break; }
//                         call('f', f->n + 1);
//                         break;
//                     case 1:
//                         f->gn_result = top[1].fn_result;
//                         call('g', f->n - 1);
//                         break;
//                     case 2:
//                         f->gn_result += top[1].gn_result;
//                         ret();
//                         break;
//                     default:
//                         assert(0);
//                 }
//                 break;
//         }
//     }
//     return stk[0].fn_result;
// }

// int g(int n) {
//     Frame stk[64], *top = stk - 1;
//     call('g', n);
//     for (Frame *f; (f = top) >= stk; f->pc++) {
//         switch (f->func_type) {
//             case 'f':
//                 switch (f->pc) {
//                     case 0: 
//                         if (f->n <= 1) { f->fn_result = 1; ret(); break; }
//                         call('f', f->n - 1);
//                         break;
//                     case 1:
//                         f->fn_result = top[1].fn_result;
//                         call('g', f->n - 2);
//                         break;
//                     case 2:
//                         f->fn_result += top[1].gn_result;
//                         ret();
//                         break;
//                     default:
//                         assert(0);

//                 }
//                 break;
//             case 'g':
//                 switch (f->pc) {
//                     case 0:
//                         if (f->n <= 1) { f->gn_result = 1; ret(); break; }
//                         call('f', f->n + 1);
//                         break;
//                     case 1:
//                         f->gn_result = top[1].fn_result;
//                         call('g', f->n - 1);
//                         break;
//                     case 2:
//                         f->gn_result += top[1].gn_result;
//                         ret();
//                         break;
//                     default:
//                         assert(0);
//                 }
//                 break;
//         }
//     }
//     return stk[0].gn_result;
// }

// 

int main(){
  int n = 7;
  std::cout << f(n) << std::endl;
  return 0;
}