#ifndef hi_mix
#define hi_mix
typedef struct mix
{
char *c;
int (*func)(int, int);
} t_mix;
int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);
int *_p(char *a);
#endif
