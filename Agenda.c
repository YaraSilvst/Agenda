#include <stdio.h>
#include <string.h>

struct Pessoa
{
    int codigo;
    char nome[50];
    char telefone[15];
    char email[50];
    char aniversario[11];
    char anotacoes[100];
};

struct Pessoa contatos[10];
 int cont = 1;

void cadastro() {
    
    int OpCadastro;
   
    for (cont = 0; cont < 10; cont++)
    {
       if (cont < 10)
        {
            printf("\nCodigo: ");
                scanf("%i", &contatos[cont].codigo);
            
            
            while (contatos[cont].codigo < 1);
            {

            printf("\nNome: ");
            scanf("%s", contatos[cont].nome);

            printf("\nTelefone: ");
            scanf("%s", contatos[cont].telefone);

            printf("\nEmail: ");
            scanf("%s", contatos[cont].email);

            printf("\nAniversario: ");
            scanf("%s", contatos[cont].aniversario);

            printf("\nAnotacoes: ");
            scanf("%s", contatos[cont].anotacoes);
            }
        } else
        
            printf("Agenda Cheia");
            printf("\nDeseja cadastrar outro contato?: \n");
            printf("1 - Sim\n");
            printf("2 - Nao\n");
            scanf("%d", &OpCadastro);
                if (OpCadastro == 2)
                {
                   break;
                }
    }            
}

void listar() {
    for (cont = 0; cont < 10 && contatos[cont].codigo > 0; cont++)
    {
        printf("%i\nCodigo:", contatos[cont].codigo);
        printf("%s\nNome:", contatos[cont].nome);
        printf("%s\nTelefone:", contatos[cont].telefone);
        printf("%s\nEmail:", contatos[cont].email);
        printf("%s\nAniversario:", contatos[cont].aniversario);
        printf("%s\nAnotacoes:", contatos[cont].anotacoes);
    }   
}

void buscar() {   
    int buscar;

    printf("\nInforme o codigo da pessoa que deseja consultar: ");
    scanf("%d", &buscar);

    for(cont = 0; cont < 10; cont++) {

            if(buscar == contatos[cont].codigo) 
            {
                printf("\nNome: %s", contatos[cont].nome);
                printf("\nTelefone: %s", contatos[cont].telefone);
                printf("\nEmail: %s", contatos[cont].email);
                printf("\nAniversario: %s", contatos[cont].aniversario);
                printf("\nAnotacoes: %s", contatos[cont].anotacoes); 
                break; 
            }  
        } 

    if (cont == 10) {
        printf("Contato nao cadastrado!");
    }  
}

void alterar(){
    int alterar;

    printf("\nInforme o codigo do contato que deseja alterar: ");
    scanf("%d", &alterar);

    for(cont = 0; cont < 10; cont++) {

            if(alterar == contatos[cont].codigo) 
            {
                printf("\nNome: %s", contatos[cont].nome);
                printf("\nNome: %s - ");
                scanf("%s", contatos[cont].nome);

                printf("\nTelefone: %s", contatos[cont].telefone);
                printf("\nTelefone %s- ");
                scanf("%s", contatos[cont].telefone);

                printf("\nEmail: %s", contatos[cont].email);
                printf("\nE-mail: %s - ");
                scanf("%s", contatos[cont].email);

                printf("\nAniversario: %s", contatos[cont].aniversario);
                printf("\nAniversario %s - ");
                scanf("%s", contatos[cont].aniversario);

                printf("\nAnotacoes: %s", contatos[cont].anotacoes); 
                printf("\nAnotacoes %s - ");
                scanf("%s", contatos[cont].anotacoes);
                break; 
            }  
        } 

    if (cont == 10) {
        printf("Contato nao cadastrado!");
    }  
}

void excluir() {
    int codigo;

    printf("\nInforme o codigo do contato que deseja alterar: ");
    scanf("%d", &codigo);
    printf("Contato excluido!\n");

    for(cont = 0; cont < 10; cont++) {

        if(contatos[cont].codigo == codigo) {
            contatos[cont].codigo = 0;
            break;
        }
    }
        if(cont == 0); {
            ("Contato nao encontrado!\n");
        }
}
    

void menu() {

    int OpMenu;
     do 
     {
        printf("\n-------------------\n");
        printf("       AGENDA        \n");
        printf("---------------------\n");
        printf(" 1 - Cadastrar       \n");
        printf(" 2 - Listar          \n");
        printf(" 3 - Buscar          \n");
        printf(" 4 - Alterar         \n");
        printf(" 5 - Excluir         \n");
        printf("---------------------\n");
        scanf("%d", &OpMenu);

        switch (OpMenu)
        {
            case 1:
                cadastro();
                break;

            case 2:
                listar();
                break;

            case 3:
                buscar();
                break;

            case 4:
                alterar();
                break;

            case 5:
                excluir();
                break;

            case 0:
                //sair
                break;

            default:
            printf("Opcao Invalida");
            break;
        }
    } while (OpMenu != 0);
}


int main () {
   
    menu();
}