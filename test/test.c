#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 0;

    while (n < 10) {
        printf("%d ", arr[n]);
        n++;
    }

    return 0;
}