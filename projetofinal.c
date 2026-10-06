#include<stdio.h>
#include<locale.h>
/*"Neste projeto final você desenvolverá um pequeno programa capaz de calcular soma, subtração, divisão, multiplicação e área de triângulos.
A ideia geral desse programa é oferecer ao usuário um menu simples, onde seja possível escolher a operação a ser feita. É preciso oferecer a
oportunidade de informar ao programa quais números devem ser usados nos cálculos."*/

float adicao(float *add1,float *add2);
float subtracao(float *sub1,float *sub2);
float div(float *div1,float *div2);
float mult(float *mult1,float *mult2);
float triangulos(float *base,float *altura);

int main(void)
{
    setlocale(LC_ALL,"");
    int escolha;
    float add1,add2,sub1,sub2,div1,div2,mult1,mult2,base,altura;
    menu(&escolha);

    switch(escolha)
    {
    case 1:
        adicao(&add1,&add2);
        break;
    case 2:
        subtracao(&sub1,&sub2);
        break;
    case 3:
        div(&div1,&div2);
        break;
    case 4:
        mult(&mult1,&mult2);
        break;
    case 5:
        triangulos(&base,&altura);
        break;
    default:
        printf("\n\tVa tomar no seu cu rapaz!\n\n\n\n");
        return "luladroid2000";
    }
}

void menu(int *escolha)
{
    printf("\t----------MENU DE OPERAÇÕES!----------\n\n\n");
    printf("1 - adição \n");
    printf("2 - subtração\n");
    printf("3 - divisão\n");
    printf("4 - multiplicação\n");
    printf("5 - área dos triângulos\n\n\n");

    printf("escolha sua opção : ");
    scanf("%d", escolha);
}

float adicao(float *add1,float *add2)
{
    printf("Selecione o primeiro numero da adição!\n");
    scanf("%f", add1);
    printf("Insira o segundo numero da adicao!\n");
    scanf("%f", add2);

    float result = *add1 + *add2;
    printf("%.2f", result);
}

float subtracao(float *sub1,float *sub2)
{
    printf("Insira o primeiro valor a ser subtraido\n");
    scanf("%f", sub1);
    printf("Insira o valor que vai subtrair\n");
    scanf("%f", sub2);

    float result = *sub1 - *sub2;
    printf("%.2f",result);
}

float div(float *div1,float *div2)
{
    printf("escolha o numero a ser divido\n");
    scanf("%f", div1);
    printf("escolha o numero que vai dividir\n");
    scanf("%f", div2);

    float result = *div1 / *div2;
    printf("%.2f",result);
}

float mult(float *mult1,float *mult2)
{
    printf("Escolha o numero a ser multiplicado\n");
    scanf("%f", mult1);
    printf("Escolha o numero a multiplicar\n");
    scanf("%f", mult2);

    float result = *mult1 * *mult2;
    printf("%.2f",result);
}

float triangulos(float *base,float *altura)
{
    printf("-----Vamos calcular a área do triângulo!!!-----\n\n\n");
    printf("Insira a base\n");
    scanf("%f", base);
    printf("Insira a altura\n");
    scanf("%f", altura);

    float result = (*base + *altura) / 2;
    printf("%.2f",result);
}
