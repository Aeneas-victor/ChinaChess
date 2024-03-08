#include"Common.h"
void Drawleft(int x, int y)
{
	line(x + 4, y - 4, x + 20, y - 4);
	line(x + 4, y - 4, x + 4, y - 20);
	line(x + 4, y + 4, x + 20, y + 4);
	line(x + 4, y + 4, x + 4, y + 20);
}
void DrawRight(int x, int y)
{
	line(x - 4, y + 4, x - 20, y + 4);
	line(x - 4, y + 4, x - 4, y + 20);
	line(x - 4, y - 4, x - 4, y - 20);
	line(x - 4, y - 4, x - 20, y - 4);
}

void DrawPosition(int x, int y)
{
	Drawleft(x, y);
	DrawRight(x, y);
}

void DrawBoard()
{

	setbkcolor(RGB(252, 215, 100));
	cleardevice();
	setlinecolor(BLACK);
	setlinestyle(PS_SOLID, 2);
	line(0, 0, 0, 9 * CHESS_SIZE);
	line(8 * CHESS_SIZE, 0, 8 * CHESS_SIZE, 9 * CHESS_SIZE);
	line(3 * CHESS_SIZE, 0, 5 * CHESS_SIZE, 2 * CHESS_SIZE);
	line(5 * CHESS_SIZE, 0, 3 * CHESS_SIZE, 2 * CHESS_SIZE);
	line(3 * CHESS_SIZE, 0 + 7 * CHESS_SIZE, +5 * CHESS_SIZE, +9 * CHESS_SIZE);
	line(5 * CHESS_SIZE, 0 + 7 * CHESS_SIZE, +3 * CHESS_SIZE, +9 * CHESS_SIZE);
	line(-4, -4, CHESS_SIZE * 8 + 4, -4);
	line(-4, 9 * CHESS_SIZE + 4, CHESS_SIZE * 8 + 4, 9 * CHESS_SIZE + 4);
	line(-4, -4, -4, 9 * CHESS_SIZE + +4);
	line(CHESS_SIZE * 8 + +4, -4, CHESS_SIZE * 8 + 4, 9 * CHESS_SIZE + 4);
	
	//outtextxy()
	for (int i = 0; i < ROW; i++)
	{
		line(0, i * CHESS_SIZE, 8 * CHESS_SIZE, i * CHESS_SIZE);
		if (i < 8)
		{
			line((i + 1) * CHESS_SIZE, 0, (i + 1) * CHESS_SIZE, 4 * CHESS_SIZE);
			line((i + 1) * CHESS_SIZE, 5 * CHESS_SIZE, (i + 1) * CHESS_SIZE, 9 * CHESS_SIZE);
		}
	}
	for (int i = 2; i < 7; i++)////////////DrawPOsition
	{
		if (i % 2 == 0)
		{
			DrawPosition(i * CHESS_SIZE, 3 * CHESS_SIZE);
			DrawPosition(i * CHESS_SIZE, 6 * CHESS_SIZE);
		}
	}
	DrawPosition(CHESS_SIZE, 2 * CHESS_SIZE);
	DrawPosition(CHESS_SIZE, 7 * CHESS_SIZE);
	DrawPosition(CHESS_SIZE * 7, CHESS_SIZE * 2);
	DrawPosition(CHESS_SIZE * 7, CHESS_SIZE * 7);
	Drawleft(0, 3 * CHESS_SIZE);
	Drawleft(0, 6 * CHESS_SIZE);
	DrawRight(8 * CHESS_SIZE, 3 * CHESS_SIZE);
	DrawRight(8 * CHESS_SIZE, 6 * CHESS_SIZE);
	settextstyle(50, 25, "Á¥Êé");
	setcolor(BLACK);
	outtextxy(60, 290, ("³þºÓ"));
	outtextxy(60+5*CHESS_SIZE,290, ("ºº½ç"));
	IMAGE judge;
	loadimage(&judge, "resource\\judge.jpg", 309, 700, true);
	putimage(610, -50, &judge);

}
