#include "common.h"
#include "gamemoney.h"
#include "winning.h"

void AskSave()
{
	int select;
	FILE* fp;
	printf("1.����  2.�������: ");
	scanf("%d", &select);
	while (getchar() != '\n');

	if (select==1)
	{
		fp = fopen("RPSlog.dat", "wb");
		fwrite(&gametimes, sizeof(int), 1, fp);
		fwrite(&wintimes, sizeof(int), 1, fp);
		fwrite(&usermoney, sizeof(int), 1, fp);
		fwrite(&commoney, sizeof(int), 1, fp);
		fclose(fp);
		puts("����Ϸ�");
	}
	else
	{
		return;
	}
}

void AskLoad()
{
	int select;
	FILE* fp=fopen("RPSlog.dat", "rb");
	if (fp==NULL)
	{
		puts("�������");
		fclose(fp);
		return;
	}
	printf("�̾ �ϱ� 1.OO  2.XX");
	scanf("%d", &select);
	while (getchar() != '\n');

	if (select==1)
	{
		fread(&gametimes, sizeof(int), 1, fp);
		fread(&wintimes, sizeof(int), 1, fp);
		fread(&usermoney, sizeof(int), 1, fp);
		fread(&commoney, sizeof(int), 1, fp);
		fclose(fp);
		puts("�ε�Ϸ�");
	}
	else
	{
		commoney = 1000;
		SetYourMoney();
	}

}