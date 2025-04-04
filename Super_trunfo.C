#include <stdio.h>

int main() {                  // considerei as seguintes informações 

char estado;//            A 
char carta[5];//          A01   
char cidade[50];//        amapa
int populacao;//          1024
float area;//             233.111
float pib;//              304.505
int pontost;//            18

char estado2;//            B
char carto[5];//           B02
char cidade2[50];//        bahia
int populacao2;//          14850
float area2;//             567.295
float pib2;//              115.911
int pontost2;//            13


printf("VOCÊ IRÁ INFORMAR DADOS DE DUAS CARTAS PARA ESSE JOGO!!\n");
printf("\n");
printf("CARTA 1:\n");

printf("Informe o estado com uma letra (ex: A ou B)\n"); 
scanf("%c" , &estado); 

printf("Informe o código da carta (ex:A01)\n"); 
scanf("%s" , &carta);

printf("Informe a Cidade:\n"); 
scanf("%s" , &cidade);

printf("Informe a população:\n"); 
scanf("%d" , &populacao);

printf("Informe a area desse estado:\n"); 
scanf("%f" , &area);

printf("Informe o PIB:\n"); 
scanf("%f" , &pib);

printf("Informe a quatidade de pontos turisticos:\n"); 
scanf("%d" , &pontost);


printf ("INSIRAS AS INFORMAÇÕES PARA O SEGUNDO ESTADO \n");
printf("\n");

printf("CARTA 2:\n");

printf("Informe o estado com uma letra (ex: A ou B)\n"); 
scanf("%s" , &estado2); 

printf("Informe o código da carta (ex:A01)\n"); 
scanf("%s" , &carto);

printf("Informe a Cidade:\n"); 
scanf("%s" , &cidade2);

printf("Informe a população:\n"); 
scanf("%d" , &populacao2);

printf("Informe a area desse estado:\n"); 
scanf("%f" , &area2);

printf("Informe o PIB:\n"); 
scanf("%f" , &pib2);

printf("Informe a quatidade de pontos turisticos:\n"); 
scanf("%d" , &pontost2);

printf("Carta 1: \n");
printf("Estado: %c \n", estado);
printf("Código: %s \n", carta);
printf("Nome da Cidade:%s \n", cidade);
printf("População:%d \n", populacao);
printf("Área: %.2f Km² \n", area);
printf("PIB: %.2f bilhões de reais \n", pib);
printf("Numero de Pontos turisticos:%d \n ", pontost);

printf("\n");

printf("Carta 2: \n");
printf("Estado:%c \n", estado2);
printf("Código:%s \n", carto);
printf("Nome da Cidade:%s \n", cidade2);
printf("População:%d \n", populacao2);
printf("Área:%.2f Km² \n", area2);
printf("PIB:%.2f bilhões de reais \n", pib2);
printf("Numero de Pontos turisticos:%d \n ", pontost2);


return 0;

}