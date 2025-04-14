#include<stdio.h>
void print(char texto[100])
 {

    printf("%s",texto);

 }

int main()
{
    char texto[100];

    printf("escreva um texto, limite 100 caracter:\n");

    scanf("%s",texto);

    print(texto);

  return 0;
}
