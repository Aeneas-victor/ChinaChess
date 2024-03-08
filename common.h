
#pragma once
#define _WINSOCK_DEPRECATED_NO_WARNINGS 
#include<iostream>
#include <WinSock2.h>	
#include<WS2tcpip.h>
#include<graphics.h>
#include<thread>
#include<map>
#include<math.h>
#include<string>
#include<cstring>
#include<algorithm>
#include <mmsystem.h>
#include<random>
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "ws2_32.lib") //显示加载 ws2_32.dll	ws2_32.dll就是最新socket版本啦
#define SQU(x) ((x)*(x))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define CHESS_SIZE 70
#define INTERVAL 50
#define ROW 10
#define COL 9
using namespace std;
