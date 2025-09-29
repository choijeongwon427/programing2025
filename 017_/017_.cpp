#include <stdio.h>

int main()
{
	int a = 0x9; //9
	int b = 0xA; //10

	printf("AND : %08X\n", a&b);
	printf("OR : %08X\n", a|b);
	printf("XOR : %08X\n", a^b);
	printf("NOT: %08X\n", ~a);
	printf("<<: %08X\n", 0x4 << 1);
	printf(">>: %08X\n", 0x4 >> 1);

	printf("AND : %011o\n", a & b);
	printf("OR : %011o\n", a | b);
	printf("XOR : %011o\n", a ^ b);
	printf("NOT: %011o\n", ~a);
	printf("<<: %011o\n", 0x4 << 1);
	printf(">>: %011o\n", 0x4 >> 1);

	int x = 13;
	printf("x = %04d, %04x, %04o\n", x, x, x);

}