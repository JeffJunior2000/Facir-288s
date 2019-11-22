#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>

typedef struct filme //Estrutura para filmes
{
    int identificador;
    char titulo[50];
    int ano;
    char genero[20];

}Tfilme[20];

typedef struct cliente  //Estrutura para clientes
{
    int idcliente;
    char nome[40];
    char cpf[15];
    char email[40];

}Tcliente[100];

typedef struct estoque //Estrututa para estoque
{
    int identificadorestoque;
    int idfilme;
    char datadeentrada[10];

}Testoque[20];

//Vari�veis globais
int res;
int indice=1;
int indice1=1;
int indice2=1;
int qtd_filmes = 100;
int qtd_clientes = 0;
int escolha;
Tfilme filme;
Tcliente cliente;
Testoque estoque;

//Criando fun��o Menu Principal
void menuPrincipal(){
    printf("---------------------------------\n");
    printf("           LOCADORA OPI          \n");
    printf("---------------------------------\n");
	printf(" [1] - Menu Filme\n");
	printf(" [2] - Menu Cliente\n");
	printf(" [3] - Menu Estoque\n");
	printf(" [4] - Menu Aluguel e Devolucoes\n");
	printf(" [5] - SAIR\n");

    scanf("%d",&escolha); //Pega a op��o que o cliente escolher

	switch(escolha){

		case 1://Caso o cliente escolha a op��o 1
		    system("cls"); //Limpar a tela
            menuFilme(); //Chama a fun��o menu filme
		break;

		case 2://Caso o cliente escolha a op��o 2
            system("cls"); //Limpar a tela
            menuCliente();  //Chama a fun��o Menu Cliente
		break;

		case 3://Caso o cliente escolha a op��o 3
            system("cls"); //Limpar a tela
            menuEstoque();//Chama a fun��o menu Estoque

        case 4://Caso o cliente escolha a op��o 4
            system("cls"); //Limpar a tela
            menuAluguel(); //Chama a fun��o menu aluguel
		break;

		case 5://Caso o cliente escolha a op��o 5
            break;
        default:
		printf("Op��o digitada invalida tente novamente! \n");
		menuPrincipal(); //Chama a fun��o menu principal
        break;
	}

}

//Criando fun��o Menu Filme
void menuFilme(){

	printf("Bem vindo ao Menu de filmes!\n");

	printf(" [1] - Cadastrar\n");
	printf(" [2] - Listar\n");
	printf(" [3] - Consultar\n");
	printf(" [4] - Vizualizar\n");
	printf(" [5] - Atualizar\n");
	printf(" [6] - Remover\n");
	printf(" [7] - <- Voltar ao Menu Principal\n");
	printf(" [0] - SAIR\n");

    scanf("%d",&escolha); //Pega a op��o que o cliente escolher

    switch(escolha){

        case 1: //Caso o cliente escolha a op��o 1
            system("cls"); //Limpar a tela
            cadastrarFilme();//Chama a fun��o cadastrar filme
            break;

        case 2: //Caso o cliente escolha a op��o 2
            system("cls"); //Limpar a tela
             listarFilme(); //Chama a fun��o listar filme
        break;

        case 3: //Caso o cliente escolha a op��o 3
            system("cls"); //Limpar a tela
            consultarFilme(); //Chama a fun��o consultar filme
            break;

        case 7: //Caso o cliente escolha a op��o 7
            system("cls"); //Limpar a tela
            menuPrincipal(); //Chama a fun��o menu principal
            break;

        case 0: //Caso o cliente escolha a op��o 0
            printf("Ate mais!");
            printf("Ate mais!");
            printf("Ate mais!");
            printf("Ate mais!");
            printf("Ate mais!");
            break;
        default:
            printf("Opcao invalida");
            menuFilme(); //Chama a fun��o menu filme

    }



}

//Fun��o para listar filmes
void listarFilme(){

   do{
    for(indice = 1;filme[indice].identificador != 0; indice++){

        printf("ID: %d\n",filme[indice].identificador); //Mostra na tela o id do Filme
        printf("Titulo: %s\n",filme[indice].titulo); //Mostra na tela o titulo do Filme
        printf("Ano de lancamento: %d\n",filme[indice].ano); //Mostra na tela o ano do Filme
        printf("Genero: %s\n\n",filme[indice].genero); //Mostra na tela o genero do Filme
    }
        printf("\nDeseja lista novamente? se sim digite [1] se nao digite [2]: ");
        scanf("%d", &res);//Pega a resposta e se for 1 repete novamente
        system("cls"); //Limpar a tela
    }while(res==1);
    system("cls"); //Limpar a tela
    menuFilme(); //Chama a fun��o menu filme
}

//fun��o para listar clientes
void listarCliente(){

   do{
    for(indice1 = 1;cliente[indice1].idcliente != 0; indice1++){

        printf("ID: %d\n",cliente[indice1].idcliente); //Mostra na tela o id do cliente
        printf("Nome: %s\n",cliente[indice1].nome); //Mostra na tela o nome do cliente
        printf("CPF: %s\n",cliente[indice1].cpf); //Mostra na tela o cpf do cliente
        printf("Email: %s\n\n",cliente[indice1].email); //Mostra na tela o email do cliente
    }
        printf("\nDeseja lista novamente? se sim digite [1] se nao digite [2]: ");
        scanf("%d", &res); //Pega a resposta e se for 1 repete novamente
        system("cls"); //Limpar a tela
    }while(res==1);
    system("cls"); //Limpar a tela
    menuCliente(); //chama a fun��o menu cliente
}

//Criando fun��o cadastrar filme
void cadastrarFilme(){



    do{

        printf("Digite o identificador do filme: \n");
        scanf("%d",&filme[indice].identificador); //Pega o id do filme e armazena na vari�vel
        printf("Digite o titulo do filme: \n");
        scanf("%s",&filme[indice].titulo); //Pega o titulo do filme e armazena na vari�vel
        printf("Digite o ano de producao do filme: \n");
        scanf("%d",&filme[indice].ano); //Pega o ano do filme e armazena na vari�vel
        printf("Digite o genero do filme: \n");
        scanf("%s",&filme[indice].genero); //Pega o genero do filme e armazena na vari�vel
        system("cls");
        printf(" ----- FILME CADASTRADO -----\n");
        printf("Digite 1 para cadastrar um novo filme ou 2 para voltar ao menu.\n");
        scanf("%d",&res); //Pega a resposta e se for 1 repete novamente
        ++indice;
        system("cls"); //Limpar a tela
        }while (res == 1);
            system("cls"); //Limpar a tela
            menuFilme(); //Chama a fun��o menu filme

}

//Criando o consultar filmes
void consultarFilme(){
    int i;
    do{
        printf("Digite o id do filme: ");
        scanf("%d", &i);
        printf("%s",filme[i].titulo); //Mostra na tela o nome do filme
        printf("\nDeseja consultar novamente? se sim digite [1], se nao digite [2]: ");
        scanf("%d", &res); //Pega a resposta e se for 1 repete novamente
        system("cls"); //Limpar a tela
    }while(res==1);
            system("cls"); //Limpar a tela
            menuFilme(); //Chama a fun��o menu filme
}
//Criando fun��o para cadastrar cliente
void cadastrarCliente(){

    do{
        printf("Digite o ID do cliente\n");
        scanf("%d",&cliente[indice1].idcliente); //Pega o id do cliente e armazena na vari�vel
        printf("Digite o nome do cliente\n");
        scanf("%s",&cliente[indice1].nome); //Pega o nome do cliente e armazena na vari�vel
        printf("Digite o CPF do cliente\n");
        scanf("%s",&cliente[indice1].cpf); //Pega o cpf do cliente e armazena na vari�vel
        printf("Digite o Email do cliente\n");
        scanf("%s",&cliente[indice1].email); //Pega o email do cliente e armazena na vari�vel
        system("cls"); //Limpar a tela
        printf(" ----- CLIENTE CADASTRADO -----\n");
        printf("Digite 1 para cadastrar um novo cliente ou 2 para voltar ao menu.\n");
        scanf("%d",&res); //Pega a resposta e se for 1 repete novamente
        ++indice1;
        system("cls"); //Limpar a tela
    }while (res == 1);
            system("cls"); //Limpar a tela
            menuCliente(); //chama a fun��o menu cliente

}

//Criando fun��o para cadastrar estoque
void cadastrarestoque(){

    do{
        printf("Digite o ID:\n");
        scanf("%d",&estoque[indice2].identificadorestoque); //Pega o id e armazena na vari�vel
        printf("Digite o ID do Filme:\n");
        scanf("%s",&estoque[indice2].idfilme); //Pega id do filme e armazena na vari�vel
        printf("Digite a data de entrada no estoque:\n");
        scanf("%s",&estoque[indice2].datadeentrada); //Pega a data de entrada do filme e armazena na vari�vel
        system("cls"); //Limpar a tela
        printf(" ----- CADASTRADO NO ESTOQUE -----\n");
        printf("Digite 1 para cadastrar um novo cliente ou 2 para voltar ao menu.\n");
        scanf("%d",&res); //Pega a resposta e se for 1 repete novamente
        ++indice2;
        system("cls"); //Limpar a tela
    }while (res == 1);
            system("cls"); //Limpar a tela
            menuEstoque(); //chama a fun��o menu cliente

}


//Criando fun��o para consultar cliente
void consultarCliente(){
    int i;
    do{
        printf("Digite o id do cliente: ");
        scanf("%d", &i);
        printf("%s",cliente[i].nome); //Mostra na tela o Nome do cliente
        printf("\nDeseja consultar novamente? se sim digite [1], se n�o digite [2]");
        scanf("%d", &res); //Pega a resposta e se for 1 repete novamente
        system("cls"); //Limpar a tela
    }while(res==1);
            system("cls"); //Limpar a tela
            menuCliente(); //Chama a fun��o menu cliente

}


//Criando fun��o Menu Cliente
void menuCliente(){

	printf("Bem vindo ao Menu de clientes!\n");

	printf(" [1] - Cadastrar\n");
	printf(" [2] - Listar\n");
	printf(" [3] - Consultar\n");
	printf(" [4] - Vizualizar\n");
	printf(" [5] - Atualizar\n");
	printf(" [6] - Remover\n");
	printf(" [7] - <- Voltar ao Menu Principal\n");
	printf(" [0] - SAIR\n");

	scanf("%d",&escolha); //Pega a op��o que o cliente escolher

    switch(escolha){

        case 1://Caso o cliente escolha a op��o 1
            system("cls"); //Limpar a tela
            cadastrarCliente();//Chama a fun��o cadastrar cliente
            break;
        case 2://Caso o cliente escolha a op��o 2
            system("cls"); //Limpar a tela
            listarCliente();//Chama a fun��o listar cliente
            break;
        case 3://Caso o cliente escolha a op��o 3
            system("cls"); //Limpar a tela
            consultarCliente();//Chama a fun��o consultar cliente
            break;
        case 7://Caso o cliente escolha a op��o 7
            system("cls"); //Limpar a tela
            menuPrincipal(); //Chama a fun��o menu principal
            break;
        case 0://Caso o cliente escolha a op��o 0
            system("cls"); //Limpar a tela
            printf("Ate mais!");
            break;
        default:
            printf("Op��o inv�lida!\n");
            menuCliente(); //chama a fun��o menu cliente

    }

}

//criando fun��o menu estoque

void menuEstoque(){

    printf("Bem vindo ao Menu de esqtoque!\n");

	printf(" [1] - Cadastrar\n");
	printf(" [2] - Listar\n");
	printf(" [3] - Consultar\n");
	printf(" [4] - Vizualizar\n");
	printf(" [5] - Editar estoque\n");
	printf(" [6] - <- Voltar ao Menu Principal\n");
	printf(" [0] - SAIR\n");

	scanf("%d",&escolha); //Pega a op��o que o cliente escolher

    switch(escolha){

        case 1://Caso o cliente escolha a op��o 1
            system("cls"); //Limpar a tela
            cadastrarestoque();//Chama a fun��o cadastrar estoque
            break;
        case 2://Caso o cliente escolha a op��o 2
            system("cls"); //Limpar a tela
            printf("Opcao em criacao!\n");
            system("pause");//da uma congelada na tela
            system("cls"); //Limpar a tela
            menuEstoque();//chama a fun��o menu aluguel
            break;
        case 3://Caso o cliente escolha a op��o 3
            system("cls"); //Limpar a tela
            //consultarestoque();//Chama a fun��o consultar estoque
            printf("Opcao em criacao!\n");
            system("pause");//da uma congelada na tela
            system("cls"); //Limpar a tela
            menuEstoque();//chama a fun��o menu aluguel
            break;
        case 4://Caso o cliente escolha a op��o 4
            system("cls"); //Limpar a tela
            //consultarestoque();//Chama a fun��o consultar estoque
            printf("Opcao em criacao!\n");
            system("pause");//da uma congelada na tela
            system("cls"); //Limpar a tela
            menuEstoque();//chama a fun��o menu aluguel
            break;
        case 5://Caso o cliente escolha a op��o 5
            system("cls"); //Limpar a tela
            //consultarestoque();//Chama a fun��o consultar estoque
            printf("Opcao em criacao!\n");
            system("pause");//da uma congelada na tela
            system("cls"); //Limpar a tela
            menuEstoque();//chama a fun��o menu aluguel
            break;
        case 6://Caso o cliente escolha a op��o 6
            system("cls"); //Limpar a tela
            menuPrincipal(); //Chama a fun��o menu principal
            break;
        case 0://Caso o cliente escolha a op��o 0
            system("cls"); //Limpar a tela
            printf("Ate mais!");
            break;
        default:
            printf("Op��o inv�lida!\n");
            menuEstoque(); //chama a fun��o menu cliente

    }
}
//criando fun��o menu aluguel
void menuAluguel(){
    printf("Bem vindo ao Menu de Aluguel e Devolucoes!\n");

	printf(" [1] - Alugar filme\n");
	printf(" [2] - Alugar filme por cliente\n");
	printf(" [3] - Listar filmes alugados\n");
	printf(" [4] - Listar filmes alugados por um certo cliente\n");
	printf(" [5] - Visualizar filmes alugados\n");
	printf(" [6] - <- Voltar ao Menu Principal\n");
	printf(" [0] - SAIR\n");

	scanf("%d",&escolha); //Pega a op��o que o cliente escolher

    switch(escolha){

        case 1://Caso o cliente escolha a op��o 1
            system("cls"); //Limpar a tela
            printf("Opcao em criacao!\n");
            system("pause");//da uma congelada na tela
            system("cls"); //Limpar a tela
            menuAluguel();//chama a fun��o menu aluguel
            break;
        case 2://Caso o cliente escolha a op��o 2
            system("cls"); //Limpar a tela
            printf("Opcao em criacao!\n");
            system("pause");//da uma congelada na tela
            system("cls"); //Limpar a tela
            menuAluguel();//chama a fun��o menu aluguel
            break;
        case 3://Caso o cliente escolha a op��o 3
            system("cls"); //Limpar a tela
            printf("Opcao em criacao!\n");
            system("pause"); //da uma congelada na tela
            system("cls"); //Limpar a tela
            menuAluguel();//chama a fun��o menu aluguel
            break;
        case 4://Caso o cliente escolha a op��o 4
            system("cls"); //Limpar a tela
            printf("Opcao em criacao!\n");
            system("pause");//da uma congelada na tela
            system("cls"); //Limpar a tela
            menuAluguel();//chama a fun��o menu aluguel
            break;
        case 5://Caso o cliente escolha a op��o 5
            system("cls"); //Limpar a tela
            printf("Opcao em criacao!\n");
            system("pause");//da uma congelada na tela
            system("cls"); //Limpar a tela
            menuAluguel();//chama a fun��o menu aluguel
            break;
        case 6://Caso o cliente escolha a op��o 6
            system("cls"); //Limpar a tela
            menuPrincipal(); //Chama a fun��o menu principal
            break;
        case 0://Caso o cliente escolha a op��o 0
            system("cls"); //Limpar a tela
            printf("Ate mais!");
            break;
        default:
            printf("Op��o inv�lida!\n");
            menuCliente(); //chama a fun��o menu cliente

    }

}



//Criando fun��o main
int main(){
    menuPrincipal(); //Chama a fun��o menu principal

}
