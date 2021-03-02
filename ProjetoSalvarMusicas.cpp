/*
	Name: AV2 parte da prova
	Copyright: 
	Author: 
	Date: 31/05/20 22:36
	Description: 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

void Tela01();
void Tela02();
void Tela04();
void Tela03();
void AbrirTelas();
void imprimirNome();

typedef struct{//armazenar dados em uma estrutura;
	char musicas[20];
	int ano;
	int faixa;
	char nome[20];
	char album[20];
	char artista[20];
	char genero[20];
}Musicas;

Musicas Music[30]; 

//funcoes cadastrais
void cadastrarNome(){
	//variavel local
	int n,i; 
	char nome[30];
	
	while(n!=2){
		
		printf("Informe o nome: \n");
		scanf("%s",nome);
		printf("Deseja continuar 1-sim, 2-nao?: \n");
		scanf("%d",&n);	
		
		if (n==2){
			system("cls");
			printf("Fechando cadastro\n");
		}
		
		strcpy(Music[i].nome,nome);
		i++;
		
	}
	
	printf("Nome cadastrado com sucesso!\n");
	//printf("Nome: %s \n",Music[0].nome);
	//printf("Nome: %s \n",Music[1].nome);
	Tela01();//Abrindo a tela de cadastro principal
}

void cadastrarFaixa(){
	//variavel local
	int n,i; 
	int faixa01;
	
	while(n!=2){
		
		printf("Informe o faixa: \n");
		scanf("%d",&faixa01);
		printf("Deseja continuar 1-sim, 2-nao?: \n");
		scanf("%d",&n);	
		
		if (n==2){
			system("cls");
			printf("Fechando cadastro\n");
		}
		
		Music[i].faixa = faixa01;
		i++;
		
	}
	
	printf("Faixa cadastrado com sucesso!\n");
	printf("faixa: %d \n",Music[0].faixa);
	printf("faixa: %d \n",Music[1].faixa);
	Tela01();//Abrindo a tela de cadastro principal
}

void cadastrarAno(){
	//variavel local
	int n,i; 
	int ano01;
	
	while(n!=2){
		
		printf("Informe o ano: \n");
		scanf("%d",&ano01);
		printf("Deseja continuar 1-sim, 2-nao?: \n");
		scanf("%d",&n);	
		
		if (n==2){
			system("cls");
			printf("Fechando cadastro\n");
		}
		
		Music[i].ano = ano01;
		i++;
		
	}
	
	printf("Ano cadastrado com sucesso!\n");
	Tela01();//Abrindo a tela de cadastro principal
}

void cadastrarAlbum(){
	//variavel local
	int n,i; 
	char album01[20];
	
	while(n!=2){
		
		printf("Informe o Album: \n");
		scanf("%s",album01);
		printf("Deseja continuar 1-sim, 2-nao?: \n");
		scanf("%d",&n);	
		
		if (n==2){
			system("cls");
			printf("Fechando cadastro\n");
		}
		
		strcpy(Music[i].album,album01);
		i++;
		
	}
	
	Tela01();//Abrindo a tela de cadastro principal
}

void cadastrarArtista(){
	//variavel local
	int n,i; 
	char artista01[20];
	
	while(n!=2){
		
		printf("Informe Artista: \n");
		scanf("%s",artista01);
		printf("Deseja continuar 1-sim, 2-nao?: \n");
		scanf("%d",&n);	
		
		if (n==2){
			system("cls");
			printf("Fechando cadastro\n");
		}
		
		strcpy(Music[i].artista,artista01);
		i++;
		
	}
	//printf("Artista: %s \n",Music[0].artista);
	Tela01();//Abrindo a tela de cadastro principal
}

void cadastrarGenero(){
	//variavel local
	int n,i; 
	char genero01[20];
	
	while(n!=2){
		
		printf("Informe Genero: \n");
		scanf("%s",genero01);
		printf("Deseja continuar 1-sim, 2-nao?: \n");
		scanf("%d",&n);	
		
		if (n==2){
			system("cls");
			printf("Fechando cadastro\n");
		}
		
		strcpy(Music[i].genero,genero01);
		i++;
		
	}
	printf("Genero: %s \n",Music[0].genero);
	Tela01();//Abrindo a tela de cadastro principal
}

//fim das funcoes cadastrais


//funcoes de impressão

void imprimirNome(){
	for(int i=0;i<2;i++){
		printf("Nome: %s\n",Music[i].nome);
	}
	Tela02();
}

void imprimirFaixa(){
	for(int i=0;i<2;i++){
		printf("Faixa: %d\n",Music[i].faixa);
	}
	Tela02();
}

void imprimirAno(){
	for(int i=0;i<2;i++){
		printf("Ano: %d\n",Music[i].ano);
	}
	Tela02();
}

void imprimirAlbum(){
	for(int i=0;i<2;i++){
		printf("Album: %s\n",Music[i].album);
	}
	Tela02();
}

void imprimirArtista(){
	for(int i=0;i<2;i++){
		printf("Artista: %s\n",Music[i].artista);
	}
	Tela02();
}

void imprimirGenero(){
	for(int i=0;i<2;i++){
		printf("Gênero: %s\n",Music[i].genero);
	}
	Tela02();
}

//fim das funcoes de impressao

//funcoes de manuntencao-Alterar

void ManuNome(){
	char nome01[20];
	char nome02[20];
	for(int i=0;i<2;i++){
		printf("Nomes cadastrados: %s\n",Music[i].nome);
	}
	printf("Informe novo nome para alterar: \n");
	scanf("%s",nome01);
	printf("Digita o nome a ser trocado: \n");
	scanf("%s",nome02);
	if (strcmp(Music[0].nome,nome02)==0){
		strcpy(Music[0].nome,nome01);
	}
	printf("Nome alterado com sucesso!\n");
	printf("Novo nome: %s\n",Music[0].nome);
	Tela04();
	
}
//-Consultar
void ConsultarNome(){
	for(int i=0;i<2;i++){
		printf("Posicão: %d, Nome: %s \n",i,Music[i].nome);
	}
}

//fim da manuntencao

int op;
void TelaPrincipal(){
	printf("---------------------------\n");
	printf(".....Cadastro de músicas...\n");
	printf("1-Cadastro......2-Impressão\n");
	printf("3-Manunteção....4-Sair.....\n");
	printf("Informe a opção desejada...\n");
	scanf("%d",&op);
	
	while(op != 1 && op != 2 && op != 3 && op != 4){
		printf("Informe uma opção válida!\n");
		scanf("%d",&op);
	}	
	printf("---------------------------\n");
	system("cls");
	AbrirTelas();//analisa a opcao escolhida;
}

void Tela01(){
	int op1;
	
	printf("------------------------------\n");
	printf("......Cadastrar Músicas.......\n");
	printf("1-Nome..............2-Faixa...\n");
	printf("3-Ano...............4-Album...\n");
	printf("5-Artista...........6-gênero..\n");
	printf("Informe 0 para voltar.........\n");
	scanf("%d",&op1);
	switch (op1){
		case 1:{
			cadastrarNome();
			break;
		}
		case 2:{
			cadastrarFaixa();
			break;
		}
		case 3:{
			cadastrarAno();
			break;
		}
		case 4:{
			cadastrarAlbum();
			break;
		}
		case 5:{
			cadastrarArtista();
			break;
		}
		case 6:{
			cadastrarGenero();
			break;
		}
		case 0:{
			TelaPrincipal();
			break;
		}
	}	
	printf("----------------------------\n");
}

void Tela02(){
	int op2;
	
	printf("------------------------------\n");
	printf("...........Impressaõ..........\n");
	printf("1-Nome..............2-Faixa...\n");
	printf("3-Ano...............4-Album...\n");
	printf("5-Artista............6-gênero.\n");
	printf("Informe 0 para voltar.........\n");
	scanf("%d",&op2);
	switch (op2){
		case 1:{
			imprimirNome();
			break;
		}
		case 2:{
			imprimirFaixa();
			break;
		}
		case 3:{
			imprimirAno();
			break;
		}
		case 4:{
			imprimirAlbum();
			break;
		}
		case 5:{
			imprimirArtista();
			break;
		}
		case 6:{
			imprimirGenero();
			break;
		}
		case 0:{
			TelaPrincipal();
			break;
		}
	}	
	printf("----------------------------\n");
}

int op3;
void Tela03(){
	printf("------------------------------\n");
	printf("...........Manuntenção........\n");
	printf("1-Nome..............2-Faixa...\n");
	printf("3-Ano...............4-Album...\n");
	printf("5-Artista............6-gênero.\n");
	printf("....Informe 0 para voltar.....\n");
	scanf("%d",&op3);
	
	switch (op3){
		case 1:{
			Tela04();
			//ManuNome();
			break;
		}
		case 2:{
			//ManuFaixa();
			break;
		}
		case 3:{
			//ManuAno();
			break;
		}
		case 4:{
			//ManuAlbum();
			break;
		}
		case 5:{
			//ManuArtista();
			break;
		}
		case 6:{
			//ManuGenero();
			break;
		}
		case 0:{
			TelaPrincipal();
			break;
		}
	}
}

void Tela04(){
	int op4;
	printf("----------Alterações------\n");
	printf("....1-Alterar...2-Remover.\n");
	printf("....3-Consultar.4-sair....\n");
	printf(".......0-Voltar...........\n");
	scanf("%d",&op4);
	printf("--------------------------\n");
	
	switch (op4){
		case 1:{
			if(op3 == 1){
				ManuNome();	
			}else if(op3 == 2){
				//ManuFaixa();
			}else if(op3 == 3){
				//ManuAno();
			}else if(op3 == 4){
				//ManuAlbum();
			}else if(op3 == 5){
				//ManuArtista();
			}else if(op3 == 6){
				//ManuGenero();
			}
			break;
		}
		case 3:{
			if(op3 == 1){
				ConsultarNome();	
			}else if(op3 == 2){
				//ManuFaixa();
			}else if(op3 == 3){
				//ManuAno();
			}else if(op3 == 4){
				//ManuAlbum();
			}else if(op3 == 5){
				//ManuArtista();
			}else if(op3 == 6){
				//ManuGenero();
			}
			break;
		}
		case 0:{
			Tela03();
			break;
		}
	}
}

void AbrirTelas(){
	switch (op){
		case 1:{
			Tela01();
			break;
		}
		case 2:{
			Tela02();
			break;
		}
		case 3:{
			Tela03();
			break;
		}
	}
}

int main(){
	setlocale(LC_ALL,"portuguese");
	Tela01();
}

