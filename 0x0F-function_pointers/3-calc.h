#ifndef hi_mix
#define hi_mix
typedef struct op
{
char *c;
int (*func)(int, int);
} op_t;
int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);
int (*_p(char *a))(int, int);
#endif
