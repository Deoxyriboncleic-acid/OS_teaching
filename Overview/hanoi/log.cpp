typedef struct {
    int pc, n, fn_result, gn_result;
    char func_type;  // 'f' for f() and 'g' for g()
} Frame;

#define call(fn, n_val) ({ *(++top) = (Frame) { .pc = 0, .n = (n_val), .func_type = (fn) }; })

int f(int n);
int g(int n);

int f(int n) {
    Frame stk[64], *top = stk - 1;
    call('f', n);
    for (Frame *f; (f = top) >= stk; f->pc++) {
        switch (f->func_type) {
            case 'f':
                switch (f->pc) {
                    case 0: 
                        if (f->n <= 1) { f->fn_result = 1; goto case2; }
                        call('f', f->n - 1);
                        break;
                    case 1:
                        f->fn_result = top[1].fn_result;
                        call('g', f->n - 2);
                        break;
                    case 2:
                        f->fn_result += top[1].gn_result;
                        top--;
                        break;
                }
                break;
            case 'g':
                switch (f->pc) {
                    case 0:
                        if (f->n <= 1) { f->gn_result = 1; goto case2; }
                        call('f', f->n + 1);
                        break;
                    case 1:
                        f->gn_result = top[1].fn_result;
                        call('g', f->n - 1);
                        break;
                    case 2:
                        f->gn_result += top[1].gn_result;
                        top--;
                        break;
                }
                break;
        }
    }
    return stk[0].fn_result;
}

int g(int n) {
    Frame stk[64], *top = stk - 1;
    call('g', n);
    for (Frame *f; (f = top) >= stk; f->pc++) {
        switch (f->func_type) {
            case 'f':
                switch (f->pc) {
                    case 0: 
                        if (f->n <= 1) { f->fn_result = 1; goto case2; }
                        call('f', f->n - 1);
                        break;
                    case 1:
                        f->fn_result = top[1].fn_result;
                        call('g', f->n - 2);
                        break;
                    case 2:
                        f->fn_result += top[1].gn_result;
                        top--;
                        break;
                }
                break;
            case 'g':
                switch (f->pc) {
                    case 0:
                        if (f->n <= 1) { f->gn_result = 1; goto case2; }
                        call('f', f->n + 1);
                        break;
                    case 1:
                        f->gn_result = top[1].fn_result;
                        call('g', f->n - 1);
                        break;
                    case 2:
                        f->gn_result += top[1].gn_result;
                        top--;
                        break;
                }
                break;
        }
    }
    return stk[0].gn_result;
}

#define case2 case 3: top--; break;