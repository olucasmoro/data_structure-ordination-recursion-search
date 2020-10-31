#include <stdio.h>

void hanoi(int numberDisk, char orig, char aux, char dest) {

    if (numberDisk == 1) {
        printf("%c - %c\n", orig, dest);
    }
    else {
        hanoi((numberDisk - 1), orig, dest, aux);
        printf("%c - %c\n", orig, dest);
        hanoi((numberDisk - 1), aux, orig, dest);
    }
}