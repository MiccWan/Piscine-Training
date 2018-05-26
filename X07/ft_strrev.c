#include <stdio.h>
char    *ft_strrev(char *str) {
    int count;
    count = 0;
    while(str[count++]) {}
    count--;
    int i;
    i = 0;
    while(i * 2 < count) {
        str[i] ^= str[count -1 -i];
        str[count -1 -i] ^= str[i];
        str[i] ^= str[count -1 -i];
        i++;
    }
    return str;
}

int     main() {
    char c[6] = "newstr";
    char* str = c;
    printf("%s\n", str);
    str = ft_strrev(str);
    printf("%s", str);
    return 0;
}
