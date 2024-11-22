#include <stdio.h>
#include <string.h>
#include <math.h>

// Function to convert Decimal to Binary
void decimalToBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    int binary[32], i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

// Function to convert Binary to Decimal
int binaryToDecimal(char binary[]) {
    int decimal = 0;
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i);
        }
    }
    return decimal;
}

// Function to convert Decimal to Octal
void decimalToOctal(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    int octal[32], i = 0;
    while (n > 0) {
        octal[i] = n % 8;
        n = n / 8;
        i++;
    }
    printf("Octal: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", octal[i]);
    }
    printf("\n");
}

// Function to convert Octal to Decimal
int octalToDecimal(int n) {
    int decimal = 0, i = 0;
    while (n != 0) {
        decimal += (n % 10) * pow(8, i);
        n = n / 10;
        i++;
    }
    return decimal;
}

// Function to convert Hexadecimal to Binary
void hexadecimalToBinary(char hex[]) {
    printf("Binary: ");
    for (int i = 0; hex[i] != '\0'; i++) {
        switch (hex[i]) {
            case '0': printf("0000"); break;
            case '1': printf("0001"); break;
            case '2': printf("0010"); break;
            case '3': printf("0011"); break;
            case '4': printf("0100"); break;
            case '5': printf("0101"); break;
            case '6': printf("0110"); break;
            case '7': printf("0111"); break;
            case '8': printf("1000"); break;
            case '9': printf("1001"); break;
            case 'A': case 'a': printf("1010"); break;
            case 'B': case 'b': printf("1011"); break;
            case 'C': case 'c': printf("1100"); break;
            case 'D': case 'd': printf("1101"); break;
            case 'E': case 'e': printf("1110"); break;
            case 'F': case 'f': printf("1111"); break;
            default:
                printf("\nInvalid Hexadecimal input");
                return;
        }
    }
    printf("\n");
}

// Function to convert Binary to Hexadecimal
void binaryToHexadecimal(char binary[]) {
    int length = strlen(binary);
    int hexLength = (length + 3) / 4;
    int decimalValue = 0;
    
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimalValue += pow(2, length - i - 1);
        }
    }

    printf("Hexadecimal: %X\n", decimalValue);
}

int main() {
    int choice, num;
    char binary[33], hex[9];
    
    printf("Number System Converter\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("3. Decimal to Octal\n");
    printf("4. Octal to Decimal\n");
    printf("5. Hexadecimal to Binary\n");
    printf("6. Binary to Hexadecimal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Decimal to Binary
            printf("Enter Decimal Number: ");
            scanf("%d", &num);
            decimalToBinary(num);
            break;
        case 2:
            // Binary to Decimal
            printf("Enter Binary Number: ");
            scanf("%s", binary);
            num = binaryToDecimal(binary);
            printf("Decimal: %d\n", num);
            break;
        case 3:
            // Decimal to Octal
            printf("Enter Decimal Number: ");
            scanf("%d", &num);
            decimalToOctal(num);
            break;
        case 4:
            // Octal to Decimal
            printf("Enter Octal Number: ");
            scanf("%d", &num);
            num = octalToDecimal(num);
            printf("Decimal: %d\n", num);
            break;
        case 5:
            // Hexadecimal to Binary
            printf("Enter Hexadecimal Number: ");
            scanf("%s", hex);
            hexadecimalToBinary(hex);
            break;
        case 6:
            // Binary to Hexadecimal
            printf("Enter Binary Number: ");
            scanf("%s", binary);
            binaryToHexadecimal(binary);
            break;
        default:
            printf("Invalid Choice!\n");
    }
    
    return 0;
}
