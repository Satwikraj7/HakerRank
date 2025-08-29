#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
int main() {
    char s[100001]; 
    char t[100001]; 
    scanf("%s", s);
    scanf("%s", t);

    int len = strlen(s); 

   
    char *result = (char *)malloc((len + 1) * sizeof(char));
    if (result == NULL) {

        return 1;
    }

    for (int i = 0; i < len; i++) {
        if (s[i] == t[i]) {
            result[i] = '0';
        } else {
            result[i] = '1';
        }
    }
    result[len] = '\0'; 
    printf("%s\n", result);

    free(result);

    return 0;
}