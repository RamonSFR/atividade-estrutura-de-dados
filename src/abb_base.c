
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

main(){
       int A[21];
       int i,j,E;
       int E1,E2,BUS;
    
    
       
       
       
       while (E1 != 0){
			  system("color f0");
              printf("\n");
              printf("\n");
              printf("\t\t\t         PROJETO DE ARVORE\n ");
              printf("\n");
              printf("\n");
              printf("\t\t\t 1- INSERIR ELEMENTOS\n");
              printf("\n");
              printf("\t\t\t 2- EXIBI E ORDENA A ARVORE\n");
              printf("\n");
              printf("\t\t\t 3- APENAS EXIBI A ARVORE\n");
              printf("\n");
              printf("\t\t\t 4- EDITA ELEMENTOS INSERIDOS\n");
              printf("\n");
              printf("\t\t\t 5- EDITA OS NOS DA ARVORE\n");
              printf("\n");
              printf("\t\t\t 6- BUSCA BINARIA\n");
              printf("\n");
              printf("\t\t\t 7- SAIR\n  "); 
			  printf("\n");			  
              printf("\t\t\t Diga sua opcao: ");
              scanf("%d",&E1); 

              
              // executa as funçoes do menu
              switch(E1){
                           
                     //insere numeros
                     case 1:                        
                            system("cls");
                            system("color 0E");
                            
                            printf("\t\t *** INSERIR NUMEROS DESEJADO ***\n\n");
                            
                            printf(" \t\t*** DIGITE O VALOR DESEJADO ***\n\n");
                            for (i=0; i<21; i++){
                                system("color 0E");
                                  printf("\t\tPosicao    %d : ",i+1); 
                                  scanf("%d",&A[i]);                                  
                            }
                            printf("\n\n *** FOI INSERIDO [ 21 ]  NUMEROS NA ARVORE !!!! ***\n\n");
                            
                            
                     break;
                     
                     //exibe os numeros em ordem crescente
                     case 2:
                            system("cls");
                            system("color 0E");
                            printf(" *** EXIBINDO  ELEMENTOS ***\n\n");
                            
                            for(i=0; i<20; i++){
                                  for(j=i+1; j<21; j++){
                                        if (A[i] > A[j]){
                                              E2 = A[i];
                                              A[i] = A[j];
                                              A[j] = E2;             
                                        }                                        
                                  }                            
                            }
                            for (i=0; i<21; i++){
                                   printf("\n\t  POSICAO %d  =  %d\n\n",i,A[i]); 
                            }
                            
                     break;
                     
                     //exibe os numeros em forma de A com seus nos
                     case 3:
                            system("cls");
                            system("color 0E");
                            
                            printf(" *** VISUALIZANDO O DESENHO DA ARVORE ***\n\n");
                            
                            printf(" *** APENAS OS NOS INTERMEDIARIOS ***\n\n");
                            // altura 0       
                            printf("\t\t\t\t =%d\t\t\t\n",A[10]); // posicao 10
                            printf("\t\t\t\t*___*\t\t\t\n"); // linha posicao 10
                            printf("\t\t\t\t  1  \t\t\t\n\n\n\n");// linha posicao 10
                            // altura 1
                            printf("\t\t     =%d\t",A[3]); // posicao 3
                            if(A[3]>9){
                                  printf("\t     =%d\t\n",A[17]); // posicao 17 maior que 9
                            }
                            else
                                  printf("\t\t     =%d\t\n",A[17]); // posicao 17 menor que 10
                            printf("\t\t    *___*\t");  // linha posicao 3   
                            printf("\t    *___*\t\n"); // linha posicao 17
                            printf("\t\t      2  \t");  // linha posicao 3   
                            printf("\t      5  \t\n\n\n"); // linha posicao 17
                            // altura 2      
                            printf("\t      =%d",A[2]);//  posicao 2
                            printf("\t   =%d",A[5]);//  posicao 5       
                            printf("\t      =%d",A[15]); //  posicao 15
                            printf("\t   =%d\t\n",A[18]); // posicao 18
                            printf("\t     *___*");// linha posicao 2
                            printf("\t  *___*");// linha posicao 5       
                            printf("\t     *___*"); // linha posicao 15
                            printf("\t  *___*\t\n"); // linha posicao 18
                            printf("\t       3  ");// linha posicao 2
                            printf("\t    4  ");// linha posicao 5       
                            printf("\t       6  "); // linha posicao 15
                            printf("\t    7  \t"); // linha posicao 18
                            printf("\n\n"); 
                            printf("\n\n *** ARVORE BINARIA ***\n\n");
                                                  
                     break;
                     
                     //edita os numeros do vetor
                     case 4:
                            system("cls");
                            system("color 0E");
                            
                            printf(" *** EDITANDO O NUMERO DO VETOR ***\n\n");
                            
                            printf(" *** NUMEROS INSERIDOS ***\n\n");
                            for (i=0; i<21; i++){
                                   printf("\n\t   POSICAO %d  =  %d",i,A[i]); 
                            }
                            printf("\n\n ***  POSICAO A SER ALTERADA ***\n\n");
                            scanf("%d",&i);
                            printf("\n\n ** EDITE A POSICAO %d, ENTRE COM O NOVO VALOR DESEJADO :  ",i);
                            scanf("%d",&A[i]);
                            printf("\n\n *** FEITO COM SUCESSO ***\n\n");
                            
                     break;
                     
                     //edita os nos da A
                     case 5:
                            system("cls");
                            system("color 0E");
                            
                            printf(" *** EDITANDO OS NOS *** \n\n");
                            
                            printf(" *** VEJA OS NOS QUE JA EXISTE--\n\n");
                            for (i=0; i<21; i++){
                                   printf("\n\t  POSICAO %d  =  %d",i,A[i]); 
                            }
                            printf("\n\n *** VEJA OS NOS DA ARVORE ***\n\n");
                            // altura 0       
                            printf("\t\t\t\t =%d\t\t\t\n",A[10]); // posicao 10
                            printf("\t\t\t\t*___*\t\t\t\n"); // linha posicao 10
                            printf("\t\t\t\t  1  \t\t\t\n\n\n\n");// linha posicao 10
                            // altura 1
                            printf("\t\t     =%d\t",A[3]); // posicao 3
                            if(A[3]>9){
                                  printf("\t     =%d\t\n",A[17]); // posicao 17 maior que 9
                            }
                            else
                                  printf("\t\t     =%d\t\n",A[17]); // posicao 17 menor que 10
                            printf("\t\t    *___*\t");  // linha posicao 3   
                            printf("\t    *___*\t\n"); // linha posicao 17
                            printf("\t\t      2  \t");  // linha posicao 3   
                            printf("\t      5  \t\n\n\n"); // linha posicao 17
                            // altura 2      
                            printf("\t      =%d",A[2]);//  posicao 2
                            printf("\t   =%d",A[5]);//  posicao 5       
                            printf("\t      =%d",A[15]); //  posicao 15
                            printf("\t   =%d\t\n",A[18]); // posicao 18
                            printf("\t     *___*");// linha posicao 2
                            printf("\t  *___*");// linha posicao 5       
                            printf("\t     *___*"); // linha posicao 15
                            printf("\t  *___*\t\n"); // linha posicao 18
                            printf("\t       3  ");// linha posicao 2
                            printf("\t    4  ");// linha posicao 5       
                            printf("\t       6  "); // linha posicao 15
                            printf("\t    7  \t"); // linha posicao 18
                            printf("\n\n");                      
                            printf("\n\n *** DIGITE O NO A SER ALTERADO ***\n\n");
                            scanf("%d",&i);
                            E = i;
                            switch (i){
                                    case 1: i=10;
                                    break;
                                    case 2: i=3;
                                    break;
                                    case 3: i=2;
                                    break;
                                    case 4: i=5;
                                    break;
                                    case 5: i=17;
                                    break;
                                    case 6: i=15;
                                    break;
                                    case 7: i=18;
                                    break;
                            }
                           
                            printf("\n\n *** EDITE O NO %d,  NOVO VALOR :  ",E);
                            scanf("%d",&A[i]);
                            printf("\n\n *** FEITO COM SUCESSO ***\n\n");
                            
                     break;
                     
                     //pesquisa na A binaria
                     case 6:
                            system("cls");
                            system("color 0E");
                            
                            printf(" *** ALTERANDO OS NOS DA ARVORE ***\n\n");
                            
                            printf(" *** NUMEROS JA EXISTENTES ***\n\n");
                            for (i=0; i<21; i++){
                                   printf("\n\t  POSICAO %d  =  %d",i,A[i]); 
                            }
                            printf("\n\n");                      
                            printf("\n\n *** INFORME O NUMERO QUE VAI SER BUSCADO ***\n\n");
                            scanf("%d",&BUS);
                            //pesquisa lado direito
                            if(BUS > A[10]){
                                    for (i=11; i<21; i++){
                                         if(BUS == A[i]){
                                              printf("\n\tNumero %d encontrado no lado direito na POSICAO %d .",A[i],i);
                                         }    
                                         else{
                                              printf("\n\t *** Nao Encontrado ***\n\n");
                                         }
                                    }
                            } 
                            //pesquisa lado esquerdo
                            else{
                                    if(BUS < A[10]){
                                         for (i=0; i<10; i++){
                                              if(BUS == A[i]){
                                                   printf("\n\tNumero %d encontrado no lado esquerdo na POSICAO %d .",A[i],i);
                                              }    
                                              else
                                                   printf("\n\t  *** Nao Encontrado ***\n\n");
                                         }              
                                    }
                            //a pesquisa eh o nó de altura 0
                                    else
                                         printf("\n\tNumero %d encontrado no topo da ARVORE na POSICAO %d .",A[10],10);
                            }
                     break;
                     
                     //finaliza o programa
                     case 7: break;
                                          
              }             
             
       }            
      
       system("PAUSE");       
    }