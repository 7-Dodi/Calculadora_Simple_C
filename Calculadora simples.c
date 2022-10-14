#include <stdio.h>
#include <math.h>
#include <string.h>
float soma (float num, float num2){
	return num+num2;	
}
float subtracao (float num, float num2){
	return num-num2;
}
float mult (float num, float num2){
	return num*num2;
}
float div (float num, float num2){
	return num/num2;
}
void calculo (float num, float num2, char op){
	switch(op){
		case '+': printf("\nO resultado da soma eh: %.2f", soma(num, num2));break;
		case '-': printf("\nO resultado da subtracao eh: %.2f", subtracao(num, num2));break;
		case '*': printf("\nO resultado da multiplicacao eh: %.2f", mult(num, num2));break;
		case '/': printf("\nO resultado da divisao eh: %.2f", div(num, num2));break;
	}
}
void main(){
	float num1, num2;
	char operator;
	printf("\n############## Calculadora Simples ################\n");
	int escolha;
	do{
		printf("\n\n-------------- MENU -----------------\n");
		printf("\n1-Para somar user: '+';\n2-Para subtrair user: '-';\n3-Para multiplicar user: '*'\n;4-Para dividir user: '/'.\n");
		printf("\nTudo certo?... Clique em qualquer tecla para continuar");
		getch();
		printf("\n\nInforme o primeiro valor: ");
		scanf("%f", & num1);
		fflush(stdin);
		printf("\nInforme o operador: ");
		scanf("%c", & operator);
		printf("\nInforme o segundo numero: ");
		scanf("%f", & num2);
		calculo (num1, num2, operator);
		printf("\n\nDESEJA CONTINUAR OS CALCULOS?\n1-Para realizar um novo codigo;\n0-Para encerrar");
		scanf("%d", & escolha);
	}while(escolha!=0);
	printf("\nPrograma sendo encerrado....");
}
