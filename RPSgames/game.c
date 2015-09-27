/* Name: game.c  ver 1.0
* Content: 게임 관련 함수 정의.
* Implementation: YSW
*
* Last modified 2008/01/01
*/
#include <time.h>
#include "common.h"
#include "game.h"

/* 함    수: int ChoiceOfCom(void).
* 기    능: 무작위 값을 반환.
* 반    환: 0~99의 범위에 있는 값을 반환.
*
*/
int ChoiceOfCom(void)
{

	srand(time(NULL)); //srand((unsigned int)time(NULL));
	return rand() % 100;

}

/* 함    수: int ChoiceOfMe(void).
* 기    능: 사용자의 선택을 입력받음.
* 반    환: 사용자 입력.
*
*/
int ChoiceOfMe(void)
{
	int input;
	printf("숫자선택( 홀1 짝2 ) : ");
	scanf("%d", &input);
	while (getchar() != '\n');

	return input;
}

/* 함    수: void WhoIsWinner(int com, int you)
* 기    능: 승자를 가림.
* 반    환: void
*
*/
void WhoIsWinner(int com, int you)
{
	if (com%2 == you)
	{
		puts("당신이 승자");
	}
	else
	{
		puts("컴퓨터가 승자");
	}
}

/* end of file */