<<<<<<< HEAD
#include "funclib.h"

char* immutableClearIcon(char* str, const int LENGTHSTRING) { 
	int i = 0, j = 0;
	char* Pstring;

	Pstring = (char*)calloc(LENGTHSTRING, sizeof(char));
	if (Pstring != NULL) {

		for (i = 0, j = 0; i < LENGTHSTRING; i++) {
			if ((str[i] == 32) || ((str[i] >= 48) && (str[i] <= 57)) ||
				((str[i] >= 65) && (str[i] <= 90)) ||
				((str[i] >= 97) && (str[i] <= 122))) {

				Pstring[j] = str[i];
				j++;
			}
		}

		return(Pstring);
	}
	else {
		printf("Memory error(ClearIcon);\n");
		return(NULL);
	}
}

void mutableClearIcon(char* str, const int LENGTHSTRING) {
	int i = 0, j = 0;
	char* Pstring;

	Pstring = (char*)calloc(LENGTHSTRING, sizeof(char));
	if (Pstring != NULL) {

		for (i = 0, j = 0; i < LENGTHSTRING; i++) {
			if ((str[i] == 32) || ((str[i] >= 48) && (str[i] <= 57)) ||
				((str[i] >= 65) && (str[i] <= 90)) ||
				((str[i] >= 97) && (str[i] <= 122))) {

				Pstring[j] = str[i];
				j++;
			}
		}

		for (i = 0, j = 0; i < LENGTHSTRING; i++) {
			str[j] = Pstring[i];
			j++;
		}

		free(Pstring);
	}
	else {
		printf("Memory error(ClearIcon);\n");
	}
}

char* immutableClearSpaceBE(char* str, const int LENGTHSTRING) { 
	int i, j, check = 0, savelim_begin = 0; 
	int savelim_end = LENGTHSTRING;
	char* Pstring;

	Pstring = (char*)calloc(LENGTHSTRING, sizeof(char));
	if (Pstring != NULL) {

		for (i = 0; i < LENGTHSTRING; i++) {
			if (check != 0)
				break;

			if (str[0] == 32) {
				if (str[i] != 32) {

					savelim_begin = (i);
					check++;
				}
			}
			else check++;
		}
		check = 0;

		for (i = strlen(str); i >= 0; i--) {
			if (check != 0)
				break;

			if ((str[i] > 32) && (str[i] < 127)) {
				savelim_end = (i + 1);
				check++;
			}
		}

		for (i = savelim_begin, j = 0; i < savelim_end; i++) {
			Pstring[j] = str[i];
			j++;
		}

		for (i = 0, j = 0; i < LENGTHSTRING; i++) {
			str[j] = Pstring[i];
			j++;
		}

		return(Pstring);
	}
	else {
		printf("Memory error(ClearSpaceEB);");
		return(NULL);
	}
}

void mutableClearSpaceBE(char* str, const int LENGTHSTRING) {
	int i, j, check = 0, savelim_begin = 0;
	int savelim_end = LENGTHSTRING;
	char* Pstring;

	Pstring = (char*)calloc(LENGTHSTRING, sizeof(char));
	if (Pstring != NULL) {

		for (i = 0; i < LENGTHSTRING; i++) {
			if (check != 0)
				break;

			if (str[0] == 32) {
				if (str[i] != 32) {

					savelim_begin = (i);
					check++;
				}
			}
			else check++;
		}
		check = 0;

		for (i = strlen(str); i >= 0; i--) {
			if (check != 0)
				break;

			if ((str[i] > 32) && (str[i] < 127)) {
				savelim_end = (i + 1);
				check++;
			}
		}

		for (i = savelim_begin, j = 0; i < savelim_end; i++) {
			Pstring[j] = str[i];
			j++;
		}

		for (i = 0, j = 0; i < LENGTHSTRING; i++) {
			str[j] = Pstring[i];
			j++;
		}
		free(Pstring);
	}
	else {
		printf("Memory error(ClearSpaceEB);");
	}
	
}

char* immutableClearSpace(char* str, const int LENGTHSTRING) { // Очистка строки от всех пробелов;
	int i, j;
	char* Pstring;

	Pstring = (char*)calloc(LENGTHSTRING, sizeof(char));
	if (Pstring != NULL) {

		for (i = 0, j = 0; i < LENGTHSTRING; i++) {
			if (str[i] != 32) {

				Pstring[j] = str[i];
				j++;
			}
		}
		return(Pstring);
	}
	else {
		printf("Memory error(ClearSpace);");
		return(NULL);
	}
}

void mutableClearSpace(char* str, const int LENGTHSTRING) {
	int i, j;
	char* Pstring;

	Pstring = (char*)calloc(LENGTHSTRING, sizeof(char));
	if (Pstring != NULL) {

		for (i = 0, j = 0; i < LENGTHSTRING; i++) {
			if (str[i] != 32) {

				Pstring[j] = str[i];
				j++;
			}
		}

		for (i = 0, j = 0; i < LENGTHSTRING; i++) {
			str[j] = Pstring[i];
			j++;
		}

		free(Pstring);
	}
	else {
		printf("Memory error(ClearSpace);");
	}
}

void mutableChangeRegister(char* str, const int LENGTHSTRING, int change) { // Смена регистра по выбору;
	int i;

	if (change == 1) {
		for (i = 0; i < LENGTHSTRING; i++) {
			if (str[i] >= 97 && str[i] <= 122) {
				str[i] = str[i] - 'a' + 'A';
			}
		}
	}

	if (change == 2) {
		for (i = 0; i < LENGTHSTRING; i++) {
			if (str[i] >= 65 && str[i] <= 90) {
				str[i] = str[i] - 'A' + 'a';
			}
		}
	}
}

char* immutableChangeRegister(char* str, const int LENGTHSTRING, int change) {
	int i;
	char* Pstring;

	Pstring = (char*)calloc(LENGTHSTRING, sizeof(char));
	if (Pstring != NULL) {

		if (change == 1) {
			for (i = 0; i < LENGTHSTRING; i++) {
				if (str[i] >= 97 && str[i] <= 122) {
					Pstring[i] = str[i] - 'a' + 'A';
				}
				else Pstring[i] = str[i];
			}
		}

		if (change == 2) {
			for (i = 0; i < LENGTHSTRING; i++) {
				if (str[i] >= 65 && str[i] <= 90) {
					Pstring[i] = str[i] - 'A' + 'a';
				}
				else Pstring[i] = str[i];
			}
		}
		return (Pstring);
	}
	else {
		printf("Memory error(immutableChangeRegister);\n");
		return(NULL);
	}
}

void CheckWord(char* str, const int LENGTHSTRING) {
	int i, check = 0;

	for (i = 0; i < LENGTHSTRING; i++) {
		if (((str[i] > 31) && (str[i] < 65)) ||
			((str[i] > 90) && (str[i] < 97)) || (str[i] > 122)) {

			check++;
			break;
		}
	}

	if (check == 0) {
		printf("Строка состоит только из букв\n\n");
	}
	else printf("Строка не состоит только из букв\n\n");
}

void CheckNumber(char* str, const int LENGTHSTRING) {
	int i, t, j, number, check = 0, counter_number = 0, counter = 0;
	int counter44 = 0, check48 = 1;
	char* pstr;

	pstr = (char*)calloc(LENGTHSTRING, sizeof(char));
	if (pstr != NULL) {

		for (i = 0; i < LENGTHSTRING; i++) {
			if (str[i] != 32 && str[i] != 0) {
				counter++;
			}
		}

		if (counter == 1) {
			for (i = 0; i < LENGTHSTRING; i++) {
				if ((str[i] != 32) && (str[i] != 0)) {
					check48 = str[i];
				}
			}
		}

		for (i = 0; i < LENGTHSTRING; i++) {
			if (str[i] == 44) {
				counter44++;
			}
		}

		for (i = 0; i < LENGTHSTRING; i++) {
			if (check != 0) {
				break;
			}
			if (counter44 > 1) {
				printf("Строка не является числом\n\n");
				break;
			}

			if (check48 == 48) {
				printf("Строка является числом\n\n");
				check++;
			}

			if (str[i] == 44) {
				if ((str[i - 1] != 32) && (str[i + 1] != 32) && (str[i + 1] != 0)) {
					for (t = 0, j = 0; t < LENGTHSTRING; t++) {
						if (str[t] != 44) {
							pstr[j] = str[t];
							j++;
						}
					}
					number = atoi(pstr);

					if (number / 10 == 0) {
						counter_number = 1;
					}
					else {
						while (number > 0) {
							number = number / 10;
							counter_number++;
						}
					}

					if (counter_number == (counter - 1) ) {
						printf("Строка является числом\n\n");
						check++;
					}
					else {
						printf("Строка не является числом\n\n");
						check++;
					}
				}
				else {
					printf("Строка не является числом\n\n");
					check++;
				}
			}
		}

		if (check != 1) {

				number = atoi(str);

				if (number / 10 == 0) {
					counter_number = 1;
				}
				else {
					while (number > 0) {
						number = number / 10;
						counter_number++;
					}
				}

				if (counter_number == counter) {
					printf("Строка является числом\n\n");
				}
				else printf("Строка не является числом\n\n");
		}

		free(pstr);
	} 
	else printf("Memory error(CheckNumber);\n");
}
=======
#include "funclib.h"

char* immutableClearIcon(char* str, const int LENGTHSTRING) { 
	int i = 0, j = 0;
	char* Pstring;

	Pstring = (char*)calloc(LENGTHSTRING, sizeof(char));
	if (Pstring != NULL) {

		for (i = 0, j = 0; i < LENGTHSTRING; i++) {
			if ((str[i] == 32) || ((str[i] >= 48) && (str[i] <= 57)) ||
				((str[i] >= 65) && (str[i] <= 90)) ||
				((str[i] >= 97) && (str[i] <= 122))) {

				Pstring[j] = str[i];
				j++;
			}
		}

		return(Pstring);
	}
	else {
		printf("Memory error(ClearIcon);\n");
		return(NULL);
	}
}

void mutableClearIcon(char* str, const int LENGTHSTRING) {
	int i = 0, j = 0;
	char* Pstring;

	Pstring = (char*)calloc(LENGTHSTRING, sizeof(char));
	if (Pstring != NULL) {

		for (i = 0, j = 0; i < LENGTHSTRING; i++) {
			if ((str[i] == 32) || ((str[i] >= 48) && (str[i] <= 57)) ||
				((str[i] >= 65) && (str[i] <= 90)) ||
				((str[i] >= 97) && (str[i] <= 122))) {

				Pstring[j] = str[i];
				j++;
			}
		}

		for (i = 0, j = 0; i < LENGTHSTRING; i++) {
			str[j] = Pstring[i];
			j++;
		}

		free(Pstring);
	}
	else {
		printf("Memory error(ClearIcon);\n");
	}
}

char* immutableClearSpaceBE(char* str, const int LENGTHSTRING) { 
	int i, j, check = 0, savelim_begin = 0; 
	int savelim_end = LENGTHSTRING;
	char* Pstring;

	Pstring = (char*)calloc(LENGTHSTRING, sizeof(char));
	if (Pstring != NULL) {

		for (i = 0; i < LENGTHSTRING; i++) {
			if (check != 0)
				break;

			if (str[0] == 32) {
				if (str[i] != 32) {

					savelim_begin = (i);
					check++;
				}
			}
			else check++;
		}
		check = 0;

		for (i = strlen(str); i >= 0; i--) {
			if (check != 0)
				break;

			if ((str[i] > 32) && (str[i] < 127)) {
				savelim_end = (i + 1);
				check++;
			}
		}

		for (i = savelim_begin, j = 0; i < savelim_end; i++) {
			Pstring[j] = str[i];
			j++;
		}

		for (i = 0, j = 0; i < LENGTHSTRING; i++) {
			str[j] = Pstring[i];
			j++;
		}

		return(Pstring);
	}
	else {
		printf("Memory error(ClearSpaceEB);");
		return(NULL);
	}
}

void mutableClearSpaceBE(char* str, const int LENGTHSTRING) {
	int i, j, check = 0, savelim_begin = 0;
	int savelim_end = LENGTHSTRING;
	char* Pstring;

	Pstring = (char*)calloc(LENGTHSTRING, sizeof(char));
	if (Pstring != NULL) {

		for (i = 0; i < LENGTHSTRING; i++) {
			if (check != 0)
				break;

			if (str[0] == 32) {
				if (str[i] != 32) {

					savelim_begin = (i);
					check++;
				}
			}
			else check++;
		}
		check = 0;

		for (i = strlen(str); i >= 0; i--) {
			if (check != 0)
				break;

			if ((str[i] > 32) && (str[i] < 127)) {
				savelim_end = (i + 1);
				check++;
			}
		}

		for (i = savelim_begin, j = 0; i < savelim_end; i++) {
			Pstring[j] = str[i];
			j++;
		}

		for (i = 0, j = 0; i < LENGTHSTRING; i++) {
			str[j] = Pstring[i];
			j++;
		}
		free(Pstring);
	}
	else {
		printf("Memory error(ClearSpaceEB);");
	}
	
}

char* immutableClearSpace(char* str, const int LENGTHSTRING) { // Очистка строки от всех пробелов;
	int i, j;
	char* Pstring;

	Pstring = (char*)calloc(LENGTHSTRING, sizeof(char));
	if (Pstring != NULL) {

		for (i = 0, j = 0; i < LENGTHSTRING; i++) {
			if (str[i] != 32) {

				Pstring[j] = str[i];
				j++;
			}
		}
		return(Pstring);
	}
	else {
		printf("Memory error(ClearSpace);");
		return(NULL);
	}
}

void mutableClearSpace(char* str, const int LENGTHSTRING) {
	int i, j;
	char* Pstring;

	Pstring = (char*)calloc(LENGTHSTRING, sizeof(char));
	if (Pstring != NULL) {

		for (i = 0, j = 0; i < LENGTHSTRING; i++) {
			if (str[i] != 32) {

				Pstring[j] = str[i];
				j++;
			}
		}

		for (i = 0, j = 0; i < LENGTHSTRING; i++) {
			str[j] = Pstring[i];
			j++;
		}

		free(Pstring);
	}
	else {
		printf("Memory error(ClearSpace);");
	}
}

void mutableChangeRegister(char* str, const int LENGTHSTRING, int change) { // Смена регистра по выбору;
	int i;

	if (change == 1) {
		for (i = 0; i < LENGTHSTRING; i++) {
			if (str[i] >= 97 && str[i] <= 122) {
				str[i] = str[i] - 'a' + 'A';
			}
		}
	}

	if (change == 2) {
		for (i = 0; i < LENGTHSTRING; i++) {
			if (str[i] >= 65 && str[i] <= 90) {
				str[i] = str[i] - 'A' + 'a';
			}
		}
	}
}

char* immutableChangeRegister(char* str, const int LENGTHSTRING, int change) {
	int i;
	char* Pstring;

	Pstring = (char*)calloc(LENGTHSTRING, sizeof(char));
	if (Pstring != NULL) {

		if (change == 1) {
			for (i = 0; i < LENGTHSTRING; i++) {
				if (str[i] >= 97 && str[i] <= 122) {
					Pstring[i] = str[i] - 'a' + 'A';
				}
				else Pstring[i] = str[i];
			}
		}

		if (change == 2) {
			for (i = 0; i < LENGTHSTRING; i++) {
				if (str[i] >= 65 && str[i] <= 90) {
					Pstring[i] = str[i] - 'A' + 'a';
				}
				else Pstring[i] = str[i];
			}
		}
		return (Pstring);
	}
	else {
		printf("Memory error(immutableChangeRegister);\n");
		return(NULL);
	}
}

void CheckWord(char* str, const int LENGTHSTRING) {
	int i, check = 0;

	for (i = 0; i < LENGTHSTRING; i++) {
		if (((str[i] > 31) && (str[i] < 65)) ||
			((str[i] > 90) && (str[i] < 97)) || (str[i] > 122)) {

			check++;
			break;
		}
	}

	if (check == 0) {
		printf("Строка состоит только из букв\n\n");
	}
	else printf("Строка не состоит только из букв\n\n");
}

void CheckNumber(char* str, const int LENGTHSTRING) {
	int i, t, j, number, check = 0, counter_number = 0, counter = 0;
	int counter44 = 0, check48 = 1;
	char* pstr;

	pstr = (char*)calloc(LENGTHSTRING, sizeof(char));
	if (pstr != NULL) {

		for (i = 0; i < LENGTHSTRING; i++) {
			if (str[i] != 32 && str[i] != 0) {
				counter++;
			}
		}

		if (counter == 1) {
			for (i = 0; i < LENGTHSTRING; i++) {
				if ((str[i] != 32) && (str[i] != 0)) {
					check48 = str[i];
				}
			}
		}

		for (i = 0; i < LENGTHSTRING; i++) {
			if (str[i] == 44) {
				counter44++;
			}
		}

		for (i = 0; i < LENGTHSTRING; i++) {
			if (check != 0) {
				break;
			}
			if (counter44 > 1) {
				printf("Строка не является числом\n\n");
				break;
			}

			if (check48 == 48) {
				printf("Строка является числом\n\n");
				check++;
			}

			if (str[i] == 44) {
				if ((str[i - 1] != 32) && (str[i + 1] != 32) && (str[i + 1] != 0)) {
					for (t = 0, j = 0; t < LENGTHSTRING; t++) {
						if (str[t] != 44) {
							pstr[j] = str[t];
							j++;
						}
					}
					number = atoi(pstr);

					if (number / 10 == 0) {
						counter_number = 1;
					}
					else {
						while (number > 0) {
							number = number / 10;
							counter_number++;
						}
					}

					if (counter_number == (counter - 1) ) {
						printf("Строка является числом\n\n");
						check++;
					}
					else {
						printf("Строка не является числом\n\n");
						check++;
					}
				}
				else {
					printf("Строка не является числом\n\n");
					check++;
				}
			}
		}

		if (check != 1) {

				number = atoi(str);

				if (number / 10 == 0) {
					counter_number = 1;
				}
				else {
					while (number > 0) {
						number = number / 10;
						counter_number++;
					}
				}

				if (counter_number == counter) {
					printf("Строка является числом\n\n");
				}
				else printf("Строка не является числом\n\n");
		}

		free(pstr);
	} 
	else printf("Memory error(CheckNumber);\n");
}
>>>>>>> 319333ec7a0c8e2946d66b5bb01ade339c79fd5b
