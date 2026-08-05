#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "crypto.h"

void run_unit_tests() {
    char original[] = "HelloLiverpool";
    char key = 'K';
    char encrypted[20];
    char decrypted[20];

    xor_encrypt_decrypt(original, key, encrypted);
    xor_encrypt_decrypt(encrypted, key, decrypted);

    assert(strcmp(original, decrypted) == 0);
    printf("✅ Unit Test Passed: Symmetric encryption/decryption matches!\n");
}

int main(int argc, char *argv[]) {
    if (argc > 1 && strcmp(argv[1], "test") == 0) {
        run_unit_tests();
        return 0;
    }

    printf("Cryptographic Module Active.\n");
    return 0;
}
