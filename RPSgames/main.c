/* Name: main.c  ver 1.0
* Content: ���� main �Լ�.
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
		puts("��! ������ �����մϴ�.");
		puts("");

		puts("�١١١١١� ���! �١١١١١�!!");
		com = ChoiceOfCom();
		you = ChoiceOfMe();
		puts("");

		if (you==QUIT)
		{
			printf("����"); Showwinningrate();
			return 0;
		}

		puts("�ڡڡڡڡڡ� ���! �ڡڡڡڡڡ�!!");
		WhoIsWinner(com, you);


		printf("�� ��ǻ���� ������ "); ShowRSP(com);
		printf("�� ����� ������ "); ShowRSP(you);
		Showwinningrate();
		puts("");
	}
	return 0;
}