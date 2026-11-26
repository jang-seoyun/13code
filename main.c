#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *pc = NULL;
    int i = 0;

    pc = (char *)malloc(100 * sizeof(char));
    if (pc == NULL) {
        printf("메모리 할당 오류\n");
        exit(1);
    }

    for (i = 0; i < 26; i++) {
        pc[i] = 'a' + i;
    }
    pc[i] = 0; // 문자열 끝을 알리는 널 문자('\0', ASCII 0) 삽입

    printf("%s\n", pc);
    free(pc);

    return 0;
}
