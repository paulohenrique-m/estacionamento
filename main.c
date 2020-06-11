#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct cliente
{
    int placa;
    char marca[20];
    //scanf("%d:%d");
    //colocar hora_entrada e hora_saída
    //preço por hora
};

void ler_carro(struct cliente dados[])
{
    printf("\n--------programa para estacionamento--------\n");
    printf("\nmarca:");
    scanf(" %s", dados[0].marca);
    printf("\nplaca:");
    scanf(" %i", &dados[0].placa);
    /*
    descrição:procedimento para ler marca e placa do veiculo adicionado
    entrada:string(veiculo) e inteiro(placa)
    saída:não tem
    */
}
void guardar_arquivo(struct cliente dados[])
{
    FILE *fp;
    fp = fopen("estacionamento.txt", "a");
    if (fp == NULL)
    {
        printf("arquivo não encontrado!!!!");
        return;
    }
    fprintf(fp, "\n---------------\n");
    fprintf(fp, "marca-%s\n", dados[0].marca);
    fprintf(fp, "placa-%i", dados[0].placa);
    fprintf(fp, "\n---------------\n");
    fclose(fp);
    /*
    descrição:procedimento para guardar os arquivos recebidos pela ler_carro em arquivo
    entrada:não tem
    saída:arquivo.txt com dados do carro(marca e placa)
    */
}
void cadastrar(struct cliente dados[])
{
    int opc = -1;
    while (opc != 0)
    {
        ler_carro(dados);
        guardar_arquivo(dados);
        printf("\ncarro guardado!!\n");
        printf("deseja guardar mais algum carro?(0-sair 1-continuar):");
        scanf("%i", &opc);
    }
    /*
    descrição:procedimento para usar a função ler_carro e guardar_arquivo
    entrada:não tem
    saída:não tem 
    */
}
/*
void calcular_preço(){

}
*/
int main()
{
    struct cliente dados[1];
    /*
    ler_carro(dados);
    guardar_arquivo(dados);
    */
    cadastrar(dados);
    return 0;
}
