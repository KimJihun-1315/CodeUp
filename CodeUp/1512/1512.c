/*
����� ������ϴٰ� ���� ã�� ���� ������ ���ٰ� ���� �����̸� ǥ�õǾ� �ִ� ����� ���鼭 
���� 2���� �迭�� ���ڵ���� ����� ������ ��������.
�����е��� �迭ũ�� N�� ������ġ X , Y�� �Է¹޾� ���ڵ���� ����ÿ�.

���� ��� �迭ũ�Ⱑ 5�̰� ������ġ�� 4 , 3 ��� 3,4�� �����ϴ� ���������� ���ڵ���� ����� �ִ�.
	
6 5 4 3 4
5 4 3 2 3
4 3 2 1 2
5 4 3 2 3
6 5 4 3 4
*/

#pragma warning (disable:4996)
#include <stdio.h>

int main(void){
    int Arr[101][101] = {0, };
    int valx, valy;
    int n, x, y;

    scanf("%d %d %d", &n, &y, &x);


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {

            valx = (x - j >= 0) ? (x - j) : -1 * (x - j);
            valy = (y - i >= 0) ? (y - i) : -1 * (y - i);
            Arr[i][j] = valx + valy + 1;

        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ", Arr[i][j]);
        }
        printf("\n");
    }
    return;
}
