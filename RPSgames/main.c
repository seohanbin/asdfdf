/* Name: main.c  ver 1.0
* Content: 게임 main 함수.
* Implementation: YSW
*
* Last modified 2008/01/01
*/

#include "common.h"
#include "game.h"
#include "winning.h"

int main(void)
{
	int com;
	int you;

	while (1)
	{
		puts("자! 게임을 시작합니다.");
		puts("");

		puts("☆☆☆☆☆☆ 대결! ☆☆☆☆☆☆!!");
		com = ChoiceOfCom();
		you = ChoiceOfMe();
		puts("");

		if (you==QUIT)
		{
			printf("최종"); Showwinningrate();
			return 0;
		}

		puts("★★★★★★ 결과! ★★★★★★!!");
		WhoIsWinner(com, you);


		printf("▷ 컴퓨터의 선택은 "); ShowRSP(com);
		printf("▷ 당신의 선택은 "); ShowRSP(you);
		Showwinningrate();
		puts("");
	}
	return 0;
}