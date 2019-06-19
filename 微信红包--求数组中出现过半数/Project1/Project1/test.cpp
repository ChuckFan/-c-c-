#include<iostream>
#include<vector>
class Gift {
public:
	int getValue(vector<int> gifts, int n) {
		// write code here
		if (gifts.size()<n) return 0;
		if (gifts.size() == 0) return 0;
		int count = 0, temp;
		//遍历一遍，查找重复数字赋值给temp
		for (int i = 0; i<n; i++)
		{
			if (count == 0)
			{
				temp = gifts[i];
				count = 1;
			}
			else{
				if (temp == gifts[i])
					count++;
				else
					count--;
			}
		}
		int size = 0;
		//求这个重复数的数量
		for (int i = 0; i<n; i++){
			if (temp == gifts[i])
				size++;
		}
		//判断是否超过一半
		return (size>n / 2) ? temp : 0;
	}
};