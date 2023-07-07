#pragma once
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#define ROW  9
#define COL  9
#define ROWS  ROW+2
#define COLS  COL+2
#define easy 10
void game();
void chushihua(char arr[ROWS][COLS], int row, int col,char ret);
void dayin(char arr[ROWS][COLS], int row, int col);
void mailei(char arr[ROWS][COLS], int row, int col);
int tishi(char arr[ROWS][COLS], int x, int y);
void biaoji(char arr[ROWS][COLS]);
void pailei(char lei[ROWS][COLS], char show[ROWS][COLS], int row, int col);
void zhankai(char lei[ROWS][COLS], char show[ROWS][COLS], int row, int col);
void digui(char lei[ROWS][COLS], char show[ROWS][COLS],int x, int y);