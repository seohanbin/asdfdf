/* Name: game.c  ver 1.0
* Content: 게임 관련 함수 정의.
* Implementation: YSW
*
* Last modified 2008/01/01
*/
#include <time.h>
#include "common.h"
#include "game.h"
#include "winning.h"

/* 함    수: int ChoiceOfCom(void).
* 기    능: 무작위 값을 반환.
* 반    환: 0~99의 범위에 있는 값을 반환.
*
*/
int ChoiceOfCom(void)
{

	srand(time(NULL)); //srand((unsigned int)time(NULL));
	return rand() % 3;

}

/* 함    수: int ChoiceOfMe(void).
* 기    능: 사용자의 선택을 입력받음.
* 반    환: 사용자 입력.
*
*/
int ChoiceOfMe(void)
{
	int input;
	printf("숫자선택( 1가위 2바위 3보 4끝내기) : ");
	scanf("%d", &input);
	while (getchar() != '\n');

	return input-1;
}

/* 함    수: void WhoIsWinner(int com, int you)
* 기    능: 승자를 가림.
* 반    환: void
*
*/
void WhoIsWinner(int com, int you)
{
	plusgametime();
	if (com == you)
		puts(".........비김.........");
	else if ((com + 1) % 3 == you)
	{
		pluswintime();
		puts(".........사용자 승리.........");
	}
	else
		puts(".........사용자 패배.........");
}

void ShowRSP(int inp)
{
	if (inp == SIS)
		puts("▷ 가위");
	else if (inp == ROC)
		puts("▷ 바위");
	else
		puts("▷ 보");
}

/* end of file */