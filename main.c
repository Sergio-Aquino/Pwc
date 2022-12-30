#include <stdio.h>
#include <string.h>

int main(void){

  void print_address(char street_name[100], char street_number[100]);

  int option = 0;
  int i = 0;
  int j = 0;
  int k = 0;
  int comma = 0;
  int length = 0;
  char address[100];
  char street_name[100];
  char street_number[100];
  char *t;
  char french[100] = {"No"};
  int opc = 0;
  
  do { 
      printf("\nAvailable idioms:\n");
      printf("1 - Portuguese\n");
      printf("2 - English\n");
      printf("3 - French\n");
      printf("4 - Spanish\n\n");
      printf("Inform your idiom preference: ");
      scanf("%d", &option);
    
      switch(option){
        case 1:
          do { 
              printf("\nPor favor, informe o seu endereço: ");
              getchar();
              fgets(address, 100, stdin);
        
              length = strlen(address);
        
              for(i = 0; i <= length - 2; i++){
                  if(address[i] != '1' && address[i] != '2' && address[i] != '3' && address[i] != '4' && address[i] != '5' && address[i] != '6' && address[i] != '7' && address[i] != '8' && address[i] != '9' && address[i] != '0'){
                      street_name[i] = address[i];
                  
                    } else {
                        street_name[i] = '\0';
                        break;
                  }
              }
    
              k = 0;
    
              for(j = i; j <= length - 2; j++){
                  street_number[k] = address[j];
                  k++;
              }
              
              street_number[k] = '\0';
        
              print_address(street_name, street_number);
        
              for(i = 0; i < length; i++){
                  address[i] = '.';
              }
    
              printf("\n5 - Inserir outro endereço\n6 - Mudar idioma.\n7 - Terminar programa.  \n\n:");
              scanf("%d", &opc);

              while(opc < 5 || opc > 7){
                    printf("Invalid option, try again: ");
                    scanf("%d", &opc);
              }
            
            } while(opc == 5);
              
          break;
    
        case 2:
          do { 
              printf("\nPlease, inform your address: ");
              getchar();
              fgets(address, 100, stdin);
        
              length = strlen(address);
        
              for(i = 0; i <= length - 2; i++){
                  if(address[i] == '1' || address[i] == '2' || address[i] == '3' || address[i] == '4' || address[i] == '5' || address[i] == '6' || address[i] == '7' || address[i] == '8' || address[i] == '9' || address[i] == '0' || address[i] == ' '){
                      street_number[i] = address[i];
                  
                  } else {
                      street_number[i] = '\0';
                      break;
                  } 
              }
              
              k = 0;
            
              for(j = i; j <= length - 2; j++){
                  street_name[k] = address[j];
                  k++;
              }
        
              street_name[k] = '\0';
        
              print_address(street_name, street_number);
        
              for(i = 0; i < length; i++){
                      address[i] = '.';
              }
        
              printf("\n5 - Add another address\n6 - Choose another idiom.\n7 - End program.  \n\n:");
              scanf("%d", &opc);

              while(opc < 5 || opc > 7){
                    printf("Invalid option, try again: ");
                    scanf("%d", &opc);
              }
              
            } while(opc == 5);
              
          break;
    
            case 3:
              do {  
                  printf("\nMerci de renseigner votre adresse: ");
                  getchar();
                  fgets(address, 100, stdin);
            
                  length = strlen(address);
            
                  for(i = 0; i <= length - 2; i++){
                      if(address[i] == '1' || address[i] == '2' || address[i] == '3' || address[i] == '4' || address[i] == '5' || address[i] == '6' || address[i] == '7' || address[i] == '8' || address[i] == '9' || address[i] == '0'){
                          street_number[i] = address[i];
                        
                      } else {
                          street_number[i] = '\0';
                          break;
                      }
                  }
            
                  k = 0;
                
                  for(j = i; j <= length - 2; j++){
                      if(address[j] == ','){
                          j++;
                        
                      } else { 
                          street_name[k] = address[j];
                          k++;
                      }
                  }
                  
                  street_name[k] = '\0';
            
            
                  print_address(street_name, street_number);
                
                  for(i = 0; i < length; i++){
                      address[i] = '.';
                  }
                
                  printf("\n5 - Entrez une autre adresse.\n6 - Choisissez une autre langue.\n7 - Terminer le programme.  \n\n:");
                  scanf("%d", &opc);

                  while(opc < 5 || opc > 7){
                    printf("Invalid option, try again: ");
                    scanf("%d", &opc);
                  }
      
                } while(opc == 5);
          
                break;
    
        case 4:
          do { 
                printf("\nPor favor, informe su dirección: ");
                getchar();
                fgets(address, 100, stdin);
          
                length = strlen(address);
    
                comma = 0;
            
                for(i = 0; i <= length - 2; i++){
                    if(address[i] == ','){
                       comma++;
                    }
                }
          
                if(comma == 1){
                    for(i = 0; i <= length - 2; i++){ 
                      if(address[i] != '1' && address[i] != '2' && address[i] != '3' && address[i] != '4' && address[i] != '5' && address[i] != '6' && address[i] != '7' && address[i] != '8' && address[i] != '9' && address[i] != '0' && address[i] != ','){
                          street_name[i] = address[i];
                        
                      } else {
                          street_name[i] = '\0';
                          break;
                      }
                    }
    
                    k = 0;
                    j = 0;
                  
                    for(j = i; j <= length - 2; j++){
                      if(address[j] == ','){
                        j++;
                      
                      } else { 
                        street_number[k] = address[j];
                        k++;
                      }
                    }
                
                    street_number[k] = '\0';
                  
                } else {
                    t = strtok(address, " ");
          
                    while(t != NULL){
                        if(strcmp(t, "No") != 0){
                            strcat(street_name, t);
                            strcat(street_name, " ");
                            t = strtok(NULL, " ");
                          
                        } else {
                            strcat(street_name, "\0");
                            while(t != NULL){
                                strcat(street_number, t);
                                strcat(street_number, " ");
                                t = strtok(NULL, " ");
                            }
                            strcat(street_number, "\0");
                        }
                    }
                }
                
                for(i = 0; i <= length - 2; i++){
                  if(street_name[i] == '@'){
                      street_name[i] = street_name[i+1];
                  }
                }
    
                
          
                printf("\nO nome da rua é: ");  
                puts(street_name);
    
                printf("O número da rua é: ");
                puts(street_number);
                      
                for(i = 0; i < length; i++){
                    address[i] = '.';
                }
    
                length = strlen(street_number);
                for(i = 0; i < length; i++){
                    street_number[i] = '\0';
                }
    
                length = strlen(street_name);
                for(i= 0; i < length; i++){
                    street_name[i] = '\0';
                }
                      
                printf("\n5 - Introduce otra dirección.\n6 - Elige otro idioma.\n7 - Terminar programa.  \n\n: ");
                scanf("%d", &opc);

                while(opc < 5 || opc > 7){
                    printf("Invalid option, try again: ");
                    scanf("%d", &opc);
                }
            
            } while(opc == 5);
          
            break;
        
        default:
          printf("\nInvalid option. Please, try again.\n");
      }

   } while(opc == 6);
    
  return 0;
}

void print_address(char street_name[100], char street_number[100]){

  int i = 0;
  int length = 0;
  
  printf("\nO nome da rua é: ");  
  puts(street_name);

  printf("O número da rua é: ");
  puts(street_number); 
}

