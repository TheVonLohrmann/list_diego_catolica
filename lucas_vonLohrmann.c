#include <stdio.h>
#include <stdlib.h>

void ex1(){

	int senha, severif, i;
	

	system("cls");
	
	printf("Cadastre sua senha: ");
	scanf("%d", &senha);
	
	system("cls");
	
	printf("insira sua senha: ");
	scanf(" %d", &severif);	
	
	if(senha !=severif) {
	
		
		do{
			
		for(i=1;i<=2;i++){
			
				 if(i<4){
					
					printf("acesso negado!");
					printf("\ninsira sua senha: ");
					scanf("%d", &severif);	
					
						}	
					
				} if(i==3){
					
					printf("acesso negado!");
					printf("\nCartao Bloqueado!\n ");	
					}
					break;
			
			}while(senha != severif && i<=3 );
	
		} else{
			
			system("cls");
			
			printf("Acesso Autorizado!\n");
			
				}		
				
			system("PAUSE");
			system("cls");
		
} 

void ex2(){
	
	int a, b, c, d, e, count=0;
	
	system("cls");
	
	printf("Digite numeros inteiros que preferir: ");
	printf("\n");
	scanf(" %d",&a);	
	scanf(" %d",&b);
	scanf(" %d",&c);
	scanf(" %d",&d);
	scanf("%d",&e);
	
     if(a<0){
		
	  	 count = count + 1;
		  
			}if(b<0){
			
	   	   	count = count + 1;	
			 	
			 	}if(c<0){
			 	
				 count = count + 1;
			 	
					 }if(d<0){
						 	
						count = count + 1;
					 	
						 }if(e<0){
							
							count =	count + 1;
							} 
		if(count!=0){
			
			printf("Voce digitou %d numeros negativos\n", count);
			
		}else{
			
			printf("Voce digitou 0 numeros negativos\n");
			
		}
		system("PAUSE");
		system("cls");
		
			
}	

void ex3(){
	
system ("cls");
	
float sl ,nh = 0 ,ssl = 0,masl = 0,sl100 = 0,pcnt = 0; 

int nf,tf = 0, mdf = 0;  

do

{  

printf("Informe o salario: R$ "); 

scanf("%f",&sl);

 

nh += 1;

ssl = sl + ssl;
 

if ( masl < sl ) 

{  

masl = sl; 

}  

if (sl <= 100)

{  

sl100 = sl;

pcnt = (sl100 * 100) / nh; 

}  



printf("Informe a quantidade de filhos: ");

scanf("%d",&nf); 

tf = nf + tf;

mdf = tf / nh;

}  

while ( sl >0 ); 

printf("\n\nA media dos salarios e de : R$ %.2f\n",ssl / nh); 

printf("\nMedia do numero de filhos: %d\n",mdf); 

printf("\nO maior salario e': R$ %.2f \n", masl);

printf("\nPercentual de pessoas com salarios ate R$100.00: %.0f %%\n", pcnt); 

   	system("PAUSE");
	system("cls");
	
	
	}	
	
void ex4(){

	float xpares=0;
	int  n=0, q=0, x= 0, qp=0;
	
	system("cls");
	
	
	do{
	
	
		printf("Quantos numeros deseja digitar? ");
		printf("\n");
		scanf("%d",&q);
	
	}while(q<=0);
	
	
	for(n=1;n <= q;n++){
			
		printf("digite um numero: ");
		scanf("%d",&x);
			
			if(x==0){
				
			printf("Fim da operacao!\n");
			
			break;
					}	
				
			if(x%2==0){
			
				qp = qp + 1;
				xpares += x;
				
			}
			

					
		} 
																		
			printf("A media dos numeros pares digitados e %.2f \n", xpares / qp );				
				
 
		

		system("PAUSE");
		system("cls");
}
	
void ex5(){
	
 int x,y,z;
 
 system("cls");
 
 printf("insira 3 numeros inteiros: ");
 printf("\n");
 scanf("%d",&x);
 scanf("%d",&y);
 scanf("%d",&z);
 
 printf("\n=== Numeros em ordem inversa ===\n");

 printf("\n%d",z);
 printf("\n%d",y);
 printf("\n%d\n",x);
 
 system("PAUSE");
 system("cls");
}

void ex6(){
	
	int n, q = 10, countI = 0, countP = 0, i; 
	
	system ("cls");
	
	printf("Digite 10 numeros a sua escolha: \n");
	
	do{
		
	for(i=1;i <= q;i++){
			
		printf("Insira um numero: \n");
		scanf("%d",&n);
			
				
			if(n%2==0){
			
				countP = countP + 1;
				
				
			} else{
				
			countI = countI + 1;
				
					}	
				
				}
		
			}while(i<=10);
	
	printf("\nForam digitados %d numeros pares e %d numeros impares\n", countP, countI);
		
		system("PAUSE");
		system("cls");
}	

int main(){
	
	int op=0;
	
	
	do	{	
		
			
			printf("\n"); 
		    printf("|______________________________________________________________________| \n");
		    printf("|                         Lista de exercicios                          | \n");
		    printf("|                        qual gostaria de ver?                         | \n");
		    printf("|______________________________________________________________________| \n\n");
			printf("| Exercicio 1                1 | \n");
		    printf("| Exercicio 2                2 | \n");
		    printf("| Exercicio 3                3 | \n");
		    printf("| Exercicio 4                4 | \n");
		    printf("| Exercicio 5                5 | \n");
		    printf("| Exercicio 6                6 | \n");	
			printf("| Sair do programa           0 | \n\n");	
			printf(" Opcao : ");
		    scanf("%d", &op);
		    
	switch(op) {
		
		case 0:
	
		printf("Obrigador por olhar os exercicios!\n");
		break;
		
		case 1:
		ex1();	
	    break;
	    	
	    case 2:
		ex2();	
	    break;	
	    
	    case 3:
		ex3();	
	    break;	
	    
	    case 4:
		ex4();	
	    break;	
	    
	    case 5:
		ex5();	
	    break;
	    
		case 6:
		ex6();	
	    break;
	    
				}
				
		}while (op!=0);
		system("PAUSE");	
	return 0;
}
