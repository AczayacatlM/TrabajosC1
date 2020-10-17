/*
	Autor: Aczayacatl Montoya
	e-mail: xchel.montoya.prog@gmail.com
	Fecha: 16 de octubre 2020
*/

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>

using namespace std;

int ** rellenarMatriz(int **mat, int n);
void sumarMatrices(int **mat1, int **mat2, int n);
void restarMatrices(int **mat1, int **mat2, int n);
void multiplicarMatrices(int **mat1, int **mat2, int n);
void dividirMatrices(int **mat1, int **mat2, int n);

int main(int argc, char *argv[]) {
	
	char tmnMat[4], op, rep[3];
	int **puntMat1 = NULL, **puntMat2 = NULL;
	
	srand((int)time(NULL));
	
	cout << "Bienvenido a la calculadora de operaciones con matrices \n\r" <<
		"Modo de uso: \n\r" << "Se le pedirá que escriba un número natural entre 1 y 100 que indique el tamaño de la matriz.\n\r" <<
		"Posteriormente, debe teclear \'+\', \'-\', \'*\' o \'/\', según la operación que desee realizar" << endl;
	system("pause");
	system("cls");
	do{
		cout << "Ingrese el tamaño n de las matrices: " << endl;
		cin.getline(tmnMat, 4);
		cin.ignore();
		int n = atoi(tmnMat);
		if(n == 0 && strcmp(tmnMat, "0") != 0){
			cout << "Usted no ingresó un número natural, probablemente ingresó un caracter o un decimal." << endl;
		}
		else if(n<1){
			cout << "Usted escribió un número entero en vez de un número natural." << endl;
		}
		else if(n>100){
			cout << "Ha escrito un número mayor a 100 (por seguridad no se admiten)." << endl;
		}
		else{
			cout << "Ingrese la operación a realizar: " << endl;
			op = cin.get();
			cin.ignore();
			if(op == 42 || op == 43 || op == 45 || op == 47){
				puntMat1 = (int **)malloc(n*sizeof(int *));
				puntMat2 = (int **)malloc(n*sizeof(int *));
				
				for(int i = 0; i < n; i++){
					puntMat1[i] = (int *)malloc(n*sizeof(int));
					puntMat2[i] = (int *)malloc(n*sizeof(int));
				}
				
				cout << "Matriz 1: " << endl;
				puntMat1 = rellenarMatriz(puntMat1, n);
				cout << "\n\rMatriz 2: " << endl;
				puntMat2 = rellenarMatriz(puntMat2, n);
				
				switch(op){
				case '+':
					cout << "\n\rResultado: " << endl;
					sumarMatrices(puntMat1, puntMat2, n);
					for(int i = 0; i < n; i++){
						free(puntMat1[i]);
						free(puntMat2[i]);
					}
					free(puntMat1);
					free(puntMat2);
					break;
				case '-':
					cout << "\n\rResultado: " << endl;
					restarMatrices(puntMat1, puntMat2, n);
					for(int i = 0; i < n; i++){
						free(puntMat1[i]);
						free(puntMat2[i]);
					}
					free(puntMat1);
					free(puntMat2);
					break;
				case '*':
					cout << "\n\rResultado: " << endl;
					multiplicarMatrices(puntMat1, puntMat2, n);
					for(int i = 0; i < n; i++){
						free(puntMat1[i]);
						free(puntMat2[i]);
					}
					free(puntMat1);
					free(puntMat2);
					break;
				case '/':
					cout << "\n\rResultado: " << endl;
					dividirMatrices(puntMat1, puntMat2, n);
					for(int i = 0; i < n; i++){
						free(puntMat1[i]);
						free(puntMat2[i]);
					}
					free(puntMat1);
					free(puntMat2);
					break;
				default:
					cout << "¡Felicidades, ha encontrado un bug!" << endl;
					break;
				}
			}
			else{
				cout << "El caracter introducido no pertenece a alguna operación reconocible" << endl;
			}
		}
		cout << "Para realizar una nueva operación escriba Si: ";
		cin.getline(rep, 3);
		cin.ignore();
		system("cls");
	} while(strcmp(rep, "Si") == 0 || strcmp(rep, "si") == 0 || strcmp(rep, "SI") == 0 || strcmp(rep, "S") == 0 || strcmp(rep, "s") == 0);
	return 0;
}

int ** rellenarMatriz(int **mat, int n){
	
	if(**mat == 0){
		cout << "¿Cómo pudo suceder esto?" << endl;
	}
	else{
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				mat[i][j] = (rand() % 10) + 1;
				cout << "" << mat[i][j] << " ";
			}
			cout << endl;
		}
	}
	
	return mat;
}
	
void sumarMatrices(int **mat1, int **mat2, int n){
	
	int **matRes = (int **)malloc(n*sizeof(int *));
	for(int i = 0; i < n; i++)
		matRes[i] = (int *)malloc(n*sizeof(int));
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			matRes[i][j] = mat1[i][j] + mat2[i][j];
			cout << "" << matRes[i][j] << " ";
		}
		cout << endl;
	}
	for(int i = 0; i < n; i++){
		free(matRes[i]);
	}
	free(matRes);
}

void restarMatrices(int **mat1, int **mat2, int n){
		
	int **matRes = (int **)malloc(n*sizeof(int *));
	for(int i = 0; i < n; i++)
		matRes[i] = (int *)malloc(n*sizeof(int));
		
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			matRes[i][j] = mat1[i][j] - mat2[i][j];
			cout << "" << matRes[i][j] << " ";
		}
		cout << endl;
	}
	for(int i = 0; i < n; i++){
		free(matRes[i]);
	}
	free(matRes);
}
	
void multiplicarMatrices(int **mat1, int **mat2, int n){
		
	int **matRes = (int **)malloc(n*sizeof(int *));
	for(int i = 0; i < n; i++)
		matRes[i] = (int *)malloc(n*sizeof(int));
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			matRes[i][j] = 0;
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			for(int k = 0; k < n; k++){
				matRes[i][k] = matRes[i][k] + (mat1[i][j] * mat2[j][k]);
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << matRes[i][j] << " ";
		}
		cout << endl;
	}
	
	for(int i = 0; i < n; i++){
		free(matRes[i]);
	}
	free(matRes);
}
	
void dividirMatrices(int **mat1, int **mat2, int n){
		
	double **matRes = (double **)malloc(n*sizeof(double *));
	for(int i = 0; i < n; i++)
		matRes[i] = (double *)malloc(n*sizeof(double));
		
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			matRes[i][j] = (double)mat1[i][j] / mat2[i][j];
			cout << "" << matRes[i][j] << " ";
		}
		cout << endl;
	}
	for(int i = 0; i < n; i++){
		free(matRes[i]);
	}
	free(matRes);
}
