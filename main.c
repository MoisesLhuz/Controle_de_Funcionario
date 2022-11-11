#include <stdio.h>
#include <stdlib.h>

struct{

    int hEntrada[100], mEntrada[100], sEntrada[100], hSaida[100], mSaida[100], sSaida[100], matricula[100];
    float salario[100];


	}funcionarios;

int main()
{
	struct funcionario;
	int indice=0, opc, matriculaOpc, encontrou;

	for(indice=0; indice<100; indice++){



	    printf("\n\nDigite a Matricula do Funcionario: ");
	    scanf("%d", &funcionarios.matricula[indice]);
	    printf("Digite o Salario do Funcionario: ");
	    scanf("%f", &funcionarios.salario[indice]);


		do{
		    printf("Digite o Horario de Entrada do Funcionario 00:00:00: ");
		    scanf("%d:%d:%d", &funcionarios.hEntrada[indice], &funcionarios.mEntrada[indice], &funcionarios.sEntrada[indice]);

			if(funcionarios.hEntrada[indice]>23 || funcionarios.mEntrada[indice]>59 || funcionarios.sEntrada[indice]>59){
		        printf("Horario Invalido! Digite um horario valido!\n");
		    }
		}while(funcionarios.hEntrada[indice]>23 || funcionarios.mEntrada[indice]>59 || funcionarios.sEntrada[indice]>59);


		do{
			printf("Digite o Horario de Saida do Funcionario 00:00:00: ");
			scanf("%d:%d:%d", &funcionarios.hSaida[indice], &funcionarios.mSaida[indice], &funcionarios.sSaida[indice]);

			if(funcionarios.hSaida[indice]>23 || funcionarios.mSaida[indice]>59 || funcionarios.sSaida[indice]>59){
			    printf("Horario Invalido! Digite um horario valido!\n\n");
			}

		}while(funcionarios.hSaida[indice]>23 || funcionarios.mSaida[indice]>59 || funcionarios.sSaida[indice]>59);


	}

		do{

			printf("\n\nDigite [1] p/ exibir relatorio de todos os funcionarios.\nDigite [2] p/ Consultar Relatorio por matricula.\nDigite [0] p/ Encerrar.\n");
		    scanf("%d", &opc);
		    for(indice=0; indice<100; indice++){
			if(opc==1){
		    	printf("Dados da Matricula: %d Salario: %.2f Horas de Entrada: %d:%d:%d Horario de Saida: %d:%d:%d\n", funcionarios.matricula[indice], funcionarios.salario[indice], funcionarios.hEntrada[indice], funcionarios.mEntrada[indice], funcionarios.sEntrada[indice], funcionarios.hSaida[indice], funcionarios.mSaida[indice], funcionarios.sSaida[indice]);
		    }
			}
			if(opc==2){
		    	printf("Digite o numero da Matricula: ");
		        scanf("%d", &matriculaOpc);
		        encontrou=0;
		        for(indice=0; indice<100; indice++){
				    if(matriculaOpc == funcionarios.matricula[indice]){
				        printf("Dados da Matricula: %d\n Salario: %.2f\n Horario de Entrada: %d:%d:%d\n Horario de Saida: %d:%d:%d\n", funcionarios.matricula[indice], funcionarios.salario[indice], funcionarios.hEntrada[indice], funcionarios.mEntrada[indice], funcionarios.sEntrada[indice], funcionarios.hSaida[indice], funcionarios.mSaida[indice], funcionarios.sSaida[indice]);
						encontrou=1;
					}


				}
					if(encontrou==0){
						printf("\n\nMatricula nao encontrada em nossos registros!!\n");
						   		}
			}


		}while(opc!=0);




    return 0;
}
