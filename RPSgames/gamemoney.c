#include "common.h"

int commoney;
int usermoney;

int batting;

void SetYourMoney()
{
	printf("�ʱ�ݾ� �����ϼ���: ");
	scanf("%d", &usermoney);
	while (getchar() != '\n');
}

void SetBattingMoney()
{

	while (1)
	{
		printf("���þ� ����: ");
		scanf("%d", &batting);
		while (getchar() != '\n');

		if (batting>usermoney || batting>commoney)
		{
			puts("�����ѵ��ʰ�.. �����");
		}
		else
		{
			break;
		}
	}
}



void ShowMoneyState()
{
	printf("�����Ӵ�: %d\n", usermoney);
	printf("���͸Ӵ�: %d\n", commoney);
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