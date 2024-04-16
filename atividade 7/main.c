#include <stdio.h>
#include <stdlib.h>

int main()
{
    float avaliacao_1, avaliacao_2,avaliacao_3, media;

    printf("Digite o a nota da primeira avaliacao:  \n");
    scanf("%f", &avaliacao_1);
    printf("\nDigite a nota da segunda avaliacao:  \n");
    scanf("%f", &avaliacao_2);
    printf("Digite a nota da terceira avalizacao:  \n");
    scanf("%f", &avaliacao_3);
   media=(avaliacao_1+avaliacao_2+avaliacao_3)/3;
   if (media>=6.0) {
    printf("\nO aluno foi aprovado\n");
   }
   else{
   printf("\nO aluno nao foi aprovado\n");
   }

        return 0;
}
