#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 500
// Aline Nunes e Stephany Milhomem\\

typedef struct {
                char nome_medico[40];
                char data_nasc[11];
                char telefone[16];
                char email[40];
                char RG[7];
                char CPF[11];
                char Endereco[20];
                char area_atuacao[20];
                int titulacao_max;
                char salario_mensal[15];
                char data_adm[11];
                char tempo_exp[10];
                int crm[13];
            }  Controle_medico;

typedef struct { Controle_medico sistema[MAX];
                 int prim, ult;
                 char ult_atualizacao;
                 }SISTEMA;


void inicializar_sistema(SISTEMA *s) {
    s->prim = 0;
    s->ult = 0;
    fgets(s->ult_atualizacao, 11, stdin);
    getchar();
}


void Menu() {
   getchar();

   printf("********  M E N U    C A D A S T R O   D E   M E D I C O S********\n");
   printf("1 - Adicionar Medico\n");
   printf("2 - Alterar dados do Medico\n");
   printf("3 - Exibir medicos ja cadastrados\n");
   printf("4 - Buscar medicos ja cadastrados por crm\n");
   printf("5 - Exibir medicos ja cadastrados por titulacao\n");
   printf("6 - Exibir medicos ja cadastrados por area de atuacao\n");
   printf("7 - Sair do Aplicativo\n");

}


void exibir_medico(Controle_medico a) {
    printf(" MEDICO \n");
    printf(" Nome do medico: %s\n",a.nome_medico);
    printf("  CRM do medico: %s\n",a.crm);
    printf(" Areas de atuacao do medico: %s\n",a.area_atuacao);
    printf(" Titulacao Maxima do medico: %s\n",a.titulacao_max);
    printf(" Telefone do medico: %s\n",a.telefone);
    printf(" Email do medico: %s\n",a.email);
    printf(" Endereco do medico: %s\n",a.Endereco);
    printf(" Area de atuacao do medico: %s\n",a.area_atuacao);
    printf(" RG do medico: %s\n",a.RG);
    printf(" CPF do medico: %s\n",a.CPF);

    printf("=========================================\n");

}

void exibir_medico_titulacao(SISTEMA s) {
    int i;
    Controle_medico a;
   for(i=0;i<s.ult;i++){
        a=s.sistema[i];
    if(a.titulacao_max==0){
        printf(" MEDICO \n");

    printf(" Nome do medico: %s\n",a.nome_medico);
    printf("  CRM do medico: %d\n",a.crm);
    printf(" Areas de atuacao do medico: %s\n",a.area_atuacao);
    printf(" Titulacao Maxima do medico: %d\n",a.titulacao_max);
    printf(" Telefone do medico: %s\n",a.telefone);
    printf(" Email do medico: %s\n",a.email);
    printf(" Endereco do medico: %s\n",a.Endereco);
    printf(" Area de atuacao do medico: %s\n",a.area_atuacao);
    printf(" RG do medico: %s\n",a.RG);
    printf(" C(a.titulacao_max==0)PF do medico: %s\n",a.CPF);
    }
    else if(a.titulacao_max==1){
        printf(" MEDICO \n");
    printf(" Nome do medico: %s\n",a.nome_medico);
    printf("  CRM do medico: %d\n",a.crm);
    printf(" Areas de atuacao do medico: %s\n",a.area_atuacao);
    printf(" Titulacao Maxima do medico: %d\n",a.titulacao_max);
    printf(" Telefone do medico: %s\n",a.telefone);
    printf(" Email do medico: %s\n",a.email);
    printf(" Endereco do medico: %s\n",a.Endereco);
    printf(" Area de atuacao do medico: %s\n",a.area_atuacao);
    printf(" RG do medico: %s\n",a.RG);
    printf(" CPF do medico: %s\n",a.CPF);
    }
    else if(a.titulacao_max==2){
        printf(" MEDICO \n");
    printf(" Nome do medico: %s\n",a.nome_medico);
    printf("  CRM do medico: %d\n",a.crm);
    printf(" Areas de atuacao do medico: %s\n",a.area_atuacao);
    printf(" Titulacao Maxima do medico: %d\n",a.titulacao_max);
    printf(" Telefone do medico: %s\n",a.telefone);
    printf(" Email do medico: %s\n",a.email);
    printf(" Endereco do medico: %s\n",a.Endereco);
    printf(" Area de atuacao do medico: %s\n",a.area_atuacao);
    printf(" RG do medico: %s\n",a.RG);
    printf(" CPF do medico: %s\n",a.CPF);
    }
    else if(a.titulacao_max==3){
        printf(" MEDICO \n");
    printf(" Nome do medico: %s\n",a.nome_medico);
    printf("  CRM do medico: %d\n",a.crm);
    printf(" Areas de atuacao do medico: %s\n",a.area_atuacao);
    printf(" Titulacao Maxima do medico: %d\n",a.titulacao_max);
    printf(" Telefone do medico: %s\n",a.telefone);
    printf(" Email do medico: %s\n",a.email);
    printf(" Endereco do medico: %s\n",a.Endereco);
    printf(" Area de atuacao do medico: %s\n",a.area_atuacao);
    printf(" RG do medico: %s\n",a.RG);
    printf(" CPF do medico: %s\n",a.CPF);
    }
    else if(a.titulacao_max==4){
        printf(" MEDICO \n");
    printf(" Nome do medico: %s\n",a.nome_medico);
    printf("  CRM do medico: %d\n",a.crm);
    printf(" Areas de atuacao do medico: %s\n",a.area_atuacao);
    printf(" Titulacao Maxima do medico: %d\n",a.titulacao_max);
    printf(" Telefone do medico: %s\n",a.telefone);
    printf(" Email do medico: %s\n",a.email);
    printf(" Endereco do medico: %s\n",a.Endereco);
    printf(" Area de atuacao do medico: %s\n",a.area_atuacao);
    printf(" RG do medico: %s\n",a.RG);
    printf(" CPF do medico: %s\n",a.CPF);
    }
   }

    printf("=========================================\n");
}

void adicionar_medico(Controle_medico *a){
  printf("Entre com o nome do medico: \n");
  fgets(a->nome_medico,40,stdin);
  getchar();

  printf("Entre com a data de nascimento do medico: \n");
  fgets(a->data_nasc,11,stdin);
  getchar();
                  printf("Entre com o telefone de contato do medico:  \n\n");
                     fgets(a->telefone,16,stdin);
                     getchar();

                  printf("Entre com o E-mail do medico:  \n\n");
                     fgets(a->email,40,stdin);
                     getchar();

                  printf("Entre com o RG do medico: \n\n");
                     fgets(a->RG,7,stdin);
                         getchar();

                  printf("Entre com o CPF do medico: \n\n");
                      fgets(a->CPF,11,stdin);
                         getchar();


                  printf("Entre com a area de atuacao do medico: \n\n");
                      fgets(a->area_atuacao,20,stdin);
                            getchar();

                  printf("Entre com a titulacao maxima do medico: \n\n");
                      fgets(a->titulacao_max,5,stdin);
                           getchar();

                  printf("Entre com o salario mensal do medico: \n\n");
                      fgets(a->salario_mensal,15, stdin);
                           getchar();

                  printf("Entre com a data de admissao do medico: \n\n");
                      fgets(a->data_adm,11,stdin);
                           getchar();

                  printf("Entre com o tempo de experiencia do medico: \n\n");
                      fgets(a->tempo_exp,10,stdin);
                           getchar();

                  printf("Entre com o CRM do medico: \n\n");
                      fgets(a->crm,13,stdin);
                           getchar();

                 printf("Entre com o endereco do medico: \n\n");
                      fgets(a->Endereco,20,stdin);
                           getchar();


}
void insere_medico_sistema(SISTEMA *s, Controle_medico a){
    if(s->ult==MAX)
        printf("Aumente a capacidade do sistema e volte a inserir medicos\n");
    else{
        s->sistema[s->ult] = a;
        s->ult++;
    }
}

void buscar_medico_crm(Controle_medico a, SISTEMA s){
    int i=0;
    while((i<s.ult)&&(a.crm!=s.sistema[i].crm))
        i++;
    if(i==s.ult)
        printf("O medico de crm = %s nao esta no sistema\n", a.crm);
    else{ printf("O medico consultado sera exibido a seguir: \n");
        exibir_medico(s.sistema[i]);

    }
}
void exibir_medicos_atuacao(SISTEMA s, Controle_medico a){
     int i;
     for(i=0;i<s.ult;i++){
          a=s.sistema[i];
      if(a.area_atuacao==a.area_atuacao){
     /*printf("Entre com a area de atuacao que deseja buscar\n");
       fgets(a->area_atuacao,20, stdin);
       getchar();

         while(area_atuacao==area_atuacao){
 */
         printf(" MEDICO \n");
    printf(" Nome do medico: %s\n",a.nome_medico);
    printf("  CRM do medico: %s\n",a.crm);
    printf(" Areas de atuacao do medico: %s\n",a.area_atuacao);
    printf(" Titulacao Maxima do medico: %s\n",a.titulacao_max);
    printf(" Telefone do medico: %s\n",a.telefone);
    printf(" Email do medico: %s\n",a.email);
    printf(" Endereco do medico: %s\n",a.Endereco);
    printf(" Area de atuacao do medico: %s\n",a.area_atuacao);
    printf(" RG do medico: %s\n",a.RG);
    printf(" CPF do medico: %s\n",a.CPF);
    }
  }
}


void menu_altera(){
    getchar();
    printf("Menu Alteracoes dos Dados Cadastrais\n");
    printf("1 - Alterar e-mail\n");
    printf("2 - Alterar Telefone\n");
    printf("3 - Alterar Atuacao\n");
    printf("4 - Sair da alteracao\n");
    printf("Entre com opcao\n");
}


int main(){
    Controle_medico a;
    SISTEMA s;
    int op, op_alt;

    do{ Menu();
     scanf("%d", &op);
     getchar();
       switch(op) {
          case 1: adicionar_medico(&a);
                  insere_medico_sistema(&s, a);
                  break;

            case 2: exibir_medico(a);
                         break;

            case 3:getchar();
                    printf("Entre com o nome do medico que deseja alterar\n");
                    fgets(a.nome_medico,40,stdin);

                     do{menu_altera();
                            scanf("%d",&op_alt);
                            getchar();
                         switch(op_alt){
                            case 1:
                               printf("E-MAIL atual: %s\n",a.email);
                            printf("Escreva o novo email\n");
                            fgets(a.email,40,stdin);
                            getchar();
                            break;
                            case 2:
                                printf("Telefone atual: %s\n",a.telefone);
                            printf("Escreva o numero do novo telefone \n");
                            fgets(a.telefone,16,stdin);
                            getchar();
                            break;
                            case 3:
                           printf("Atuacao atual: %s\n",a.area_atuacao);
                            printf("Escreva a nova area de atuacao: \n");
                            fgets(a.area_atuacao,20,stdin);
                            getchar();
                            break;

                            case 4: printf("Alteraçao encerrada\n");
                            break;
                        }
                      }while(op_alt!=4);
                        printf("Apos a alteracao a informacao do medico ficou:\n");
                        exibir_medico(a);
                        break;


            case 4: printf("Entre com o crm que deseja consultar:\n");
                        fgets(a.crm,13,stdin);
                        getchar();
                        buscar_medico_crm(a, s);
                        getchar();
                        break;
            case 5: printf("0 = graduado\n");
                        printf("1 = especialista\n");
                        printf("2 = mestrado\n");
                        printf("3 = doutorado\n");
                        printf("4 = pos-doutorado\n");
                        printf("Entre com o numero da titulacao: \n");
                        fgets(a.titulacao_max,20,stdin);
                        getchar();
                        exibir_medico_titulacao(s);
                        getchar();
                          break;

            case 6: printf("Entre com a area de atuacao que deseja consultar: \n");
                             fgets(a.area_atuacao,20,stdin);
                             getchar();
                             exibir_medicos_atuacao(s, a);
                              getchar();
                           break;

          case 7: printf("OBRIGADO POR USAR NOSSO APLICATIVO - VOLTE SEMPRE\n");
               break;
               default : printf("Entre com a opcao correta de 1 a 6\n");
               break;
       }
    }while(op!=7);

return 0;
}
