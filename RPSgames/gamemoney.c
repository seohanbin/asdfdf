#include "common.h"

int commoney;
int usermoney;

int batting;

void SetYourMoney()
{
	printf("초기금액 설정하세요: ");
	scanf("%d", &usermoney);
	while (getchar() != '\n');
}

void SetBattingMoney()
{

	while (1)
	{
		printf("배팅액 설정: ");
		scanf("%d", &batting);
		while (getchar() != '\n');

		if (batting>usermoney || batting>commoney)
		{
			puts("베팅한도초과.. 재배팅");
		}
		else
		{
			break;
		}
	}
}



void ShowMoneyState()
{
	printf("유저머니: %d\n", usermoney);
	printf("컴터머니: %d\n", commoney);
}

void UserWin()
{
	usermoney += batting;
	commoney -= batting;
}

int UserLose()
{
	usermoney -= batting;
	commoney += batting;
}