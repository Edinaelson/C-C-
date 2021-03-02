/*
	Name: Estatística do COVID-19
	Author: Edinaelson santos
	Date: 15/04/20 08:49
	Description: O algoritmo deverá calcular os indicadores a seguir:
	 - Total de casos confirmados que sejam mulheres...ok
	 - Total de casos descartados que sejam mulheres...ok
	 - Total de casos confirmados que sejam Homens....0k
	 - Total de casos descartados que sejam Homens...0k
	 - Total de casos com obitos que sejam mulheres
	 - Total de casos com obitos que sejam Homens
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int idade, i;
char sexo, caso, obito;
int CasosConfMulher,CasosDescMulher,CasosConfHomem,CasosDescHomem,CasosObMulher,CasosObHomem,TotObito;
int f1,f2,f3,f4,f5;
int main(){
	
	setlocale(LC_ALL,"portuguese");  
   printf("Preencha as seguintes informações: Idade:  Sexo[F ou M] Situação[S ou N] Obito[S ou N]\n");	
   for(i=0; i<1; i++){ //inicio do loop
	scanf("%d %c %c %c", &idade, &sexo, &caso, &obito);
    if((sexo=='F' || sexo == 'f')&&(caso=='S' || caso == 's')){ //Total de casos confirmados que sejam mulheres
	   CasosConfMulher=CasosConfMulher+1;
	}
	if((sexo=='F' || sexo =='f')&&(caso=='N' || caso == 'n')){//Total de casos descartados que sejam mulheres
	   CasosDescMulher=CasosDescMulher+1;
	}
	if((sexo=='M' || sexo == 'm')&&(caso=='S' || caso == 's')){//Total de casos confirmados que sejam Homens
	   CasosConfHomem=CasosConfHomem+1;
	} 
	if((sexo=='M' || sexo == 'm')&&(caso=='N' || caso == 'n')){//Total de casos descartados que sejam Homens
	   CasosDescHomem=CasosDescHomem+1;
	} 
	if((sexo == 'F' || sexo == 'f')&&(caso=='S' || caso == 's')){//Total de obitos que sejam Mulheres
		CasosObMulher = CasosObMulher + 1;
		TotObito = TotObito + 1;
	}
	if((sexo == 'M' || sexo == 'm')&&(caso=='S' || caso == 's')){//Total de obitos que sejam Homens 
		CasosObHomem = CasosObHomem + 1;
		TotObito = TotObito + 1;
	}
	//faixa etaria
	if(idade >=0 && idade <=20){
		f1 = f1 + 1;
	}
	if(idade >=21 && idade <= 40){
		f2 = f2 + 1;
	}
	if(idade >= 41 && idade <=60){
		f3 = f3 + 1;
	}
	if(idade >= 61 && idade <=80){
		f4 = f4 + 1;
	}
	if(idade >= 81 && idade <= 100){
		f5 = f5 + 1;
	}
	//fim faixa etaria
	
	
   }//fim do loop
  printf("|===========================================================================================|\n");
  printf("|               ESTATISTICA DE OCORRENCIAS DE CASOS DOS COVID-19                            |\n");
  printf("|===========================================================================================|\n");
  printf("|   FAIXA ETÁRIA | Total   |   SEXO         |   CONFIRMADOS    | DESCARTADOS     |  OBITOS  |\n"); 
  printf("|===========================================================================================|\n");
  printf("|   De 0 a 20        %d          Mulher             %d                  %d                %d\n",f1,CasosConfMulher,CasosDescMulher,CasosObMulher);
  printf("|   De 21 a 40       %d          Homem              %d                  %d                %d\n",f2,CasosConfHomem,CasosDescHomem,CasosObHomem);
  printf("|   De 41 a 60       %d                                                                     \n",f3);
  printf("|   De 61 a 80       %d                                                                     \n",f4);
  printf("|   De 81 a 100      %d                                                                     \n",f5);
  printf("|                                                                                           \n");
  printf("|........................................................................===================\n");
  printf("|                                                                        Total geral: %d    \n",TotObito);
  printf("|........................................................................===================\n");
  printf("|-------------------------------------------------------------------------------------------|\n");
  printf("|-------------------------------------------------------------------------------------------|\n");
  printf("|===========================================================================================|\n");
  
   printf("Total de casos confirmados que sejam Mulheres....:%d\n",CasosConfMulher);
   printf("Total de casos descartados que sejam Mulheres....:%d\n",CasosDescMulher);
   printf("Total de casos confirmados que sejam Homens......:%d\n",CasosConfHomem);
   printf("Total de casos descartados que sejam Homens......:%d\n",CasosDescHomem);
   printf("Total de casos de obitos que sejam Mulheres.......%d\n",CasosObMulher);  
   printf("Total de casos de obitos que sejam Homens.........%d\n",CasosObHomem);
}
