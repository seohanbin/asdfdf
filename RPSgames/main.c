/* Name: main.c  ver 1.0
* Content: ���� main �Լ�.
* Implementation: YSW
*
* Last modified 2008/01/01
*/

#include "common.h"
#include "game.h"

int main(void)
{
	int com;
	int you;
	puts("��! ������ �����մϴ�.");
	puts("");

	puts("�١١١١١� ���! �١١١١١�!!");
	com = ChoiceOfCom();
	you = ChoiceOfMe();
	puts("");

	puts("�ڡڡڡڡڡ� ���! �ڡڡڡڡڡ�!!");
	WhoIsWinner(com, you);

	printf("�� ��ǻ���� ������ %d \n", com);

	if (you == EVEN)
		puts("�� ����� ������ ¦��. ");
	else
		puts("�� ����� ������ Ȧ��. ");

	puts("");
	return 0;
}