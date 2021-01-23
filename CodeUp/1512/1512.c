/*
어느날 등산을하다가 길을 찾기 위해 지도를 보다가 땅의 높낮이를 표시되어 있는 등고선을 보면서 
문득 2차원 배열로 숫자등고선을 만드는 문제가 생각났다.
여러분들은 배열크기 N과 시작위치 X , Y를 입력받아 숫자등고선을 만드시오.

예를 들어 배열크기가 5이고 시작위치가 4 , 3 라면 3,4로 시작하는 다음과같은 숫자등고선을 만들수 있다.
	
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
