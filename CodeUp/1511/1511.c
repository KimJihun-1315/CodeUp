//#1511 : 테두리의 합

// 정수 N을 입력받아 1~N * N까지 2차원 배열에 저장한 후 사각 테두리에 있는 배열값들만 합하여 출력하시오.
// 예를 들어 3을 입력한다면
// 1 2 3
// 4 5 6
// 7 8 9 와 같이 배열에 저장한 후 
//테두리의 값인 1 + 2 + 3 + 6 + 9 + 8 + 7 + 4 = 40을 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#pragma warning (disable:4996)

int main(void) {
	int n;
	int L = 0, R = 0, T = 0, B = 0, C = 0;	//왼쪽 오른쪽 상단 하단 코너 부분의 값을 더하여 저장할 변수

	scanf("%d", &n);
	C = 1 + n + (n * n - n + 1) + (n * n);
	for (int i = 2; i < n; i++)
	{
		T = T + i;
	}
	for (int i = (n * n - n + 2); i < n*n; i++)
	{
		B = B+i;
	}
	for (int i = 2; i < n; i++)
	{
		R = R + i * n;
	}
	for (int i = 1; i < n-1; i++)
	{
		L = L + i * n + 1;
	}

	printf("%d, %d, %d, %d, %d",C, T, B, R, L);
}