#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "crypto.h"

void run_extended_tests() {
    char message[] = "Modular Architecture Test 123!";
    char key = 'X';
    char encrypted[60];
    char decrypted[60];

    xor_encrypt_decrypt(message, key, encrypted);
    xor_encrypt_decrypt(encrypted, key, decrypted);

    assert(strcmp(message, decrypted) == 0);
    printf("✅ Extended Test Passed: Payload integrity maintained across XOR cycle.\n");
}

int main() {
    run_extended_tests();
    return 0;
}
