#include "common.h"


static int gametimes=0;
static int wintimes=0;

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
	printf("½Â·ü: %f %", (double)wintimes*100 / gametimes);
}
