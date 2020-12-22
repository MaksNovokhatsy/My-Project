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
        //printf("Введите строку динной не больше %d", LENGTHSTRING -1);  
        printf("Выберите способо кодирования(1 - цезарь 2 - XOR): ");
        scanf("%d", &change);
        if(change != 1 && change != 2) {
                printf("Вы ввели некоректные данные для переменной");
                exit(0);
        }   
        getchar();

        if(change == 2) {
          printf("Введите Ключ динной не больше %d: ", LENGTHKEY - 1);
	  fgets(Key, LENGTHKEY, stdin);
	  printf("\n");

    	  for (i = 0; i < LENGTHKEY; i++) {
  		  if (Key[i] == 10)
		  Key[i] = 0;
	  }
        }

        if(change == 1) {
          printf("Введите сдвиг для шифра: ");
          scanf("%d", &shift);

        }
        getchar();

	printf("Введите Строку динной не больше %d: ", LENGTHSTRING - 1);
	fgets(Pstring, LENGTHSTRING, stdin);
        if(strlen(Pstring) > LENGTHSTRING - 1) {
          printf("вы ввели слишком большую строку");  
          exit(0);
        } 
	printf("\n");
	printf("Вы ввели данную строку: %s\n\n", Pstring);

	for (i = 0; i < LENGTHSTRING; i++) {
	        if (Pstring[i] == 10)
		Pstring[i] = 0;
	}

	mutableClearIcon(Pstring, LENGTHSTRING);
        mutableClearSpaceBE(Pstring, LENGTHSTRING);
        mutableChangeRegister(Pstring, LENGTHSTRING, 2);

        if (change == 1) {
          Pstring = immutableCaesarEncoder(Pstring, LENGTHSTRING, shift);
          printf("Закодированная строка методом Цезаря %s\n\n", Pstring);
        }        

        if (change == 2) {
          Pstring = immutableXorEncoder(Pstring, Key);
          printf("Закодированная методом XOR строка %s\n\n", Pstring);
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
