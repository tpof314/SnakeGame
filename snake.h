#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define SIZE 35

/**
 * �ߵ��˶���������������4��ֵ.
 */
#define UP    1
#define DOWN  2
#define LEFT  3
#define RIGHT 4

/* ============= ȫ�ֱ��� ============= */
/**
 * ��Ϸ����Ĵ�С��35*35.
 */
int grid[SIZE][SIZE];

/**
 * �ߵĳ���.
 */
int snakeLength;

/**
 * �ߵ�����.
 */
int snakeBody[1000];

/**
 * ʳ���λ��.
 */
int food;

/**
 * �ߵ��˶�����.
 */
int direction;

/* ============= ���� ============= */
/**
 * ��ʼ����Ϸ.
 */
void initGame();

/**
 * ��һ������ת��������.
 */
int coordToNumber(int r, int c);

/**
 * ��һ������ת����(r, c)����.
 */
int getRow(int num);
int getCol(int num);

/**
 * ���һ����Ŀǰ��û��ײ��ǽ.
 * ײ���Ļ�����true.
 */
bool snakeHitBoundary();

/**
 * ���һ����Ŀǰ��û��ҧ���Լ�.
 * ҧ���Ļ�����true.
 */
bool snakeBiteSelf();

/**
 * �ж�����û�гԵ�ʳ��.
 * �Ե�ʳ��Ļ�������true.
 */
bool snakeEatFood();

/**
 * �ƶ������ߵ�����.
 */
void moveSnake();

/**
 * �߱䳤1��.
 */
void growSnake();

/**
 * �������һ���µ�ʳ��ص�.
 * ������.
 * ���ɵ�ʳ��ص㲻���������ϵĵ�.
 */
int newFood();

/**
 * �����������.
 */
void clearGrid();

/**
 * ����Ŀǰ�����ݣ�������������.
 */
void updateGrid();

/**
 * ��printf��������������.
 */
void printSnake();

