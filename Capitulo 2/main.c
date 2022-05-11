#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
   setlocale(LC_ALL,"");
   /*
   int num = 123;
   printf("O valor de num = %d e o valor seguinte = %d\n",num,num+1);
   */
   /*
   int num;
   printf("Introduza um Nº: ");
   scanf("%d",&num);
   printf("O Nº introduzido foi %d\n",num);
   */
   /*
   int n1, n2;
   printf("Introduza dois Numeros: ");
   scanf("%d%d",&n1,&n2);
   printf("A soma dos numeros %d + %d = %d\n",n1,n2,n1+n2);
   */
   /*
   printf("O tamanho de um inteiro em bytes = %d\n", sizeof(int));
   printf("O tamanho de um char em bytes = %d\n", sizeof(char));
   printf("O tamanho de um float em bytes = %d\n", sizeof(float));
   printf("O tamanho de um double em bytes = %d\n", sizeof(double));
   */
   /*
   short idade;
   int montante;
   long n_conta;

   printf("Introduza a sua Idade: ");
   scanf("%hd",&idade);
   printf("Qual o montante que deseja depositar: ");
   scanf("%d",&montante);
   printf("Introduza o seu Nº de Conta: ");
   scanf("%ld",&n_conta);

   printf("Pessoa de %hd anos depositou o valor de %d euros na conta %ld\n", idade, montante, n_conta);
   */

   //Calculo e perimetro de uma circunferencia
   /*
   float raio, perimetro;
   double pi = 3.1415927, area;

    printf("Introduza o raio da circunferencia: ");
    scanf("%f", &raio);
    area = pi * raio * raio;
    perimetro = 2 * pi * raio;
    printf("A area da circunferencia = %f\nO perimetro da circunferencia = %f\n", area, perimetro);
    */
    /*
    float quilos = 1.0e3; //Uma tonelada são 1000 quilos
    double gramas = 1.0E6; // Uma tonelada são 1 000 000 de gramas
    float n_toneladas;

    printf("Quantas toneladas comprou: ");
    scanf("%f", &n_toneladas);
    printf("Nº de quilos = %f = %e\n", n_toneladas * quilos, n_toneladas * quilos);
    printf("Nº de gramas = %f = %E\n", n_toneladas * gramas, n_toneladas * gramas);
    */
    /*
    char ch;
    printf("Introduza um carater: ");
    scanf("%c", &ch);
    printf("O carater introduzido foi '%c'\n", ch);
    */
    /*
    char ch;
    printf("Introduza um carater: ");
    ch = getchar();
    printf("O carater introduzido foi '%c'\n", ch);
    */





    //Exercicios resolvidos
    /*
    int a, b;
    printf("Introduza dois Inteiros: ");
    scanf("%d%d",&a, &b);
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
    printf("%d %% %d = %d\n",a,b,a%b);
    */
    /*
    long n_segundos;
    printf("Introduza o numero de segundos: ");
    scanf("%ld", &n_segundos);
    printf("Horas   : %d\n",(int) n_segundos/3600);
    printf("Minutos : %d\n",(int) n_segundos%3600/60);
    printf("Segundos: %d\n",(int) n_segundos%60);
    */
    /*
    float x;
    printf("Introduza um Nº Real: ");
    scanf("%f", &x);
    printf("Parte Inteira    : %d\n", (int) x);
    printf("Parte Fracionária:%f\n", x - ((int)x));
    */

    //Exercicio 9

    /*
    int dia, mes, ano;
    printf("Ano: ");
    scanf("%d", &ano);
    printf("Mês: ");
    scanf("%d", &mes);
    printf("Dia: ");
    scanf("%d", &dia);
    printf("A data introduzida é %d/%d/%d\n", dia, mes, ano);
    */
    /*
    int dia, mes, ano;
    printf("Data (Formato aaaa-mm-dd): ");
    scanf("%d-%d-%d", &ano, &mes, &dia);
    printf("A data introduzida é %d/%d/%d\n", dia, mes, ano);
    */


}
