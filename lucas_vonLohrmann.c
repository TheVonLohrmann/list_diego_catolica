#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "ex3.h"

void ex1(){

	int senha, severif, i;
	

	system("cls");
	printf("|_______________________________________________________|\n");
	printf("|           sistema de compras do lucas                 |\n");
	printf("|_______________________________________________________|\n");
	printf("|Cadastre sua senha: ");
	scanf("%d", &senha);
	system("cls");
	printf("|_______________________________________________________|\n");
	printf("|digite sua senha: ");
	scanf(" %d", &severif);	
	
	if(senha !=severif) {
	
		
		do{
			
		for(i=1;i<=2;i++){
			
				 if(i<4){
					printf("|_______________________________________________________|\n");
					printf("|                   acesso negado!                      |\n");
					printf("|_______________________________________________________|\n");
					printf("|digite sua senha: ");
					scanf("%d", &severif);	
					
						}	
					
				} if(i==3){
					printf("|_______________________________________________________|\n");
					printf("|                   acesso negado!                      |\n");
					printf("|                 Cartao Bloqueado!                     |\n");
					printf("|_______________________________________________________|\n");	
					}
					break;
			
			}while(senha != severif && i<=3 );
	
		} else{
			
			system("cls");
			printf("|_______________________________________________________|\n");
			printf("|                  Acesso Autorizado!                   |\n");
			printf("|                     Boa compra!                       |\n");
			printf("|_______________________________________________________|\n");
				}		
				
			system("PAUSE");
			system("cls");
		
} 

void ex2(){
	
	int p1, p2, p3, p4, p5, crono=0;
	
	system("cls");
	printf("|_______________________________________________________|\n");
	printf("|        Digite numeros inteiros que preferir           |\n");
	printf("|informe os numeros:\n");
	scanf("%d",&p1);	
	scanf("%d",&p2);
	scanf("%d",&p3);
	scanf("%d",&p4);
	scanf("%d",&p5);
	
     if(p1<0){
	  	 crono = crono + 1;
			}if(p2<0){
	   	   	crono = crono + 1;	
			 	}if(p3<0){
				 crono = crono + 1;
					 }if(p4<0){	
						crono = crono + 1;
						 }if(p5<0){	
							crono =	crono + 1;
							} 
		if(crono!=0){
			printf("|_______________________________________________________|\n");
			printf("|           Voce digitou %d numeros negativos           |\n", crono);
			printf("|_______________________________________________________|\n");
		}else{
			printf("|_______________________________________________________|\n");
			printf("|            Voce digitou 0 numeros negativos           |\n");
			printf("|_______________________________________________________|\n");
		}
		system("PAUSE");
		system("cls");
		
			
}	


void ex3(struct infofami *pt){
	
system ("cls");
	int contfami, i=0 ;
	
	do{
		printf("|_______________________________________________________| \n");
		printf("|Informacao da %d familia:\n", i+1);
		printf("|Digite o salario da familia:");
		fflush(stdin);
	    getch((pt[i]).salario,stdin);
        printf("|Digite o numero de filhos da familia:");
        fflush(stdin);
        getch((pt[i]).crian);
        i++;
        printf("\n");
        }while((pt[i]).salario<0);
        
        contfami = i;
        float salarioMed=0;
        int crianMed=0;
        float maiorsalario=0;
        int salmenorq100=0;
        
        for(i=0;i<contfami;i++){
        	salarioMed += pt[i].salario;
        	crianMed += pt[i].crian;
        	if(pt[i].salario > maiorsalario){
        	maiorsalario = pt[i].salario;	
			}
			if(pt[i].salario<=100){
				salmenorq100++;
			}
		}
		printf("|_______________________________________________________| \n");
		printf("|media do salario da populacao: %.2f\n", salarioMed / (float)contfami);
		printf("|media do numero de filhos: %.2f\n", crianMed / (float)contfami);
		printf("|maior salario: %.2f\n", maiorsalario);
		printf("|percentual de pessoas com salario ate R$ 100,00: %.2f\n", (float)salmenorq100 / (float)contfami * 100 );
		system("PAUSE");
		system("cls");
	}	
	
void ex4(){

	float pares=0;
	int  n=0, quant=0, numero= 0, quantpar=0;
	
	system("cls");
	
	
	do{
		printf("|_______________________________________________________|\n");
		printf("|          Quantos numeros deseja digitar?              |\n");
		scanf("%d",&quant);
	}while(quant<=0);
	
	
	for(n=1;n <= quant;n++){
			
		printf("|Digite um numero: ");
		scanf("%d",&numero);
			
			if(numero==0){
			printf("|_______________________________________________________|\n");
			printf("|                   Fim da operacao!                    |\n");	
			printf("|_______________________________________________________|\n");
			break;
					}	
			if(numero%2==0){
				quantpar = quantpar + 1;
				pares += numero;
			}			
		} 	
			printf("|_______________________________________________________|\n");														
			printf("|       A media dos numeros pares digitados e %.2f      |\n", pares / quantpar );				
			printf("|_______________________________________________________|\n");	
		system("PAUSE");
		system("cls");
}
	
void ex5(){
	
 int a,b,c;
 
 system("cls");

 printf("|__________________________________________|\n");
 printf("|Digite 3 numeros inteiros: \n");
 scanf("%d",&a);
 scanf("%d",&b);
 scanf("%d",&c);
 
 printf("|_________Numeros em ordem inversa_________|\n");

 printf("|%d\n",c);
 printf("|%d\n",b);
 printf("|%d\n",a);
 
 system("PAUSE");
 system("cls");
}

void ex6(){
	
	int numero, quant = 10, countI = 0, countP = 0, i; 
	
	system ("cls");
	printf("|_______________________________________________________| \n");
	printf("|Digite 10 numeros a sua escolha: \n");
	
	do{
		
	for(i=1;i <= quant;i++){
			
		printf("|Digite um numero: \n");
		scanf("%d",&numero);
			if(numero%2==0){
				countP = countP + 1;	
			} else{	
			countI = countI + 1;
					}	
				}
			}while(i<=10);
	printf("|_______________________________________________________|\n");
	printf("| Foram digitados %d numeros pares e %d numeros impares |\n", countP, countI);
	printf("|_______________________________________________________|\n");	
		system("PAUSE");
		system("cls");
}	

int main(){
	
	struct infofami familias[100];
	int op=0;
	char p1 ='F', p2 ='F', p3 ='F', p4 ='F', p5 ='F', p6 ='F';
	//F = falta visto  V = visto
	do	{	
		
			
			printf("\n"); 
		    printf("|______________________________________________________________________|\n");
		    printf("|                         Lista de exercicios                          |\n");
		    printf("|                        qual gostaria de ver?                         |\n");
		    printf("|______________________________________________________________________|\n");
			printf("| Exercicio 1                1 |[ %c ] \n", p1);
		    printf("| Exercicio 2                2 |[ %c ] \n", p2);
		    printf("| Exercicio 3                3 |[ %c ] \n", p3); //por algum motivo ele esta quebrando
		    printf("| Exercicio 4                4 |[ %c ] \n", p4);
		    printf("| Exercicio 5                5 |[ %c ] \n", p5);
		    printf("| Exercicio 6                6 |[ %c ] \n", p6);	
			printf("| Sair do programa           0 | \n\n");	
			printf(" Opcao : ");
		    scanf("%d", &op);
		    
	switch(op) {
		
		case 0:
	    system("cls");
	    printf("|______________________________________________________________________|\n");
		printf("|                  Obrigador por olhar os exercicios!                  |\n");
		printf("|______________________________________________________________________|\n");
		break;
		
		case 1:
		ex1();
		p1 = 'V';	
	    break;
	    	
	    case 2:
		ex2();
		p2 = 'V';	
	    break;	
	    
	    case 3:
		ex3(familias);
		p3 = 'V';	
	    break;	
	    
	    case 4:
		ex4();
		p4 = 'V';	
	    break;	
	    
	    case 5:
		ex5();
		p5 = 'V';	
	    break;
	    
		case 6:
		ex6();
		p6 = 'V';	
	    break;
	    
				}
				
		}while (op!=0);
		system("PAUSE");	
	return 0;
}
