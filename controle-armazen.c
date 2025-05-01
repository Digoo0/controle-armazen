#include <stdio.h>

int main(){

    // definindo variáveis
    float temperatura, umidade;
    unsigned int estoque, estoquemin = 1000;

    // obtendo os valores do usuário
    printf("Qual a temperatura?: \n");
    scanf("%f", &temperatura);
    
    printf("Qual o nível de umidade?: \n");
    scanf("%f", &umidade);

    printf("Qual a quantidade do estoque?: \n");
    scanf("%u", &estoque);

    // fazendo a comparação e exibindo as condicionais
    if( temperatura > 30){
        printf("A temperatura está alta! \n");
    }
    else{
        printf("Temperatura normal \n");
    }

    if( umidade > 50){
        printf("Os níveis de umidade estão altos! \n");
    }
    else{
        printf("Os níveis de umidade estão normais \n");
    }

    if(estoque < estoquemin ){
        printf("O estoque está abaixo no nível. \n");
    }
    else{
        printf("Estoque normal. \n");
    }
    
    return 0;
}
