<<<<<<< HEAD
#ifndef FUNCLIB_H
#define FUNCLIB_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* immutableClearIcon(char* str, const int LENGTHSTRING);
void mutableClearIcon(char* str, const int LENGTHSTRING);

char* immutableClearSpaceBE(char* str, const int LENGTHSTRING);
void mutableClearSpaceBE(char* str, const int LENGTHSTRING);


char* immutableClearSpace(char* str, const int LENGTHSTRING);
void mutableClearSpace(char* str, const int LENGTHSTRING);
    
void mutableChangeRegister(char* str, const int LENGTHSTRING, int change);
char* immutableChangeRegister(char* str, const int LENGTHSTRING, int change);

void CheckNumber(char* str, const int LENGTHSTRING);
void CheckWord(char* str, const int LENGTHSTRING);

#endif
=======
#ifndef FUNCLIB_H
#define FUNCLIB_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* immutableClearIcon(char* str, const int LENGTHSTRING);
void mutableClearIcon(char* str, const int LENGTHSTRING);

char* immutableClearSpaceBE(char* str, const int LENGTHSTRING);
void mutableClearSpaceBE(char* str, const int LENGTHSTRING);


char* immutableClearSpace(char* str, const int LENGTHSTRING);
void mutableClearSpace(char* str, const int LENGTHSTRING);
    
void mutableChangeRegister(char* str, const int LENGTHSTRING, int change);
char* immutableChangeRegister(char* str, const int LENGTHSTRING, int change);

void CheckNumber(char* str, const int LENGTHSTRING);
void CheckWord(char* str, const int LENGTHSTRING);

#endif
>>>>>>> 319333ec7a0c8e2946d66b5bb01ade339c79fd5b
