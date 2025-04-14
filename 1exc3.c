#include<stdio.h>
char* print(char texto[100])
 {
     printf("%s\n",texto);

  return "ok";
 }

int main()
{
    char texto[100];

    printf("ecreva texto ate 100 caracteres que retornarei ok:\n");

    scanf("%s",texto);

    char* resposta=print(texto); 

    printf("%s",resposta);

  return 0;
}
