#include <string.h>
#include <stdio.h>

char *ft_des(char *s) {
    unsigned int i;
    int v3;
    int j;
    int k;
    char *v6;

    v6 = strdup(s);
    v3 = 0;
    for (i = 0; strlen(v6) > i; ++i) {
        if (v3 == 6)
            v3 = 0;
        if ((i & 1) != 0) {
            for (j = 0; *(char *)(v3 + 134514368) > j; ++j) {
                if (++v6[i] == 127)
                    v6[i] = 32;
            }
        }
        else {
            for (k = 0; *(char *)(v3 + 134514368) > k; ++k) {
                if (--v6[i] == 31)
                    v6[i] = 126;
            }
        }
        ++v3;
    }
    return v6;
}
int main (void) {

    printf("The token is : %s\n", ft_des("boe]!ai0FB@.:|L6l@A?>qJ}I"));
    return 0;
}