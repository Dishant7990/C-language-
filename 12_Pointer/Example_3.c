// Arithmatic operation in pointer
// Relational operation in pointer
#include<stdio.h>

int main(void){
    int a[] = {5, 16, 7, 89, 45, 32, 23, 10};
    int *p = &a[1];
    int *q = &a[5];
    printf("%d ", *(p+3));
    printf("%d ", *(q-3));
    printf("%d ", (q - p));
    printf("%d ", p < q);
    printf("%d ", *p < *q);

    return 0;
}