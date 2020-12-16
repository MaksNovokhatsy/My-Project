<<<<<<< HEAD
#ifndef CODING_H
#define CODING_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* immutableXorDecoder(char* str, char* key);
void mutableXorDecoder(char* str, const int LENGTHSTRING, char* key);


char* immutableCaesarDecoder(char* str, const int LENGTHSTRING, int offcet);
void mutableCaesarDecoder(char* str, int offcet);


char* immutableXorEncoder(char* str, char* key);
void mutableXorEncoder(char* str, const int LENGTHSTRING, char* key);


char* immutableCaesarEncoder(char* str, const int LENGTHSTRING, int offcet);
void mutableCaesarEncoder(char* str, const int LENGTHSTRING, int offcet);

#endif
=======
#ifndef CODING_H
#define CODING_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* immutableXorDecoder(char* str, char* key);
void mutableXorDecoder(char* str, const int LENGTHSTRING, char* key);


char* immutableCaesarDecoder(char* str, const int LENGTHSTRING, int offcet);
void mutableCaesarDecoder(char* str, int offcet);


char* immutableXorEncoder(char* str, char* key);
void mutableXorEncoder(char* str, const int LENGTHSTRING, char* key);


char* immutableCaesarEncoder(char* str, const int LENGTHSTRING, int offcet);
void mutableCaesarEncoder(char* str, const int LENGTHSTRING, int offcet);

#endif
>>>>>>> 319333ec7a0c8e2946d66b5bb01ade339c79fd5b
