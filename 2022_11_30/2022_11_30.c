#include <stdio.h>

int main() {

	float BPS, Byte, byte_ms, byte_input;
	int inputBPS, inputByte;

	printf("BPS 입력 : ");
	scanf_s("%d", &inputBPS);
	printf("%d\n", inputBPS);

	printf("통신 byte 입력 : ");
	scanf_s("%d", &inputByte);
	printf("%d\n", inputByte);

	BPS = inputBPS/1000;
	Byte = inputByte;

	byte_ms = 1 / BPS;
	byte_input = Byte * byte_ms;


	printf("1 byte당 소요시간 =  % 0.3f ms,  입력 byte에 맞는 시간 = % 0.3f ms입니다.", byte_ms, byte_input);

	return 0;
}