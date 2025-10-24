#include <stdio.h>

int main() {
    char A[15], B[15];
    scanf("%s", A);
    scanf("%s", B);

    int lenA = 0, lenB = 0;

    // manually count lengths
    while (A[lenA] != '\0') lenA++;
    while (B[lenB] != '\0') lenB++;

    // print lengths
    printf("%d %d\n", lenA, lenB);

    // print concatenation
    for (int i = 0; i < lenA; i++) printf("%c", A[i]);
    for (int i = 0; i < lenB; i++) printf("%c", B[i]);
    printf("\n");

    // swap first characters
    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;

    // print swapped strings
    printf("%s %s\n", A, B);

    return 0;
}
