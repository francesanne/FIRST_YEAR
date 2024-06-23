#include <stdio.h>
	
	int main() {
	    unsigned int num1 = 10;    // Binary: 0000 1010
	    unsigned int num2 = 6;     // Binary: 0000 0110
	
	    unsigned int result;
	
	    result = num1 & num2;      // Bitwise AND: 0000 0010 (2 in decimal)
	    printf("AND Result: %u\n", result);
	
	    result = num1 | num2;      // Bitwise OR: 0000 1110 (14 in decimal)
	    printf("OR Result: %u\n", result);
	
	    result = num1 ^ num2;      // Bitwise XOR: 0000 1100 (12 in decimal)
	    printf("XOR Result: %u\n", result);
	
	    result = ~num1;            // Bitwise complement: 1111 0101 (245 in decimal)
	    printf("Complement Result: %u\n", result);
	
	    result = num1 << 2;        // Left shift by 2: 0010 1000 (40 in decimal)
	    printf("Left Shift Result: %u\n", result);
	
	    result = num2 >> 1;        // Right shift by 1: 0000 0011 (3 in decimal)
	    printf("Right Shift Result: %u\n", result);
	
	    return 0;
	}
