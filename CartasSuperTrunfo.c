#include <stdio.h>

// Desafio Super Trunfo - Países.
// Tema 1 - Cadastro das Cartas.
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
int main() {
    // Declarando variaveis para armazenar estados
    char estado_A[30], estado_B[30];
    
    // Declarando variaveis para armazenar nome da cidade.
    char cidade_a01[30], cidade_a02[30], cidade_b01[30], cidade_b02[30];

    // Declarando variaveis para cada atributo da cidade.    
    char cod_cidade_a01[4], cod_cidade_a02[4], cod_cidade_b01[4], cod_cidade_b02[4];
    unsigned long int habitantes_a01, habitantes_a02, habitantes_b01, habitantes_b02;
    float km_area_a01, km_area_a02, km_area_b01, km_area_b02;
    float pib_a01, pib_a02, pib_b01, pib_b02;       
    int pontos_turisticos_a01, pontos_turisticos_a02, pontos_turisticos_b01, pontos_turisticos_b02;

    // Variáveis de densidade e PIBpcpt
    float densidade_pp_a01, densidade_pp_a02, densidade_pp_b01, densidade_pp_b02;   
    float pib_capta_a01, pib_capta_a02, pib_capta_b01, pib_capta_b02;

    //Variaveis armazenar soma geral do estado para exibição 
    unsigned long total_habitantes_a, total_habitantes_b;   
    float total_km_area_a, total_km_area_b;   
    float total_pib_a, total_pib_b;  
    int total_pontos_turisticos_a, total_pontos_turisticos_b; 
    float total_densidade_a, total_densidade_b;
    float total_pib_capta_a, total_pib_capta_b;

    //Variaveis de comparação das cidades para lógica de calculo e respostas binárias
    int populacao_vencedora_A01, populacao_vencedora_A02, populacao_vencedora_B01, populacao_vencedora_B02;
    int area_vencedora_A01, area_vencedora_A02, area_vencedora_B01, area_vencedora_B02;
    int pib_vencedora_A01, pib_vencedora_A02, pib_vencedora_B01, pib_vencedora_B02;
    int pontos_turisticos_vencedora_A01, pontos_turisticos_vencedora_A02, pontos_turisticos_vencedora_B01, pontos_turisticos_vencedora_B02;
    int densidade_vencedora_A01, densidade_vencedora_A02, densidade_vencedora_B01, densidade_vencedora_B02;
    int pib_capta_vencedora_A01, pib_capta_vencedora_A02, pib_capta_vencedora_B01, pib_capta_vencedora_B02;
   
    //Variaveis para armazenar o "SUPER PODER" de cada carta somando seus atributos
    float power_a01, power_a02, power_b01, power_b02;
    
    // atribuindo valor a variavel "estado_A".
    printf("Digite o nome do Estado:\n");
    scanf("%30s", estado_A);      

    // Mensagem de sucesso.
    printf("\n--------------- Estado cadastrado com sucesso!! ---------------\n\n");

    //  Cadastro da primeira cidade do estado_A.
    printf("Digite o nome da 1° cidade do estado de: %s \n", estado_A);
    scanf("%30s", cidade_a01);

    printf("Digite o código: \n");
    scanf("%4s", cod_cidade_a01);    

    printf("Digite a população:\n");
    scanf("%lu", &habitantes_a01);

    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area_a01);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_a01);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_a01);

    // Calculo da densidade populacional
    densidade_pp_a01 = (float) habitantes_a01 / km_area_a01;
    pib_capta_a01 = (float) pib_a01 / habitantes_a01 ;         

   // Mensagem de sucesso ao cadastrar
    printf("\n--------------- Carta cadastrada com sucesso!! --------------- \n\n");

    // Cadastro da segunda cidade do "estado A".
    printf("Digite o nome da 2° cidade do estado de: %s \n", estado_A);
    scanf("%30s", cidade_a02);

    printf("Digite o código: \n");
    scanf("%4s", cod_cidade_a02);

    printf("Digite a população:\n");
    scanf("%lu", &habitantes_a02);

    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area_a02);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_a02);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_a02);  

    // Calculo densidade e PIB
    densidade_pp_a02 = (float) habitantes_a02 / km_area_a02;
    pib_capta_a02 = (float) pib_a02 / habitantes_a02;    

    // Mensagem de sucesso ao cadastrar
    printf("\n--------------- Carta cadastrada com sucesso!! ---------------\n\n"); 

    //EXIBINDO OS DADOS DO ESTADO A COM SUAS CIDADES DE FORMA ORGANIZADA!!!  

    //ESTADO_A

    //Cidade A01
    printf("--------------------  Primeira cidade do estado de: %s  ---------------\n\n", estado_A);
    printf("Cidade: %s \nCódigo: %s \nPopulação: %lu Habitantes \nÁrea: %.2f Km² \nPIB: R$ %.2f \nPontos turísticos: %d \nDensidade Populacional: %.2f hab/Km² \nPIB per Capta: R$ %.2f\n\n", cidade_a01, cod_cidade_a01, habitantes_a01, km_area_a01,pib_a01, pontos_turisticos_a01, densidade_pp_a01, pib_capta_a01);

    //Cidade A02
    printf("--------------------  Segunda cidade do estado de: %s  ---------------\n\n", estado_A);
    printf("Cidade: %s \nCódigo: %s \nPopulação: %lu Habitantes \nÁrea: %.2f Km² \nPIB: R$ %.2f \nPontos turísticos: %d \nDensidade Populacional: %.2f  hab/Km² \nPIB per Capta: R$ %.2f\n\n", cidade_a02, cod_cidade_a02, habitantes_a02, km_area_a02,pib_a02, pontos_turisticos_a02, densidade_pp_a02, pib_capta_a02);
    
    //  CADASTRO DO ESTADO B
    printf("\n--------------- Cadastro do segundo Estado!! ---------------\n\n");    
        
    printf("Digite o nome do segundo estado:\n");
    scanf("%30s", estado_B);

    // Mensagem de sucesso.
    printf("\n--------------- Estado cadastrado com sucesso!! ---------------\n\n");

     // Cadastro da primeira cidade do estado_B
    printf("Digite o nome da 1° cidade do estado de: %s \n", estado_B);
    scanf("%30s", cidade_b01);

    printf("Digite o código: \n");
    scanf("%4s", cod_cidade_b01);    

    printf("Digite a população:\n");
    scanf("%lu", &habitantes_b01);

    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area_b01);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_b01);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_b01);

    // Calculo da densidade populacional
    densidade_pp_b01 = (float) habitantes_b01 / km_area_b01;
    pib_capta_b01 = (float) pib_b01 / habitantes_b01 ;         

    // Mensagem de sucesso ao cadastrar
    printf("\n--------------- Carta cadastrada com sucesso!! --------------- \n\n");

    // Cadastro da segunda cidade do estado_B.

    printf("Digite o nome da 2° cidade do estado de: %s \n", estado_B);
    scanf("%30s", cidade_b02);
    
    printf("Digite o código: \n");
    scanf("%4s", cod_cidade_b02);    

    printf("Digite a população:\n");
    scanf("%lu", &habitantes_b02);

    printf("Digite a área em Km²: \n");
    scanf("%f", &km_area_b02);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_b02);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_b02);

    // Calculo da densidade populacional
    densidade_pp_b02 = (float) habitantes_b02 / km_area_b02;
    pib_capta_b02 = (float) pib_b02 / habitantes_b02 ;

    printf("--------------- Carta cadastrada com sucesso!! ---------------\n\n");
   
    // EXIBINDO OS DADOS DO ESTADO B COM SUAS CIDADES DE FORMA ORGANIZADA!!

    // ESTADO_B

    // Cidade B01
    printf("--------------------  Primeira cidade do estado de: %s  ---------------\n\n", estado_A);
    printf("Cidade: %s \nCódigo: %s \nPopulação: %lu Habitantes \nÁrea: %.2f Km² \nPIB: R$ %.2f \nPontos turísticos: %d \nDensidade Populacional: %.2f hab/Km² \nPIB per Capta: R$ %.2f\n\n", cidade_b01, cod_cidade_b01, habitantes_b01, km_area_b01,pib_b01, pontos_turisticos_b01, densidade_pp_b01, pib_capta_b01);

    // Cidade B02    
    printf("--------------------  Segunda cidade do estado de: %s  ---------------\n\n", estado_A);
    printf("Cidade: %s \nCódigo: %s \nPopulação: %lu Habitantes \nÁrea: %.2f Km² \nPIB: R$ %.2f \nPontos turísticos: %d \nDensidade Populacional: %.2f hab/Km² \nPIB per Capta: R$ %.2f\n\n", cidade_b02, cod_cidade_b02, habitantes_b02, km_area_b01,pib_b02, pontos_turisticos_b02, densidade_pp_b02, pib_capta_b02);


    // Atribuindo valores as variaveis gerais do estado A
    total_habitantes_a = habitantes_a01 + habitantes_a02;   
    total_km_area_a = km_area_a01 + km_area_a02;   
    total_pib_a = pib_a01 + pib_a02;  
    total_pontos_turisticos_a = pontos_turisticos_a01 + pontos_turisticos_a02; 
    total_densidade_a =(float) total_habitantes_a / total_km_area_a;
    total_pib_capta_a = (float) total_pib_a / total_habitantes_a;  

    // Atribuindo valores as variaveis gerais do estado B
    
    total_habitantes_b = habitantes_b01 + habitantes_b02;   
    total_km_area_b = km_area_b01 + km_area_b02;   
    total_pib_b = pib_b01 + pib_b02;  
    total_pontos_turisticos_b = pontos_turisticos_b01 + pontos_turisticos_b02; 
    total_densidade_b =(float) total_habitantes_b / total_km_area_b;
    total_pib_capta_b = (float) total_pib_b / total_habitantes_b;

    //**** EXIBIÇÃO DE DADOS GERAIS DE ESTADOS ****

    printf("+-+-+-+-+-+-+-+-+-+-+- DADOS DE ESTADOS +-+-+-+-+-+-+-+-+-+-+-\n\n");

    //--------------------------------- Exibição de propriedades do estado A
    printf(" ************  ESTADO:  %s  **************\n\n", estado_A);
    printf("População: %lu habitantes \nÁrea: %.1f km² \nPIB: R$ %.2f \nPontos turísticos: %d \nDensidade populacional: %.2f hab/Km² \nPIB per capta: R$ %.2f \n\n", total_habitantes_a, total_km_area_a, total_pib_a, total_pontos_turisticos_a, total_densidade_a, total_pib_capta_a);

    //------------------------------- Exibição de propriedades do estado B
    printf(" ************  ESTADO:  %s  **************\n\n", estado_B);
    printf("População: %lu habitantes \nÁrea: %.1f km² \nPIB: R$ %.2f \nPontos turísticos: %d \nDensidade populacional: %.2f hab/Km² \nPIB per capta: R$ %.2f \n\n", total_habitantes_b, total_km_area_b, total_pib_b, total_pontos_turisticos_b, total_densidade_b, total_pib_capta_b);

    //Implementando a lógica para comparação de cidade_a01 com cidade_b01
    populacao_vencedora_A01 = habitantes_a01 >= habitantes_b01;
    area_vencedora_A01 = km_area_a01 >= km_area_b01;
    pib_vencedora_A01 = pib_a01 >= pib_b01;
    pontos_turisticos_vencedora_A01 = pontos_turisticos_a01 >= pontos_turisticos_b01;
    densidade_vencedora_A01 = densidade_pp_a01 <= densidade_pp_b01;
    pib_capta_vencedora_A01 = pib_capta_a01 >= pib_capta_b01;

    //Implementando a lógica para comparação de cidade_b01 com cidade_b01
    // *********
    // ********   Não seria comparar b01 com a02 ou b02? Porque você está comparando as mesmas cidades que antes, só inverteu a posição no operador lógico
    // ********
    populacao_vencedora_B01 = habitantes_b01 >= habitantes_a01;
    area_vencedora_B01 = km_area_b01 >= km_area_a01;
    pib_vencedora_B01 = pib_b01 >= pib_a01;
    pontos_turisticos_vencedora_B01 = pontos_turisticos_b01 >= pontos_turisticos_a01;
    densidade_vencedora_B01 = densidade_pp_b01 <= densidade_pp_a01;
    pib_capta_vencedora_B01 = pib_capta_b01 >= pib_capta_a01;

    //SUPER PODER DAS CARTAS a01 - b01
    power_a01 =(pib_capta_a01 / 1000) + (densidade_pp_a01 / 100);
    power_b01 =(pib_capta_b01 / 1000) + (densidade_pp_b01 / 100);
    
    //Exibindo os dados de vantagem da cidade_a01 em cima da cidade_b01 e vice-versa.
    printf("-------------------------------------------- Vantagem --------------------------------------------\n\n");
    printf("Cidade: %s                  ||    Cidade: %s \n",cidade_a01, cidade_b01);
    printf("Código: %s                  ||    Código: %s \n", cod_cidade_a01, cod_cidade_b01);
    printf("População: %d               ||    População: %d \n", populacao_vencedora_A01, populacao_vencedora_B01);
    printf("Área: %d                    ||    Área: %d \n", area_vencedora_A01, area_vencedora_B01);
    printf("PIB: %d                     ||    PIB: %d \n", pib_vencedora_A01, pib_vencedora_B01);
    printf("Pontos Turísticos: %d       ||    Pontos Turísticos: %d \n", pontos_turisticos_vencedora_A01, pontos_turisticos_vencedora_B01);
    printf("Densidade População: %d     ||    Densidade População: %d \n", densidade_vencedora_A01, densidade_vencedora_B01);
    printf("PIB per capta: %d           ||    PIB per capta: %d \n", pib_capta_vencedora_A01, pib_capta_vencedora_B01);
    printf("SUPER PODER: %.1f           ||    SUPER PODER: %.1f \n\n", power_a01, power_b01);

    /* UM BREVE COMENTÁRIO SOBRE O CÓDIGO ACIMA! LINHA 220 - 249
    legal! cidade_a01 faz a comparação com somente cidade_b01, antes de deixá-lo desta forma eu estruturei mas ja 
    comparando duas cidades com uma: EX:  cidade_a01 >= cidade_b01, cidade_b02
    mas desta forma vamos supor que a cidade seja maior do que uma e menor que outra, a exibição iria dar como false (0), 
    então prefiri deixar desta forma que está, mesmo que os códigos fiquem imensos! até porque ainda não estamos utilizando
    as estruturas de repetição!

    //Veja comentário na linha 228.
    
    E devido ao super poder... Eu queria que ficasse um número abaixo de cem para melhor comparação então pesquisei formas
    de deixar essa vantagem em cima de somente duas propriedades das cidades.
    E ainda estou me perguntando... como juntarei a primeira letra do estado com o código da cidade   

    //Como você criou variáveis separadas, você pode fazer isso com concatenação de strings (não vemos isso nesta disciplina) ou trabalhando com manipulação de ponteiros, 
    //assunto que será visto na disciplina de estrutura de dados.
    
    */

    return 0;
}
