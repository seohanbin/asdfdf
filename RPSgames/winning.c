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
		puts("±â·Ï¾øÀ½");
		return;
	}
	printf("½Â·ü: %f %%", (double)wintimes*100 / gametimes);
}
