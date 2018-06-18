#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char* longestPalindrome(char* s) {
    int i, j, k, len;
    int start, maxlen;

    len = strlen(s);
    bool d_table[len][len];

    // Check length 1
    for ( i = 0 ; i < len ; i ++ )
        d_table[i][i] = true;

    // Check length 2
    start = 0;
    maxlen = 0;
    for ( i = 0 ; i < len - 1 ; i ++ )
        if ( s[i] == s[i+1] ) {
            d_table[i][i+1] = true;
            start = i;
            maxlen = 2;
        }

    // Check length bigger than 3
    for ( i = 3 ; i <= len ; i ++ )
        for ( j = 0 ; j < len - i + 1 ; j ++ ) {
            k = j + len - 1;
            if ( s[j] == s[k] && d_table[j+1][k-1] ) {
                d_table[j][k] = true;
                if ( i > maxlen ) {
                    maxlen = i;
                    start = j;
                }
            }
        }

    char *ans;
    ans = malloc(sizeof(char) * 2048);
    strncpy(ans, &s[start], maxlen);

    return ans;
}

int main(void)
{
    char *s, *ans;

    s = malloc(sizeof(char) * 2048);
    scanf("%s", s);
    strcpy(ans, longestPalindrome(s));
    free(s);
    printf("%s\n", ans);
    return 0;
}
