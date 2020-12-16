<<<<<<< HEAD
#include "coding.h"

char* immutableXorDecoder(char* str, char* key) {
	int i, j;
	char* Pstring;

	Pstring = (char*)calloc(strlen(str) + 1, sizeof(char));
	if (Pstring != NULL) {

		for (i = 0, j = 0; i < strlen(str); i++, j++) {
			if (j > strlen(key)) {
				j = 0;
			}
			Pstring[i] = str[i] ^ key[j];
		}
		return (Pstring);
	}
	else {
		printf("Memory error(immutableXorEndecoder);\n");
		return 0;
	}
}

void mutableXorDecoder(char* str, const int LENGTHSTRING, char* key) {
	int i, j;
	char* Pstring;

	for (i = 0, j = 0; i < strlen(str); i++, j++) {
		if (j > strlen(key)) {
			j = 0;
		}
		str[i] = str[i] ^ key[j];
	}
}

char* immutableCaesarDecoder(char* str, const int LENGTHSTRING, int offcet) {
	int i, j;
	char* Pstring;

	Pstring = (char*)calloc(LENGTHSTRING, sizeof(char));
	if (Pstring != NULL) {

		for (i = 0, j = 0; i < strlen(str); i++) {
			if (str[i] == 32) {
				Pstring[j] = 32;
				j++;
			}

			if ((str[i] > 64) && (str[i] < 91)) {
				if ((str[i] - offcet) > 64) {
					Pstring[j] = (str[i] - offcet);
					j++;
				}
				else {
					Pstring[j] = (91 - (offcet - (str[i] - 65)));
					j++;
				}
			}

			if ((str[i] > 96) && (str[i] < 123)) {
				if ((str[i] - offcet) > 96) {
					Pstring[j] = (str[i] - offcet);
					j++;
				}
				else {
					Pstring[j] = (123 - (offcet - (str[i] - 97)));
					j++;
				}
			}

			if ((str[i] > 47) && (str[i] < 58)) {
				if ((str[i] - offcet) > 47) {
					Pstring[j] = (str[i] - offcet);
					j++;
				}
				else {
					Pstring[j] = (58 - (offcet - (str[i] - 58)));
					j++;
				}
			}
		}
		return (Pstring);
	}
	else {
		printf("Memory error(immutableСaesarEncoder);\n");
		return 0;
	}
}

void mutableCaesarDecoder(char* str, int offcet) {
	int i;

	for (i = 0; i < strlen(str); i++) {
		if ((str[i] > 64) && (str[i] < 91)) {
			if ((str[i] - offcet) > 64) {
				str[i] = (str[i] - offcet);
			}
			else {
				str[i] = (91 - (offcet - (str[i] - 65)));
			}
		}

		if ((str[i] > 96) && (str[i] < 123)) {
			if ((str[i] - offcet) > 96) {
				str[i] = (str[i] - offcet);
			}
			else {
				str[i] = (123 - (offcet - (str[i] - 97)));
			}
		}

		if ((str[i] > 47) && (str[i] < 58)) {
			if ((str[i] - offcet) > 47) {
				str[i] = (str[i] - offcet);
			}
			else {
				str[i] = (58 - (offcet - (str[i] - 58)));
			}
		}
	}
}

char* immutableXorEncoder(char* str, char* key) {
	int i, j;
    char* Pstring;

	Pstring = (char*)calloc(strlen(str) + 1, sizeof(char));
	if (Pstring != NULL) {

		for (i = 0, j = 0; i < strlen(str); i++, j++) {
			if (j > strlen(key)) {
				j = 0;
			}
			Pstring[i] = str[i] ^ key[j];
		}
     	return (Pstring);
	}
    else {
		printf("Memory error(immutableXorEndecoder);\n");
		return 0;
	}
}

void mutableXorEncoder(char* str, const int LENGTHSTRING, char* key) {
	int i, j;
	char* Pstring;

		for (i = 0, j = 0; i < strlen(str); i++, j++) {
			if (j > strlen(key)) {
				j = 0;
			}
			str[i] = str[i] ^ key[j];
		}
}

char* immutableCaesarEncoder(char* str, const int LENGTHSTRING, int offcet) {
	int i, j;
	char* Pstring;

	Pstring = (char*)calloc(LENGTHSTRING, sizeof(char));
	if (Pstring != NULL) {

		for (i = 0, j = 0; i < strlen(str); i++) {
			if (str[i] == 32) {
				Pstring[j] = 32;
				j++;
			}

			if ((str[i] > 64) && (str[i] < 91)) {
				if ((str[i] + offcet) < 91) {
					Pstring[j] = (str[i] + offcet);
					j++;
				}
				else {
					Pstring[j] = (64 + (offcet - (90 - str[i])));
					j++;
				}
			}

			if ((str[i] > 96) && (str[i] < 123)) {
				if ((str[i] + offcet) < 123) {
					Pstring[j] = (str[i] + offcet);
					j++;
				}
				else {
					Pstring[j] = (96 + (offcet - (122 - str[i])));
					j++;
				}
			}

			if ((str[i] > 47) && (str[i] < 58)) {
				if ((str[i] + offcet) < 58) {
					Pstring[j] = (str[i] + offcet);
					j++;
				}
				else {
					Pstring[j] = (47 + (offcet - (57 - str[i])));
					j++;
				}
			}
		}
		return (Pstring);
	}
	else {
		printf("Memory error(immutableСaesarEncoder);\n");
		return 0;
	}
}

void mutableCaesarEncoder(char* str, const int LENGTHSTRING, int offcet) {
	int i, j;

	for (i = 0, j = 0; i < strlen(str); i++) {
		if ((str[i] > 64) && (str[i] < 91)) {
			if ((str[i] + offcet) < 91) {
				str[i] = (str[i] + offcet);
			}
			else {
				str[i] = (64 + (offcet - (90 - str[i])));
			}
		}

		if ((str[i] > 96) && (str[i] < 123)) {
			if ((str[i] + offcet) < 123) {
				str[i] = (str[i] + offcet);
			}
			else {
				str[i] = (96 + (offcet - (122 - str[i])));
			}
		}

		if ((str[i] > 47) && (str[i] < 58)) {
			if ((str[i] + offcet) < 58) {
				str[i] = (str[i] + offcet);
			}
			else {
				str[i] = (47 + (offcet - (57 - str[i])));
			}
		}
	}
}
=======
#include "coding.h"

char* immutableXorDecoder(char* str, char* key) {
	int i, j;
	char* Pstring;

	Pstring = (char*)calloc(strlen(str) + 1, sizeof(char));
	if (Pstring != NULL) {

		for (i = 0, j = 0; i < strlen(str); i++, j++) {
			if (j > strlen(key)) {
				j = 0;
			}
			Pstring[i] = str[i] ^ key[j];
		}
		return (Pstring);
	}
	else {
		printf("Memory error(immutableXorEndecoder);\n");
		return 0;
	}
}

void mutableXorDecoder(char* str, const int LENGTHSTRING, char* key) {
	int i, j;
	char* Pstring;

	for (i = 0, j = 0; i < strlen(str); i++, j++) {
		if (j > strlen(key)) {
			j = 0;
		}
		str[i] = str[i] ^ key[j];
	}
}

char* immutableCaesarDecoder(char* str, const int LENGTHSTRING, int offcet) {
	int i, j;
	char* Pstring;

	Pstring = (char*)calloc(LENGTHSTRING, sizeof(char));
	if (Pstring != NULL) {

		for (i = 0, j = 0; i < strlen(str); i++) {
			if (str[i] == 32) {
				Pstring[j] = 32;
				j++;
			}

			if ((str[i] > 64) && (str[i] < 91)) {
				if ((str[i] - offcet) > 64) {
					Pstring[j] = (str[i] - offcet);
					j++;
				}
				else {
					Pstring[j] = (91 - (offcet - (str[i] - 65)));
					j++;
				}
			}

			if ((str[i] > 96) && (str[i] < 123)) {
				if ((str[i] - offcet) > 96) {
					Pstring[j] = (str[i] - offcet);
					j++;
				}
				else {
					Pstring[j] = (123 - (offcet - (str[i] - 97)));
					j++;
				}
			}

			if ((str[i] > 47) && (str[i] < 58)) {
				if ((str[i] - offcet) > 47) {
					Pstring[j] = (str[i] - offcet);
					j++;
				}
				else {
					Pstring[j] = (58 - (offcet - (str[i] - 58)));
					j++;
				}
			}
		}
		return (Pstring);
	}
	else {
		printf("Memory error(immutableСaesarEncoder);\n");
		return 0;
	}
}

void mutableCaesarDecoder(char* str, int offcet) {
	int i;

	for (i = 0; i < strlen(str); i++) {
		if ((str[i] > 64) && (str[i] < 91)) {
			if ((str[i] - offcet) > 64) {
				str[i] = (str[i] - offcet);
			}
			else {
				str[i] = (91 - (offcet - (str[i] - 65)));
			}
		}

		if ((str[i] > 96) && (str[i] < 123)) {
			if ((str[i] - offcet) > 96) {
				str[i] = (str[i] - offcet);
			}
			else {
				str[i] = (123 - (offcet - (str[i] - 97)));
			}
		}

		if ((str[i] > 47) && (str[i] < 58)) {
			if ((str[i] - offcet) > 47) {
				str[i] = (str[i] - offcet);
			}
			else {
				str[i] = (58 - (offcet - (str[i] - 58)));
			}
		}
	}
}

char* immutableXorEncoder(char* str, char* key) {
	int i, j;
    char* Pstring;

	Pstring = (char*)calloc(strlen(str) + 1, sizeof(char));
	if (Pstring != NULL) {

		for (i = 0, j = 0; i < strlen(str); i++, j++) {
			if (j > strlen(key)) {
				j = 0;
			}
			Pstring[i] = str[i] ^ key[j];
		}
     	return (Pstring);
	}
    else {
		printf("Memory error(immutableXorEndecoder);\n");
		return 0;
	}
}

void mutableXorEncoder(char* str, const int LENGTHSTRING, char* key) {
	int i, j;
	char* Pstring;

		for (i = 0, j = 0; i < strlen(str); i++, j++) {
			if (j > strlen(key)) {
				j = 0;
			}
			str[i] = str[i] ^ key[j];
		}
}

char* immutableCaesarEncoder(char* str, const int LENGTHSTRING, int offcet) {
	int i, j;
	char* Pstring;

	Pstring = (char*)calloc(LENGTHSTRING, sizeof(char));
	if (Pstring != NULL) {

		for (i = 0, j = 0; i < strlen(str); i++) {
			if (str[i] == 32) {
				Pstring[j] = 32;
				j++;
			}

			if ((str[i] > 64) && (str[i] < 91)) {
				if ((str[i] + offcet) < 91) {
					Pstring[j] = (str[i] + offcet);
					j++;
				}
				else {
					Pstring[j] = (64 + (offcet - (90 - str[i])));
					j++;
				}
			}

			if ((str[i] > 96) && (str[i] < 123)) {
				if ((str[i] + offcet) < 123) {
					Pstring[j] = (str[i] + offcet);
					j++;
				}
				else {
					Pstring[j] = (96 + (offcet - (122 - str[i])));
					j++;
				}
			}

			if ((str[i] > 47) && (str[i] < 58)) {
				if ((str[i] + offcet) < 58) {
					Pstring[j] = (str[i] + offcet);
					j++;
				}
				else {
					Pstring[j] = (47 + (offcet - (57 - str[i])));
					j++;
				}
			}
		}
		return (Pstring);
	}
	else {
		printf("Memory error(immutableСaesarEncoder);\n");
		return 0;
	}
}

void mutableCaesarEncoder(char* str, const int LENGTHSTRING, int offcet) {
	int i, j;

	for (i = 0, j = 0; i < strlen(str); i++) {
		if ((str[i] > 64) && (str[i] < 91)) {
			if ((str[i] + offcet) < 91) {
				str[i] = (str[i] + offcet);
			}
			else {
				str[i] = (64 + (offcet - (90 - str[i])));
			}
		}

		if ((str[i] > 96) && (str[i] < 123)) {
			if ((str[i] + offcet) < 123) {
				str[i] = (str[i] + offcet);
			}
			else {
				str[i] = (96 + (offcet - (122 - str[i])));
			}
		}

		if ((str[i] > 47) && (str[i] < 58)) {
			if ((str[i] + offcet) < 58) {
				str[i] = (str[i] + offcet);
			}
			else {
				str[i] = (47 + (offcet - (57 - str[i])));
			}
		}
	}
}
>>>>>>> 319333ec7a0c8e2946d66b5bb01ade339c79fd5b
