#include "funclib.h"
#include "coding.h"

int main() {
int i, change = 0, shift = 0;
char* Pstring;
char* Key;
const int LENGTHKEY = 21;
const int LENGTHSTRING = 21;

Key = (char*)calloc(LENGTHKEY, sizeof(char));
Pstring = (char*)calloc(LENGTHSTRING, sizeof(char));
if (Pstring != NULL) {

        printf("Каким способом шифровалась строка(1 - метод Цезаря 2 - метод XOR): ");
        scanf("%d", &change);
        if ((change != 1) || (change != 2)) {
          printf("Введённые данные не корректны");
          exit(0);
        }

        if (change == 2) {
	  printf("Введите Ключ динной не больше %d: ", LENGTHKEY - 1);
	  fgets(Key, LENGTHKEY, stdin);
	  printf("\n");

	  for (i = 0; i < LENGTHKEY; i++) {
		  if (Key[i] == 10)
		  Key[i] = 0;
	  }
        }
        
        if(change == 1) {
          printf("Введите сдвиг: ");
          scanf("%d", &shift);
          printf("\n");
        }

        printf("Введите Строку динной не больше %d: ", LENGTHSTRING - 1);
	fgets(Pstring, LENGTHSTRING, stdin);
	printf("\n");
	printf("Вы ввели данную строку: %s\n\n", Pstring);

        for (i = 0; i < LENGTHSTRING; i++) {
	  if (Pstring[i] == 10) {
	    Pstring[i] = 0; 
          }  
        } 

        Pstring = immutableClearIcon(Pstring, LENGTHSTRING);
        Pstring = immutableClearSpaceBE(Pstring, LENGHTSTRING);
        Pstring = immutableChangeRegister(Pstring, LENGHTSTRING, 2);

        if (Change == 1) {
          Pstring = immutableCaeserDecoder(Pstring, LENGTHSTRING, shift);
          printf("Декодированная строка: %s", Pstring);
        }

        if (Change == 2) {
          Pstring = immutableXorDecoder(Pstring, Key);
          printf("Декодированная строка: %s", Pstring);
        } 

	return 0;
			
        free(Key);
	free(Pstring);
}
else {
  printf("Memmory error(main);\n");
  return 0;
  }
}
