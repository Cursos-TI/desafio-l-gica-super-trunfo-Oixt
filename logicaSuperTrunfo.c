//neste desfio mantive o mesmo codigo que ja tinha usado no desafio anterior, porem com algumas mudancas tivemos o uso do menu para escolher os atributos e a logica para o codigo.


#include <stdio.h>
int main(){
//variaveis 1
    char estado, nomedacidade[20];
    int  codigodacidade, pontosturisticos;
    float area, PIB, densidade, PIBper;
    int populacao;
    float SuperPoder;

//questinonario para cadastramento
    printf("***CADASTRAMENTO DE CARTAS DO SUPER TRUNFO***\n");
    printf("*-=-=CARTA 1=-=-*\n\n");
    printf("Insira o nome da cidade:\n");
    scanf("%20[^\n]s",&nomedacidade);

    printf("insira o estado(Uma letra de 'A' a 'H'): \n");
    scanf("%s",&estado);

    printf("Insira o codigo da carta(Numero de 1 a 4): \n");
    scanf("%d",&codigodacidade);

    printf("insira o numero de Pontos Turisticos que a cidade de %s tem: \n",nomedacidade);
    scanf("%d",&pontosturisticos);

    printf("Insira a populacao(Milhoes):\n");
    scanf("%d",&populacao);

    printf("Insira a area da cidade (Quilometros): \n");
    scanf("%f",&area);

    printf("Insira o PIB(Bilhoes): \n");
    scanf("%f",&PIB);

//calculos 1

densidade = populacao / area;
PIBper = (float)(PIB * 1000000000) / populacao;
SuperPoder = (float) populacao + area + PIB + PIBper + (1 / densidade);

//impressao 1
    printf("\n\n\n*-=-= CARTA 1 =-=-*\n\n");
    printf("Nome da cidade: %s.\n", nomedacidade);
    printf("Estado: %c\n",estado);
    printf("Codigo: %c0%d.\n",estado, codigodacidade);
    printf("Pontos Turisticos: %d.\n", pontosturisticos);
    printf("Populacao: %d Milhoes.\n",populacao);
    printf("Area: %.2f Quilometros.\n",area);
    printf("PIB: %.2f Bilhoes.\n",PIB);
    printf("Densidade Populacional: %.2f hab/km.\n", densidade);
    printf("PIB per Capita: %.2f reais.\n", PIBper);
    printf("Super Poder: %.2f\n\n", SuperPoder);



    //variaveis 2
    char estado2, nomedacidade2[13];
    int  codigodacidade2, pontosturisticos2;
    float area2, PIB2, densidade2, PIBper2;
    int populacao2;
    float SuperPoder2;
    
    //questinonario para cadastramento
    printf("\n*-=-=CARTA 2=-=-*\n\n");
    printf("Insira o nome da cidade:\n");
    scanf("%10[^/n]s",&nomedacidade2);

    printf("insira o estado(Uma letra de 'A' a 'H'): \n");
    scanf("%s",&estado2);

    printf("Insira o codigo da carta(Numero de 1 a 4): \n");
    scanf("%d",&codigodacidade2);

    printf("insira o numero de Pontos Turisticos que a cidade de %s tem: \n", nomedacidade2);
    scanf("%d", &pontosturisticos2);

    printf("Insira a populacao(Milhoes):\n");
    scanf("%d",&populacao2);

    printf("Insira a area da cidade (Quilometros): \n");
    scanf("%f",&area2);

    printf("Insira o PIB(Bilhoes): \n");
    scanf("%f",&PIB2);

//calculos2

densidade2 = populacao2 / area2;
PIBper2 = (PIB2 * 1000000000) / populacao2;
SuperPoder2 = (float) populacao2 + area2 + PIB2 + PIBper2 + (1 / densidade2);

//impressao 2 
    printf("\n\n\n*-=-= CARTA 2 =-=-*\n\n");
    printf("Nome da cidade:  %s.\n", nomedacidade2);
    printf("Estado: %c\n",estado2);
    printf("Codigo: %c0%d.\n",estado2, codigodacidade2);
    printf("Pontos Turisticos: %d.\n", pontosturisticos2);
    printf("Populacao: %d Milhoes.\n",populacao2);
    printf("Area: %.2f Quilometros.\n",area2);
    printf("PIB: %.2f Bilhoes.\n",PIB2);
    printf("Densidade Populacional: %.2f hab/km.\n", densidade2);
    printf("PIB per Capita: %.2f reais.\n", PIBper2);
    printf("Super Poder: %.2f\n\n", SuperPoder2);

    //comparacoes
int menuatributo, menuatributo2;
float escolha1, escolha2, escolha3, escolha4;
float VENCEDOR1, VENCEDOR2;
int placar1, placar2, placar3, placar4, PLACAR, PLACAR2;

    printf("\n\nHORA DO DUELO!\n\n");

    printf("Escolha dois atributos para comparar:\n\n");
    printf("1. Pontos Turisticos.\n");
    printf("2. Area.\n");
    printf("3. PIB.\n");
    printf("4. Densidade demografica.\n");
    printf("5. PIB percapta.\n");
    printf("6. Super Poder.\n");

    printf("Escolha o primeiro atributo: \n");
    scanf("%d",&menuatributo);
    printf("Escolha o segundo atrinuto: \n");
    scanf("%d",&menuatributo2);

//teste atrinutos iguais
    if (menuatributo == menuatributo2){
        printf("\n  Atributos iguais!!\n");
        
    }
    //menu
switch (menuatributo){      // nessa etapa veremos o atributo escolhido para que seja feita a comparacao de ambos
case 1:
    printf("\nCOMPARACAO DE PONTOS TURISTICOS\n\n");

    printf("Pontos Turisticos de %s: %d.\n",nomedacidade, pontosturisticos);
    printf("Pontos Turisticos de %s: %d.\n",nomedacidade2, pontosturisticos2);

    if (pontosturisticos > pontosturisticos2){
        printf("%s venceu na quantidade de pontos turisticos!\n", nomedacidade);
        escolha1 = pontosturisticos; // reservo o numero para somar no resultado final
        escolha2 = pontosturisticos2;
        placar1 = 1; // contagem to placar da rodada
        placar2 = 0;


    }else if (pontosturisticos == pontosturisticos2){
        printf("EMPATE!!\n");
        escolha1 = 0;// em caso de empate nenhum dos dois pontuam
        escolha2 = 0;
        placar1 = 1;
        placar2 = 1;

    }else{
        printf("%s venceu na quantidade de pontos turisticos!\n", nomedacidade2);
        escolha1 = pontosturisticos;
        escolha2 = pontosturisticos2;
        placar1 = 0;
        placar2 = 1;

    }

    break;

case 2:
    printf("COMPARACAO DA AREA\n\n");

    printf("Area de %s: %.2f.\n",nomedacidade, area);
    printf("Area de %s: %.2f.\n",nomedacidade2, area2);

    if (area > area2){
        printf("%s venceu no quesito Area!\n", nomedacidade);
        escolha1 = area;
        escolha2 = area2;
        placar1 = 1;
        placar2 = 0;

    }else if (area == area2){
        printf("EMPATE!!\n");
        escolha1 = 0;
        escolha2 = 0;
        placar1 = 1;
        placar2 = 1;

    }else {
        printf("%s venceu no quesito Area!\n", nomedacidade2);
        escolha1 = area;
        escolha2 = area2;
        placar1 = 0;
        placar2 = 1;
    }

    break;

case 3:
    printf("COMPARACAO DO PIB\n\n");

    printf("PIB de %s: %.2f.\n",nomedacidade, PIB);
    printf("PIB de %s: %.2f.\n",nomedacidade2, PIB2);

    if (PIB > PIB2){
        printf("O PIB de %s e maior!\n", nomedacidade);
        escolha1 = PIB;
        escolha2 = PIB2;
        placar1 = 1;
        placar2 = 0;

    }else if (PIB == PIB2){
        printf("EMPATE!!\n");
        escolha1 = 0;
        escolha2 = 0;
        placar1 = 1;
        placar2 = 1;

    }else{
        printf("O PIB de %s e maior!\n", nomedacidade2);
        escolha1 = PIB;
        escolha2 = PIB2;
        placar1 = 0;
        placar2 = 1;

    }

    break;

case 4:
    printf("COMPARACAO DE DENSIDADE DEMOGRAFICA\n\n"); //aqui diferente dos outros atributos o menor vence a rodada

    printf("Densidade Demografica de %s: %.2f.\n",nomedacidade, densidade);
    printf("Densidade Demografica de %s: %.2f.\n",nomedacidade2, densidade2);

    if (densidade < densidade2){
        printf("A Densidade popular de  %s e menor!\n", nomedacidade);
        escolha1 =(float) 1 / densidade;
        escolha2 =(float) 1 / densidade2;
        placar1 = 1;
        placar2 = 0;

    }else if (densidade == densidade2){
        printf("EMPATE!!\n");
        escolha1 = 0;
        escolha2 = 0;
        placar1 = 1;
        placar2 = 1;

    }else{
        printf("A Densidade popular de  %s e menor!\n", nomedacidade2);
        escolha1 = (float) 1 / densidade;
        escolha2 = (float) 1 / densidade2;
        placar1 = 0;
        placar2 = 1;

    }

    break;

case 5:
    printf("COMPARACAO DO PIB PERCAPTA\n\n");

    printf("PIB Percapta de %s: %.2f.\n",nomedacidade, PIBper);
    printf("PIB Percapta de %s: %.2f.\n",nomedacidade2, PIBper2);

    if (PIBper > PIBper2){
        printf("O PIB per Capita de %s e maior!\n", nomedacidade);
        escolha1 = PIBper;
        escolha2 = PIBper2;
        placar1 = 1;
        placar2 = 0;

    }else if (PIBper == PIBper2){
        printf("EMPATE!!\n");
        escolha1 = 0;
        escolha2 = 0;
        placar1 = 1;
        placar2 = 1;

    }else {
        printf("O PIB per Capita de %s e maior!\n", nomedacidade2);
        escolha1 = PIBper;
        escolha2 = PIBper2;
        placar1 = 0;
        placar2 = 1;

    }

    break;

case 6:
    printf("COMPARACAO DO SUPER PODER\n\n");

    printf("Super Poder de %s: %.2f.\n",nomedacidade, SuperPoder);
    printf("Super Poder de %s: %.2f.\n",nomedacidade2, SuperPoder2);

    if (SuperPoder > SuperPoder2){
        printf("O SUPER PODER de %s e maior!\n", nomedacidade);
        escolha1 = SuperPoder;
        escolha2 = SuperPoder2;
        placar1 = 1;
        placar2 = 0;

    }else if (SuperPoder == SuperPoder2){
        printf("EMPATE!!\n");
        escolha1 = 0;
        escolha2 = 0;
        placar1 = 1;
        placar2 = 1;

    }else {
        printf("O SUPER PODER de %s e maior!\n", nomedacidade2);
        escolha1 = SuperPoder;
        escolha2 = SuperPoder2;
        placar1 = 0;
        placar2 = 1;

    }

    break;
default:
        printf("Opcao invalida!\n");
    break;
}

//segundo atributo

switch (menuatributo2){
    case 1:
        printf("COMPARACAO DE PONTOS TURISTICOS\n\n");
    
        printf("Pontos Turisticos de %s: %d.\n",nomedacidade, pontosturisticos);
        printf("Pontos Turisticos de %s: %d.\n",nomedacidade2, pontosturisticos2);
    
        if (pontosturisticos > pontosturisticos2){
            printf("%s venceu na quantidade de pontos turisticos!\n", nomedacidade);
            escolha3 = pontosturisticos;
            escolha4 = pontosturisticos2;
            placar3 = 1;
            placar4 = 0;

        }else if (pontosturisticos == pontosturisticos2){
            printf("EMPATE!!\n");
            escolha3 = 0;
            escolha4 = 0;
            placar3 = 1;
            placar4 = 1;

        }else{
            printf("%s venceu na quantidade de pontos turisticos!\n", nomedacidade2);
            escolha3 = pontosturisticos;
            escolha4 = pontosturisticos2;
            placar3 = 0;
            placar4 = 1;

        }
    
        break;
    
    case 2:
        printf("COMPARACAO DA AREA\n\n");
    
        printf("Area de %s: %.2f.\n",nomedacidade, area);
        printf("Area de %s: %.2f.\n",nomedacidade2, area2);
    
        if (area > area2){
            printf("%s venceu no quesito Area!\n", nomedacidade);
            escolha3 = area;
            escolha4 = area2;
            placar3 = 1;
            placar4 = 0;

        }else if (area == area2){
            printf("EMPATE!!\n");
            escolha3 = 0;
            escolha4 = 0;
            placar3 = 1;
            placar4 = 1;
        }else {
            printf("%s venceu no quesito Area!\n", nomedacidade2);
            escolha3 = area;
            escolha4 = area2;
            placar3 = 0;
            placar4 = 1;

        }
    
        break;
    
    case 3:
        printf("COMPARACAO DO PIB\n\n");
    
        printf("PIB de %s: %.2f.\n",nomedacidade, PIB);
        printf("PIB de %s: %.2f.\n",nomedacidade2, PIB2);
    
        if (PIB > PIB2){
            printf("O PIB de %s e maior!\n", nomedacidade);
            escolha3 = PIB;
            escolha4 = PIB2;
            placar3 = 1;
            placar4 = 0;

        }else if (PIB == PIB2){
            printf("EMPATE!!\n");
            escolha3 = 0;
            escolha4 = 0;
            placar3 = 1;
            placar4 = 1;

        }else{
            printf("O PIB de %s e maior!\n", nomedacidade2);
            escolha3 = PIB;
            escolha4 = PIB2;
            placar3 = 0;
            placar4 = 1;

        }
    
        break;
    
    case 4:
        printf("COMPARACAO DE DENSIDADE DEMOGRAFICA\n\n");
    
        printf("Densidade Demografica de %s: %d.\n",nomedacidade, densidade);
        printf("Densidade Demografica de %s: %d.\n",nomedacidade2, densidade2);
    
        if (densidade < densidade2){
            printf("A Densidade popular de  %s e menor!\n", nomedacidade);
            escolha3 =(float) 1 / densidade;
            escolha4 = (float) 1 / densidade2;
            placar3 = 1;
            placar4 = 0;

        }else if (densidade == densidade2){
            printf("EMPATE!!\n");
            escolha3 = 0;
            escolha4 = 0;
            placar3 = 1;
            placar4 = 1;

        }else{
            printf("A Densidade popular de  %s e menor!\n", nomedacidade2);
            escolha3 = (float) 1 / densidade;
            escolha4 = (float) 1 / densidade2;
            placar3 = 0;
            placar4 = 1;

        }
    
        break;
    
    case 5:
        printf("COMPARACAO DO PIB PERCAPTA\n\n");
    
        printf("PIB Percapta de %s: %d.\n",nomedacidade, PIBper);
        printf("PIB Percapta de %s: %d.\n",nomedacidade2, PIBper2);
    
        if (PIBper > PIBper2){
            printf("O PIB per Capita de %s e maior!\n", nomedacidade);
            escolha3 = PIBper;
            escolha4 = PIBper2;
            placar3 = 1;
            placar4 = 0;

        }else if (PIBper == PIBper2){
            printf("EMPATE!!\n");
            escolha3 = 0;
            escolha4 = 0;
            placar3 = 1;
            placar4 = 1;

        }else {
            printf("O PIB per Capita de %s e maior!\n", nomedacidade2);
            escolha3 = PIBper;
            escolha4 = PIBper2;
            placar3 = 0;
            placar4 = 1;

        }
    
        break;
    
    case 6:
        printf("COMPARACAO DO SUPER PODER\n\n");
    
        printf("Super Poder de %s: %d.\n",nomedacidade, SuperPoder);
        printf("Super Poder de %s: %d.\n",nomedacidade2, SuperPoder2);
    
        if (SuperPoder > SuperPoder2){
            printf("O SUPER PODER de %s e maior!\n", nomedacidade);
            escolha3 = SuperPoder;
            escolha4 = SuperPoder2;
            placar3 = 1;
            placar4 = 0;

        }else if (SuperPoder == SuperPoder2){
            printf("EMPATE!!\n");
            escolha3 = 0;
            escolha4 = 0;
            placar3 = 1;
            placar4 = 1;

        }else {
            printf("O SUPER PODER de %s e maior!\n", nomedacidade2);
            escolha3 = SuperPoder;
            escolha4 = SuperPoder2;
            placar3 = 0;
            placar4 = 1;
    
        }
    
        break;
    default:

    printf("Opcao Invalida!\n");
        break;
    }
//RESULTADO GERAL   

VENCEDOR1 = ((escolha1) + (escolha3));//soma dos atributos escolhios
VENCEDOR2 = ((escolha2) + (escolha4));

PLACAR = (placar1 + placar3);//soma do placar
PLACAR2 = (placar2 + placar4);

printf("\n\n*-*-* PLACAR *-*-*\n");
printf("Placar ficou de %d x %d.\n\n",PLACAR, PLACAR2);

printf("A soma dos atributos escolhidos de %s e de: %d.\n", nomedacidade,VENCEDOR1);
printf("A soma dos atributos escolhidos de %s e de: %d.\n", nomedacidade2,VENCEDOR2);

//denominacao do vencedor ou empate
if (PLACAR > PLACAR2){
    printf("Parabens, a cidade de %s Venceu essa rodada!\n",nomedacidade);
}else if(PLACAR == PLACAR2){
    printf("Empate!\n");
}else{
    printf("Parabens, a cidade de %s Venceu essa rodada!\n",nomedacidade2);
}




    
    printf("\nfim!\n");

    return 0;
}