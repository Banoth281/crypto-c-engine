#include <stdio.h>
#include <string.h>
#include "crypto.h"

void xor_encrypt_decrypt(const char *input, char key, char *output) {
    size_t len = strlen(input);
    for (size_t i = 0; i < len; i++) {
        output[i] = input[i] ^ key;
    }
    output[len] = '\0';
}
