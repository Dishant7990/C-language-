// Neso video no. 127 = Pointer program 9
#include<stdio.h>

int main(void){
    int i, j;
    char a[2][3] = {{'a','b','c'},{'d','e','f'}};
    char b[3][2];
    char *p = *b;
    for (i = 0; i<2; i++){
        for(j=0; j<3; j++){
            *(p + 2*j + i) = a[i][j];
             
        }
    }
    for (i = 0; i<3; i++){
        for(j=0; j<2; j++){
             printf("b[%d][%d] = %c\n",i ,j,b[i][j]);
        }
    }

    return 0;
}