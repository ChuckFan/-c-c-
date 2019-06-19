#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int map[5][5];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
int front = 0, rear = 1;
struct node{
	int x, y, pre;
}q[5 * 5];
void print(int i)// �������
{
	if (q[i].pre != -1)
	{
		print(q[i].pre);
		printf("<%d,%d>", q[i].x, q[i].y);
	}
}
void bfs(int x1, int y1)// ����
{
	q[front].x = x1;
	q[front].y = y1;
	q[front].pre = -1;
	while (front<rear)// �����в���
	{
		for (int i = 0; i<4; i++)// �����ɴ��·��
		{
			int a = dx[i] + q[front].x;
			int b = dy[i] + q[front].y;
			if (a<0 || a >= 5 || b<0 || b >= 5 || map[a][b])// �Ƿ����Թ��ڣ��Ƿ����
				continue;
			else
			{
				map[a][b] = 1; // �߹���·�����
				q[rear].x = a;
				q[rear].y = b;
				q[rear].pre = front;
				rear++; // ���
			}
			if (a == 4 && b == 4) print(front);
		}
		front++;// ����
	}
}
int main()
{
	int i, j;
	for (i = 0; i<5; i++)
	for (j = 0; j<5; j++)
		scanf("%d", &map[i][j]);
	printf("<0,0>");
	bfs(0, 0);
	printf("<4,4>");
	return 0;
}