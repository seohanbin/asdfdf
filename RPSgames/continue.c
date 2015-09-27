#include "common.h"
#include "gamemoney.h"
#include "winning.h"

void AskSave()
{
	int select;
	FILE* fp;
	printf("1.저장  2.저장안함: ");
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
		puts("저장완료");
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
		puts("저장없음");
		fclose(fp);
		return;
	}
	printf("이어서 하기 1.OO  2.XX");
	scanf("%d", &select);
	while (getchar() != '\n');

	if (select==1)
	{
		fread(&gametimes, sizeof(int), 1, fp);
		fread(&wintimes, sizeof(int), 1, fp);
		fread(&usermoney, sizeof(int), 1, fp);
		fread(&commoney, sizeof(int), 1, fp);
		fclose(fp);
		puts("로드완료");
	}
	else
	{
		commoney = 1000;
		SetYourMoney();
	}

}