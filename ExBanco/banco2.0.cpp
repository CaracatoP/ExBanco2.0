#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float saldo = 300;
float saque, deposito;

void sacar(float saque) {
    if (saldo >= saque && saque > 0) {
        saldo -= saque;
        printf("Saque de %.2f realizado com sucesso!\n", saque);
        printf("Seu saldo atual e %.2f\n", saldo);
        Sleep(2500);
        system("cls");
    } 
    else if (saque > saldo) {
        printf("Saldo insuficiente para realizar o saque!\n");
        Sleep(1000);
        system("cls");
    } 
    else {
        printf("Digite um valor positivo maior que 0!\n");
        Sleep(1000);
        system("cls");
    }
}

void depositar(float deposito) {
    if (deposito > 0) {
        saldo += deposito;
        printf("Deposito de %.2f realizado com sucesso!\n", deposito);
        printf("Seu saldo atual e de %.2f\n", saldo);
        Sleep(2500);
        system("cls");
    }
    else if (deposito == 0) {
        printf("Voce nao pode depositar 0 reais\n");
        Sleep(2500);
        system("cls");
    } 
    else {
        printf("Digite um valor positivo maior que 0!\n");
        Sleep(2500);
        system("cls");
    }
}

int menu(){
    int i;
    printf("===================================BANCO===================================\n");
    printf("Seja bem-vindo ao seu banco! Como podemos ajudar hoje?\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Realizar saque\n");
    printf("3 - Realizar deposito\n");
    printf("0 - Sair\n");
    printf("Escolha: ");
    scanf("%d", &i);
    system("cls");
    
    printf("Carregando");
    
	for (int j = 0; j < 3; j++) {
    	printf(".");
   		Sleep(500);
	}
	
	printf("\n");

    return i;
}

int main() {
    int i = 5, e;

    while (i != 0) {
		
		i = menu();

        switch (i) {
            case 1:
                printf("Consulta de saldo!\n");
                printf("Seu saldo e %.2f\n", saldo);
                Sleep(2500);
                system("cls");
                break;

            case 2:
                printf("Qual valor deseja sacar?\nValor: ");
                scanf("%f", &saque);
                sacar(saque);
                break; 

            case 3:
                printf("Qual valor deseja depositar?\nValor: ");
                scanf("%f", &deposito);
                depositar(deposito);
                break;

            case 0:
                printf("Agradecemos a preferencia! Tenha um otimo dia!\n");
                break;
        }
    }
    
    return 0;
}
