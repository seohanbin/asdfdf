#include "common.h"


int gametimes;
int wintimes;

void plusgametime()
{
	gametimes++;
}
void pluswintime()
{
	wintimes++;
}

void Showwinningrate()
{
	if (gametimes==0)
	{
		puts("��Ͼ���");
		return;
	}
	printf("�·�: %f %%", (double)wintimes*100 / gametimes);
}
