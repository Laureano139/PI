#include <stdio.h>

//ex2
void swapM (int *x, int *y) {

    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

}

int main () {

    int *x, *y;

    printf("Introduz o valor de x:\n");
    scanf("%d",&x);

    printf("Introduz o valor de y:\n");
    scanf("%d",&y);

    swapM (&x, &y);

    printf ("x=%d ; y=%d", x, y);

}

//ex3

void swap (int v[], int i, int j) {

    int temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;

}

int main () {

    int v[8] = {1,2,3,4,5,6,7,8};
    int i, j;

    printf("Introduza as posições dos números que quer mudar:\n");
    printf("Posição 1:\n");
    scanf("%d", &i);
    printf("Posição 2:\n");
    scanf("%d",&j);

    swap (v, &i, &j);

    int length = sizeof(v)/sizeof(v[0]);
    
    printf ("O array é agora:\n");
    for (i=0; i<length; i++) {
      printf ("%d", v[i]);
    }
}

//ex4

int soma (int v[], int N) {

    int sum = 0;

    for(i = 0; i < N; i++) {
        sum = sum + v[i]; // sum += v[i]
    }
    printf ("soma = %d", sum);
}

int main () {

    int v[100], N, i;

    printf ("Introduz o tamanho do array (entre 1 e 100):\n");
    scanf ("%d", &N);

    printf ("Introduz os elementos do array:\n");
    for (i=0; i<N; i++) {
        scanf("%d", &v[i]);
    }

    sum (v, N);
}

