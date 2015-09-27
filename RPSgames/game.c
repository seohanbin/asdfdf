/* Name: game.c  ver 1.0
* Content: ���� ���� �Լ� ����.
* Implementation: YSW
*
* Last modified 2008/01/01
*/
#include <time.h>
#include "common.h"
#include "game.h"
#include "winning.h"

/* ��    ��: int ChoiceOfCom(void).
* ��    ��: ������ ���� ��ȯ.
* ��    ȯ: 0~99�� ������ �ִ� ���� ��ȯ.
*
*/
int ChoiceOfCom(void)
{

	srand(time(NULL)); //srand((unsigned int)time(NULL));
	return rand() % 3;

}

/* ��    ��: int ChoiceOfMe(void).
* ��    ��: ������� ������ �Է¹���.
* ��    ȯ: ����� �Է�.
*
*/
int ChoiceOfMe(void)
{
	int input;
	printf("���ڼ���( 1���� 2���� 3�� 4������) : ");
	scanf("%d", &input);
	while (getchar() != '\n');

	return input-1;
}

/* ��    ��: void WhoIsWinner(int com, int you)
* ��    ��: ���ڸ� ����.
* ��    ȯ: void
*
*/
void WhoIsWinner(int com, int you)
{
	plusgametime();
	if (com == you)
		puts(".........���.........");
	else if ((com + 1) % 3 == you)
	{
		pluswintime();
		puts(".........����� �¸�.........");
	}
	else
		puts(".........����� �й�.........");
}

void ShowRSP(int inp)
{
	if (inp == SIS)
		puts("�� ����");
	else if (inp == ROC)
		puts("�� ����");
	else
		puts("�� ��");
}

/* end of file */