#include"Chess.h"
void realize()
{
	Chess* chess = new Chess;
	chess->testChessName();
	chess->testpoint();
	chess->testcolor();
	chess->testaddress();
	chess->myconnect();
	BeginBatchDraw();
	while (!chess->GameOverx)
	{
		chess->GetControl();
		chess->refresh();
		FlushBatchDraw();
	}
	EndBatchDraw();
	ExMessage mess;
	while (1) {
		if (peekmessage(&mess, EM_MOUSE))
		{
			if (mess.message == WM_LBUTTONDOWN)
			{
				break;
			}
		}
	}
	
	delete chess;
}
int main()
{
	realize();
	/*initgraph(600, 500);
	IMAGE img;
	loadimage(&img, "resource\\1234.jpg",600,500,true);
	putimage(0, 0, &img);
	while (1)
	{
		
	}
	closegraph();*/
}