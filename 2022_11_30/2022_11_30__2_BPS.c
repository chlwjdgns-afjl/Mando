#include <stdio.h>

int main() {

	float BPS, Byte, byte_ms, byte_input;
	int inputBPS, inputByte;

	int BPS_num[] = { 1200, 2400, 4800, 9600, 14400, 19200, 38400, 57600, 115200, 230400, 460800, 921600 };

	printf("BPS 입력 : (1): 1200, (2): 2400, (3): 4800, (4): 9600, (5): 14400, \n(6): 19200, (7): 38400, (8)57600, (9): 115200, (10): 230400, (11): 460800, (12): 921600\n");
	scanf_s("%d", &inputBPS);

	inputBPS = BPS_num[inputBPS - 1];
	printf("%d \n", inputBPS);

	printf("통신 byte 입력 : ");
	scanf_s("%d", &inputByte);
	printf("%d\n", inputByte);

	BPS = inputBPS / 1000;
	Byte = inputByte;

	byte_ms = 1 / BPS;
	byte_input = Byte * byte_ms;


	printf("1 byte당 소요시간 =  % 0.3f ms,  입력 byte에 맞는 시간 = % 0.3f ms입니다.", byte_ms, byte_input);

	return 0;
}