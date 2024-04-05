#include <iostream>

int main(){
    int num;

//     printf("digite um numero: \n");
//     scanf("%d", &num);

//     if (num > 10) {
//         printf("O número digitadp é maior que 10. \n");
//     }

// //  exercicio2

//     printf("digite um numero: \n");
//     scanf("%d", &num);
//     if (num == 0) {
//     printf("O número digitado é zero. \n");
//     }

//     return 0;

/// //  exercicio3

    printf("digite um numero: \n");
    scanf("%d", &num);
    if (num < 0) {
        printf("O número é negativo. \n");
    }else{
        printf("O número e positivo ou zero. \n");
    }

    // //  exercicio4

    printf("digite um numero: \n");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("O número é par. \n");
    }else{
        printf("O número é impar. \n");
    }

    return 0;



}