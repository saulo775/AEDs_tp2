#include <stdio.h>
#include <stdlib.h>


/*====ALGORITIMO DE ARRANJO====*/
/*====ALGORITIMO DE ARRANJO====*/
/*====ALGORITIMO DE ARRANJO====*/
int arranjo(int N, int P)
{
    if (P>1)
        return N*arranjo(N-1,P-1);
    else
        return N;
}

int main() {
    //printf("Arranjo de 3,2 é %d\n",arranjo(3,2));
    int N;

    printf("Quantas cidades tera o seu VRP? ");
    scanf("%d", &N);

    int M[N][N];


    /*====PREENCHE MATRIZ DE DISTANCIAS====*/
    /*====PREENCHE MATRIZ DE DISTANCIAS====*/
    /*====PREENCHE MATRIZ DE DISTANCIAS====*/
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if(i == j){
                M[i][j] = 0;
            } else if(i > j) {
                int aux1 = i;
                int aux2 = j;
                M[i][j] = M[aux2][aux1];
            }else {
                printf("Distancia M[%d][%d] = ", i, j);
                scanf("%d", &M[i][j]);
            }
        }
    }

    /*====IMPRIME MATRIZ DE DISTANCIAS====*/
    /*====IMPRIME MATRIZ DE DISTANCIAS====*/
    /*====IMPRIME MATRIZ DE DISTANCIAS====*/
    for (int i = 0; i < N; ++i) {
        printf("\n");
        for (int j = 0; j < N; ++j) {
            printf("M[%d][%d] = %d  ", i, j, M[i][j]);
        }
    }

    
    int p[2][N];

    for (int j = 0; j < N; j++) {
        if (p[0][0]){
            p[0][0] = 0;
        }else{
            printf("\ndemanda cidade C[%d]:", j);
            scanf("%d", &p[0][j]);
        }
        p[1][j] = 0;
    }

    for (int i = 0; i < N; i++) {
        printf("DEMANDA C[%d] = %d\n", i, p[0][i]);
        printf("MARCADOR  C[%d]= %d\n", i, p[1][i]);
    }



    return 0;
}
