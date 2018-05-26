#include <stdio.h>
char    *ft_strrev(char *str) {
    char* s;
    int count = 0;
    while (*(str + count) != '\0')
    {
        ++count;
    }
    int i = 0;
    while (i < count){
        printf("%d | %s, %s\n", i, s, str);
        s[i] = str[count -i -1];
        i++;
    }
    return s;
}

int     main() {
    char c[6] = "newstr";
    char* str = c;
    printf("%s\n", str);
    str = ft_strrev(str);
    printf("%s", str);
    return 0;
}
