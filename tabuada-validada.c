#include <stdio.h>

int main() {
    int n; 

while (1) { 
    printf("Insira um número entre 1 e 10: ");
    scanf("%d", &n);

if (n < 1 || n > 10) { 
    printf("Número Inválido!, Tente de novo.\n");
    continue; 
    }   

    break; 
}

printf("Tabuada do %d:\n", n);
for(int i = 1; i <= 10; i++){ 
printf("%d x %d = %d\n", n, i, n * i);

}

    return 0;
}