#include <stdio.h>
#include <string.h>

int main() {
    char ch[1000001]; // 10^7 chars + 1 for null terminator
    int count[26] = {0}; // For a-z letters
    scanf("%s", ch);

    // Count frequency
    for (int i = 0; ch[i] != '\0'; i++) {
        count[ch[i] - 'a']++;
    }

    // Print in ascending order
    for (char c = 'a'; c <= 'z'; c++) {
        if (count[c - 'a'] > 0) {
            printf("%c : %d\n", c, count[c - 'a']);
        }
    }

    return 0;
}
