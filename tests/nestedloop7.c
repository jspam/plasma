#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, k, l, m, n, o;

    while (i != 0) {
        if (j == 0) {
            if (k == 0) {
                while (l < 0) {
                    printf("4\n");
                }
            }
            printf("5\n");
        } else {
            printf("6\n");
            do {
              if (m < 0) {
                goto loop2end;
              }
            } while (n <= 0);

            while(o > 0) {
              printf("7\n");
loop2end:
              ;
            }

            printf("8\n");
        }
    }

    return 0;
}


