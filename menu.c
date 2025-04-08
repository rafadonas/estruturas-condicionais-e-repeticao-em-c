#include <stdio.h>

int main()
{
    while (1)
    {
        int opcao;
        printf("Escolha uma opcao: \n");
        printf("1 - Par ou Impar \n");
        printf("2 - Imprimir numeros de 1 a 10 \n");
        printf("3 - Sair do programa\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            int numero;
            printf("Digite um numero: ");
            scanf("%d", &numero);
            if (numero % 2 == 0)
            {
                printf("Par");
            }
            else
            {
                printf("Impar");
            }
            break;

        case 2:
            int i;
            for (i = 1; i < 11; i++)
            {
                printf("%d\n", i);
            };
            break;

        case 3:
            printf("Saindo do programa");
            break;

        default:
            printf("Opcao invalida\n");
            continue;
        }
        break;
    }
    return 0;
}