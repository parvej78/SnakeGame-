#include<graphics.h>
int main(){
	int height=GetSystemMetrics(SM_CYSCREEN);
	int width=GetSystemMetrics(SM_CXSCREEN);
	initwindow(width,height,"",-3,-3);
	setbkcolor(GREEN);
	cleardevice();
	int x=100;
	int y=100;
	while(1){
		setcolor(RED);
		circle(x,y,50);
		if(GetAsyncKeyState(VK_RIGHT))
		{
			x=x+10;
		}
		setcolor(YELLOW);
		circle(x,y,50);
		if(GetAsyncKeyState(VK_LEFT))
		{
			x=x-10;
		}
		setcolor(BLUE);
		circle(x,y,50);
		else if(GetAsyncKeyState(VK_UP))
		{
			y=y-10;
		}
		else if(GetAsyncKeyState(VK_DOWN))
		{
			y=y+10;
		}
		if(GetAsyncKeyState(VK_RETURN))
		break;

	delay(10);
}
	getch();
	closegraph();
	return 0;
}
