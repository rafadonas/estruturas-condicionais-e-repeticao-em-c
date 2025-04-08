#include <stdio.h>
#include <windows.h>

int main()
{
    int senha;

    do
    {
        printf("Digite a senha: ");
        scanf("%d", &senha);

    } while (senha != 4321);

    printf("Sucesso!\n");

    Sleep(3000);

    return 0;
}
