/* Name: main.c  ver 1.0
* Content: 게임 main 함수.
* Implementation: YSW
*
* Last modified 2008/01/01
*/

#include "common.h"
#include "game.h"
#include "winning.h"
#include "gamemoney.h"
#include "continue.h"

int main(void)
{
	int com;
	int you;


	AskLoad();
	ShowMoneyState();
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
			//저장할 것인지?
			AskSave();
			break;
		}
		SetBattingMoney();

		puts("★★★★★★ 결과! ★★★★★★!!");
		WhoIsWinner(com, you);


		printf("▷ 컴퓨터의 선택은 "); ShowRSP(com);
		printf("▷ 당신의 선택은 "); ShowRSP(you);
		ShowMoneyState();
		Showwinningrate();
		puts("");


		if (usermoney<=0 || commoney<=0)
		{//누군가 돈떨어짐 - 저장안함
			if (usermoney<=0)
			{
				puts("사용자 머니 소진");
				break;
			}
			else
			{
				puts("컴터 머니 소진");
				break;
			}
		}
	}

	printf("최종"); Showwinningrate();
	return 0;
}