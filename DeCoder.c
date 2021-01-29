#include "funclib.h"
#include "coding.h"

int main() {
	int i, change = 0, shift = 0;
	int const LENGTHSTRING = 21;
	int const LENGTHKEY = 21;
	char* str;
	char* key;

	str = (char*)calloc(LENGTHSTRING, sizeof(char));
	key = (char*)calloc(LENGTHKEY, sizeof(char));
	if ((str != NULL) && (key != NULL)) {

		printf("Enter string(limit %d): ", LENGTHSTRING - 1);
		fgets(str, 20, stdin);

		for (i = 0; i < LENGTHSTRING; i++) {
			if (str[i] == 10) {
				str[i] = 0;
			}
		}

		printf("Select the decoding method(Cesar - 1, XOR - 2): ");
		scanf("%d", &change);
		getchar();

		if ((change != 1) && (change != 2)) {
			printf("Incorrect input\n");
			exit(0);
		}

		if (change == 1) {
			printf("Enter the offset: ");
			scanf("%d", &shift);
			getchar();
		}

		if (change == 2) {
			printf("Enter key(limit %d): ", LENGTHKEY - 1);
			fgets(key, 20, stdin);
		}

		for (i = 0; i < LENGTHKEY; i++) {
			if (key[i] == 10) {
				key[i] = 0;
			}
		}
		printf("\n");
		if (change == 2) {
			printf("Entered string: %s", str);
			str = immutableXorEncoder(str, key);
			printf("Decoded string: %s\n\n", str);
		}


		mutableClearIcon(str, LENGTHSTRING);
		mutableClearSpaceBE(str, LENGTHSTRING);
		mutableChangeRegister(str, LENGTHSTRING, 2);
		
		if (change == 1) {
			printf("Entered string: %s", str);
			str = immutableCaesarDecoder(str, LENGTHSTRING, shift);
			printf("Decoded string: %s\n\n", str);
		}

		free(str);
		free(key);

		return 0;
	}
	else {
		printf("MEMORY ERROR IN MAIN");
			return 0;
	}
}
