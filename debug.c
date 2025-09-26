#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define AUGH(x) printf(#x " = %d\n", x)

int main(void)
{
    printf("Hello, World\n");
    srand(time(NULL));
    int a = rand();
    int z = ~(~~a|~a);
    int u = (~(~(~~a|~a)))/(~(~(~~a|~a)));
    int d = u << u;
    int t = u | d;
    int m1 = ~z;
    int eight = u << t;
    int sixty_four = eight << t;
    int thirty_two = eight << d;
    int thirty_one = t | t << d | u << d << d;
    int m = u << thirty_one;
    int M = ~m;
    int line_return = u << u | u << t;
    int TWO = t << d << d | u << u;
    int FOUR = t << d << d | u << d;
    int FINAL_INT = FOUR | TWO << eight | line_return << eight << eight;

    AUGH(a);
    AUGH(z);
    AUGH(u);
    AUGH(d);
    AUGH(t);
    AUGH(m1);
    AUGH(eight);
    AUGH(sixty_four);
    AUGH(thirty_two);
    AUGH(thirty_one);
    AUGH(m);
    AUGH(M);
    AUGH(line_return);
    AUGH(TWO);
    AUGH(FOUR);
    write(u, &FINAL_INT, u << d);
    write(u, &(int){FOUR | TWO << eight | line_return << eight << eight}, u | d);
}
