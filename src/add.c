#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    if(argc == 3) {
        int nr1 = atoi(argv[1]);
        int nr2 = atoi(argv[2]);
        printf("%d", nr1 + nr2);
    } else {
        printf("Invalid arguments.");
        return 1;
    }

    return 0;
}