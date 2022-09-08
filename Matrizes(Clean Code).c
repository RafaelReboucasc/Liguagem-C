#include<stdio.h>
#define N 5


int main(){
	
    carregar_valores();
    imprimir_matriz();
    imprimir_diagonal_principal();
    imprimir_diagonal_secundaria();
    imprimir_triangular_principal_inferior();
    imprimir_triangular_principal_superior();
    imprimir_triangular_secundaria_inferior();
    imprimir_triangular_secundaria_superior();
    
    return 0;
}

int carregar_valores(){
    //carregando valores na matriz
    int matriz[N][N];
	int contador = 1;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			matriz[i][j] = contador++;
		}
	}
}

int imprimir_matriz(){
    //exibir a matriz
    int matriz[N][N];
    printf("IMPRIMIR MATRIZ:\n");
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
}

int imprimir_diagonal_principal(){
    //imprimir a diagonal principal da matriz
    int matriz[N][N];
	printf("DIAGONAL PRINCIPAL:\n");
	for(int i=0; i < N; i++){
		for(int j=0; j < N; j++){
			if(i==j)
				printf("%d\t", matriz[i][j]);
			else
				printf("\t");
		}
		printf("\n");
		
	}
}

int imprimir_diagonal_secundaria(){
    //imprimir a diagonal secundaria
    int matriz[N][N];
	printf("DIAGONAL SECUNDARIA:\n");
	for(int i =0; i < N; i++){
		for(int j=0; j < N; j++){
			if(i+j == N-1)
				printf("%d\t", matriz[i][j]);
			else
				printf("\t");
		}
		printf("\n");
	}
}

int imprimir_triangular_principal_inferior(){
    //imprimir a matriz triangular inferior
    int matriz[N][N];
	printf("MATRIZ TRIANGULAR INFERIOR:\n");
	for (int i=0; i < N; i++){
		for (int j=0; j < N; j++){
			if(i>j)
				printf("%d\t", matriz[i][j]);
			else
				printf("\t");
		}
		printf("\n");
	}
}

int imprimir_triangular_principal_superior(){
    //imprimir a matriz triangular superior
    int matriz[N][N];
	printf("MATRIZ TRIANGULAR SUPERIOR:\n");
	for (int i=0; i < N; i++){
		for (int j=0; j < N; j++){
			if(i<j)
				printf("%d\t", matriz[i][j]);
			else
				printf("\t");
		}
		printf("\n");
	}
}

int imprimir_triangular_secundaria_inferior(){
    //Triangular secundaria inferior
    int matriz[N][N];
    printf("TRIANGULAR SECUNDARIA INFERIOR: \n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(j+i > 4){
                printf("%d\t", matriz[i][j]);
                }
            else
                printf("\t");
            }
        printf("\n");
    }
}

int imprimir_triangular_secundaria_superior(){
    //Triangular secundaria superior
    int matriz[N][N];
    printf("TRIANGULAR SECUNDARIA SUPERIOR: \n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(j+i < 4){
                printf("%d\t", matriz[i][j]);
                }
            else
                printf("\t");
            }
        printf("\n");
    }
}
