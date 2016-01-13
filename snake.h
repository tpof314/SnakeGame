#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define SIZE 35

/**
 * 蛇的运动方向可以是下面的4个值.
 */
#define UP    1
#define DOWN  2
#define LEFT  3
#define RIGHT 4

/* ============= 全局变量 ============= */
/**
 * 游戏界面的大小是35*35.
 */
int grid[SIZE][SIZE];

/**
 * 蛇的长度.
 */
int snakeLength;

/**
 * 蛇的身体.
 */
int snakeBody[1000];

/**
 * 食物的位置.
 */
int food;

/**
 * 蛇的运动方向.
 */
int direction;

/* ============= 函数 ============= */
/**
 * 初始化游戏.
 */
void initGame();

/**
 * 把一个坐标转换成数字.
 */
int coordToNumber(int r, int c);

/**
 * 把一个数字转换成(r, c)坐标.
 */
int getRow(int num);
int getCol(int num);

/**
 * 检查一下蛇目前有没有撞到墙.
 * 撞到的话返回true.
 */
bool snakeHitBoundary();

/**
 * 检查一下蛇目前有没有咬到自己.
 * 咬到的话返回true.
 */
bool snakeBiteSelf();

/**
 * 判断蛇有没有吃到食物.
 * 吃到食物的话，返回true.
 */
bool snakeEatFood();

/**
 * 移动整条蛇的身体.
 */
void moveSnake();

/**
 * 蛇变长1格.
 */
void growSnake();

/**
 * 随机生成一个新的食物地点.
 * 并返回.
 * 生成的食物地点不能是蛇身上的点.
 */
int newFood();

/**
 * 清空整个版面.
 */
void clearGrid();

/**
 * 根据目前的数据，更新整个版面.
 */
void updateGrid();

/**
 * 用printf把整个版面打出来.
 */
void printSnake();

