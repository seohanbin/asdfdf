/* Name: game.c  ver 1.0
* Content: ���� ���� �Լ� ����.
* Implementation: YSW
*
* Last modified 2008/01/01
*/
#include <time.h>
#include "common.h"
#include "game.h"

/* ��    ��: int ChoiceOfCom(void).
* ��    ��: ������ ���� ��ȯ.
* ��    ȯ: 0~99�� ������ �ִ� ���� ��ȯ.
*
*/
int ChoiceOfCom(void)
{

	srand(time(NULL)); //srand((unsigned int)time(NULL));
	return rand() % 100;

}

/* ��    ��: int ChoiceOfMe(void).
* ��    ��: ������� ������ �Է¹���.
* ��    ȯ: ����� �Է�.
*
*/
int ChoiceOfMe(void)
{
	int input;
	printf("���ڼ���( Ȧ1 ¦2 ) : ");
	scanf("%d", &input);
	while (getchar() != '\n');

	return input;
}

/* ��    ��: void WhoIsWinner(int com, int you)
* ��    ��: ���ڸ� ����.
* ��    ȯ: void
*
*/
void WhoIsWinner(int com, int you)
{
	if (com%2 == you)
	{
		puts("����� ����");
	}
	else
	{
		puts("��ǻ�Ͱ� ����");
	}
}

/* end of file */