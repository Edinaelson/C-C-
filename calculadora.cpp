/*
	Name: Calculador Simples
	Copyright: 
	Author: Edinaelson Santos
	Date: 08/04/20 08:37
	Description: o algoritmo deverá receber dois numeros e efetuar a operacao selecionada pelo usuario e imprimir o resultado.
	
 
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
	int n1,n2,res,op;
	
void Telaprincipal(){
	printf("============================|\n");
	printf("|        calculadora        |\n");
	printf("|---------------------------|\n");
	printf("|   1-soma  |   2-subtrair  |\n");
	printf("|3-multiplicacao|4-divisao  |\n");
	printf("|===========================|\n");
	printf("|           5-sair          |\n");
	printf("|===========================|\n");
	printf("informe operação desejada\n");
	scanf("%d",&op);
}	

void Entradas(){
	printf("Informe o primeiro numero \n");
	scanf("%d",&n1);
	printf("Informe o segundo numero \n");
	scanf("%d",&n2);
}

void Processamento(){
	if(op==1){
		res = n1 + n2;
	}
	if(op==2){
		res = n1 - n2;
	}
	if(op==3){
		res = n1 * n2;
	}
	if(op==4){
		res = n1/n2;
	}
	if (op ==5){
		printf("saindo...");
	}
	
}

void Saida(){
	printf("O resultado da operacao é: %d \n",res);
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	do{
		Telaprincipal();
		Entradas();
		Processamento();
		Saida();
	}while(op!=5);
}
