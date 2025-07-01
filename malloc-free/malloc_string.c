#include <stdio.h>
#include <stdlib.h>

int main() {
    char *arr;
    int n;
    scanf("%d", &n);
    char h;

    arr = (char *) malloc(n * sizeof(char));
    if (arr == NULL) {
        printf("Yaddaş ayırmaq alınmadı\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf(" %c", &h);
        arr[i] = h;
    }

    for (int i = 0; i < n; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
