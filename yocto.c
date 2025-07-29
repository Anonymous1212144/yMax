#include <stdio.h>
int main() {
    for (char l[99]; *fgets(l, 99, stdin) - 'q'; puts("resign"), fflush(stdout));
}
