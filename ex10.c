#include <stdio.h>
#include <stdlib.h>
int main (){
    int n = 125;
    int largura = 10;
    printf("n = %10d\n",n);
    printf("n = %*d\n",largura,n);
    system("pause");
    return 0;
}