#include <stdio.h>
#include <string.h>

int main(void) {

  int option = 0;
  int i = 0;
  int j = 0;
  int tamanho = 0;
  char adress[40];
  char street_name[40];
  char street_number[40];
  
  
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
      fgets(adress, 40, stdin);

      tamanho = strlen(adress);

      for(i = 0; i < tamanho - 1; i++){
          if(adress[i] != '1' && adress[i] != '2' && adress[i] != '3' && adress[i] != '4' && adress[i] != '5' && adress[i] != '6' && adress[i] != '7' && adress[i] != '8' && adress[i] != '9'){
              street_name[i] = adress[i];
            
          } else {
              street_number[j] = adress[i];
              j++;
          }
      }

      break;

  }

  printf("\nO nome da rua é: ");  
  puts(street_name);

  printf("O número da rua é: ");
  puts(street_number);
  
  return 0;
}

