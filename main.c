#include <stdio.h>
#include <string.h>

int main(void){

  int option = 0;
  int i = 0;
  int j = 0;
  int k = 0;
  int comma = 0;
  int length = 0;
  char address[40];
  char street_name[40];
  char street_number[40];
  char *t;
  
  
  printf("\nAvailable idioms:\n");
  printf("1 - Portuguese\n");
  printf("2 - English\n");
  printf("3 - French\n");
  printf("4 - Spanish\n\n");
  printf("Inform your idiom preference: ");
  scanf("%d", &option);

  switch(option){
    case 1:
      printf("\nPor favor, informe o seu endereço: ");
      getchar();
      fgets(address, 40, stdin);

      length = strlen(address);

      for(i = 0; i <= length - 2; i++){
          if(address[i] != '1' && address[i] != '2' && address[i] != '3' && address[i] != '4' && address[i] != '5' && address[i] != '6' && address[i] != '7' && address[i] != '8' && address[i] != '9' && address[i] != '0'){
              street_name[i] = address[i];
          
            } else {
                street_name[i] = '\0';
                break;
          }
      }

      for(j = i; j <= length - 2; j++){
          street_number[k] = address[j];
          k++;
      }
      
      street_number[k] = '\0';
      break;

    case 2:
      printf("\nPlease, inform your address: ");
      getchar();
      fgets(address, 40, stdin);

      length = strlen(address);

      for(i = 0; i <= length - 2; i++){
          if(address[i] == '1' || address[i] == '2' || address[i] == '3' || address[i] == '4' || address[i] == '5' || address[i] == '6' || address[i] == '7' || address[i] == '8' || address[i] == '9' || address[i] == '0' || address[i] == ' '){
              street_number[i] = address[i];
          
          } else {
              street_number[i] = '\0';
              break;
          } 
      }
    
      for(j = i; j <= length - 2; j++){
          street_name[k] = address[j];
          k++;
      }

      street_name[k] = '\0';
      break;

    case 3:
      printf("Merci de renseigner votre adresse: ");
      getchar();
      fgets(address, 40, stdin);

      length = strlen(address);

      for(i = 0; i <= length - 2; i++){
          if(address[i] == '1' || address[i] == '2' || address[i] == '3' || address[i] == '4' || address[i] == '5' || address[i] == '6' || address[i] == '7' || address[i] == '8' || address[i] == '9' || address[i] == '0'){
              street_number[i] = address[i];
            
          } else {
              street_number[i] = '\0';
              break;
          }
      }

      for(j = i; j <= length - 2; j++){
          if(address[j] == ','){
              j++;
            
          } else { 
            street_name[k] = address[j];
            k++;
          }
      }
      
      street_name[k] = '\0';
      break;

    case 4:
      printf("Por favor, informe su dirección: ");
      getchar();
      fgets(address, 40, stdin);

      length = strlen(address);

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
                i += 2;
  
                for(j = i; j <= length - 2; j++){
                    street_number[k] = address[j];
                    k++;
                }
            }
            
            street_number[k] = '\0';
            break;
          }
        
      } else {
          
      }
  }

  printf("\nO nome da rua é: ");  
  puts(street_name);

  printf("O número da rua é: ");
  puts(street_number);
  
  return 0;
}

