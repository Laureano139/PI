#include <stdio.h>

void ex1 () {

    int linhas, colunas;

    for (linhas=1; linhas<=5; linhas++) {
        for (colunas=1; colunas<=5; colunas++) {
            printf ("#");
        }
     printf("\n");
    }
}

void ex2 () {

    int linha, coluna;

    for (linha = 1; linha <= 5; linha++) {
        for (coluna = 1; coluna <= 5; coluna++){
           if (linha%2 == 0 && coluna%2 == 0 || linha%2 == 1 && coluna%2 == 1) { //posições pares nas linhas pares
               printf ("#");                                                     //posições ímpares nas linhas ímpares
           }
           else printf ("_");
        }
        printf("\n");
    }
    printf("\n\n");
}

void ex3vertical () {

    int i, j, N = 5, colunas = 1;

    for (i = 1; i < N*2; i++) {
        for (j = 1; j <= colunas; j++) {
            printf ("#");
        }
        if (i < N) colunas ++;
        else colunas--;
        printf("\n");
    }
}

void ex3horizontal () {
    
    int i, j, linhas = 5;

    for (i = 1; i <= linhas; i++){
        for (j = i; j < linhas; j++){
            printf(" ");
        }
        for (j = 1; j <= (2*i-1); j++){
            printf ("#");
        }
        printf ("\n");
    }
}

int ex4 (int N){
	int i, j, c = 0;
	for(i = 0; i <= N; i++){
		for(j = 0; j < N+i; j++){
			if(j< N - i)
				printf (" ");
			else{
				printf("#");
				c++;
			}
		}
		printf("\n");
	}
	for(i; i >= 0; i--){
		for(j = 0; j < N+i; j++){
			if( j = N)
				printf ("");
			else
				printf("#");
                c++;
		}
		printf("\n");
	}

	printf("Foram utilizados %d caracteres '#'",c);
	printf("\n\n");
}

int main () {

    int N;

    ex1();
    ex2();
    ex3vertical();
    ex3horizontal();
    printf("Introduz o raio do círculo:\n");
    scanf("%d", &N);
    ex4(N);
    return 0;
}