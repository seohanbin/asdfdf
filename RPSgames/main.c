/* Name: main.c  ver 1.0
* Content: ���� main �Լ�.
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
		puts("��! ������ �����մϴ�.");
		puts("");



		puts("�١١١١١� ���! �١١١١١�!!");
		com = ChoiceOfCom();
		you = ChoiceOfMe();
		puts("");
		
		if (you==QUIT)
		{
			//������ ������?
			AskSave();
			break;
		}
		SetBattingMoney();

		puts("�ڡڡڡڡڡ� ���! �ڡڡڡڡڡ�!!");
		WhoIsWinner(com, you);


		printf("�� ��ǻ���� ������ "); ShowRSP(com);
		printf("�� ����� ������ "); ShowRSP(you);
		ShowMoneyState();
		Showwinningrate();
		puts("");


		if (usermoney<=0 || commoney<=0)
		{//������ �������� - �������
			if (usermoney<=0)
			{
				puts("����� �Ӵ� ����");
				break;
			}
			else
			{
				puts("���� �Ӵ� ����");
				break;
			}
		}
	}

	printf("����"); Showwinningrate();
	return 0;
}