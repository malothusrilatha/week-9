#include <stdio.h>
int linearSearch(int a[], int n, int key) {
    int i;
    for(i = 0; i < n; i++) {
        if(a[i] == key)
            return i;
    }
    return -1;
}
int main() {
    int a[50], n, key, i, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    pos = linearSearch(a, n, key);
    if(pos != -1)
        printf("Element found at position %d", pos + 1);
    else
        printf("Element not found");
    return 0;
}



