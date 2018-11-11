#include <stdio.h>
#include <string.h>

typedef struct tabela{
  char* nome;
  char** campos;
  char** tipos;
}Tabela;

Tabela* criar_tab(void){
  int nt,i,j;
  Tabela *n;
  printf("Quantas tabelas deseja criar ?");
  scanf(" %i", &nt);
  Tabela tabelas[nt];
  for(i=0; i<nt; i++){
    strcpy(tabelas[i].nome, "NULL");
  }
  for(i=0; i<nt; i++){
  printf("Qual será o nome da tabela %i ?", i+1);
  scanf(" %s", tabelas[i].nome);
  }


  return n;
}


int main(void) {
  char p = 'n';
  int n_t,i;
  FILE *arquivo = fopen( "sgbd.txt", "w" );
  if( arquivo == NULL ){
      printf( "Erro na abertura do arquivo" );
  }else{
  while(p != 's'){
    printf("Deseja criar uma nova tabela ?(s ou n)");
    scanf("%c", &p);
    printf("Quantas tabelas deseja criar ?");
    scanf(" %i", &n_t);
    Tabela tabelas[n_t];

    for(i=0; i<n_t; i++){
      tabelas[i]=criar_tab;
      fprintf(arquivo, tabelas[i]);
    }
  }
  fclose(arquivo);
  }

  return 0;
}


