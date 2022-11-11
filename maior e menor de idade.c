#include <stdio.h>
#include <locale.h>
int main(){
    int i;
    printf("Informe sua idade:");
    scanf("%d", &i);
    if(i<18){
        printf("De menor!");
    }
    else if(i>=18){
        printf("De maior!");
    }
    return 0;
}
