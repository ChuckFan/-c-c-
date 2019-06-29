#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
const int N = 1e5 + 5;
const int inf = 1e9;
struct P{
	int value;
	int pos;
};
P a[N];
int cmp(P x, P y){
	return x.value < y.value;
}
int b[N], b2[N], cnt, head, tail, ans1[N], ans2[N];
struct node{
	int value;
	int next, pre;
}e[N];
void init()
{
	cnt = 2;
	head = 1, tail = 2;
	e[head].next = tail;
	e[tail].next = head;
}
void ins(int pos, int x)
{
	e[++cnt].value = x;
	e[cnt].next = e[pos].next;
	e[cnt].pre = pos;
	e[e[pos].next].pre = cnt;
	e[pos].next = cnt;
}
void del(int pos)
{
	e[e[pos].next].pre = e[pos].pre;
	e[e[pos].pre].next = e[pos].next;
}
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
	{
		scanf("%d", &a[i].value);
		a[i].pos = i;
	}
	sort(a + 1, a + 1 + n, cmp);
	init();
	for (int i = 1; i <= n; ++i)
	{
		ins(e[tail].pre, a[i].value);
		b[a[i].pos] = cnt;
		b2[cnt] = a[i].pos;
	}
	for (int i = n; i >= 2; --i)
	{
		ans1[i] = inf;
		if (e[b[i]].next != tail)
		{
			ans1[i] = min(ans1[i], abs(e[b[i]].value - e[e[b[i]].next].value));
			ans2[i] = b2[e[b[i]].next];
		}
		if (e[b[i]].pre != head)
		{
			if (ans1[i] >= abs(e[b[i]].value - e[e[b[i]].pre].value))
			{
				ans1[i] = abs(e[b[i]].value - e[e[b[i]].pre].value);
				ans2[i] = b2[e[b[i]].pre];
			}
		}
		del(b[i]);
	}
	for (int i = 2; i <= n; ++i)
		printf("%d %d\n",ans1[i], ans2[i]);
	system("pause");
	return 0;
}