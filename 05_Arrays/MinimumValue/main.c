#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int a[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int min = 1000000000;  // very large number
    int found = 0;

    for(i = 0; i < n; i++) {
        if(a[i] > 0) {
            if(!found || a[i] < min) {
                min = a[i];
                found = 1;
            }
        }
    }

    if(found)
        printf("%d", min);
    else
        printf("0");

    return 0;
}
