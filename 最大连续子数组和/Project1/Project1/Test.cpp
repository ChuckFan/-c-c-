﻿//题目：例如:{6,-3,-2,7,-15,1,2,2},
//连续子向量的大和为8(从第0 个开始,到第3个为止)。
//给一个数组，返回它的大连续子序列的和？

//方法：动态规划
//状态：  子状态：长度为1，2，3，..., n的子数组和的大值
//F(i) :长度为i的子数组和的大值，这种定义不能形成递推关系，舍弃 
//F(i) : 以array[i]为末尾元素的子数组和的大值
//状态递推：  F(i) = max(F(i - 1) + array[i]，array[i]) 
//F(i) = （F(i - 1) > 0） ? F(i - 1) + array[i] : array[i]
//初始值：F(0) = array[0] 
//返回结果：  maxsum：所有F(i)中的大值
//maxsum = max(maxsum，F(i))
#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
	int FindGreatestSumOfSubArray(vector<int> array)
	{
			   if (array.empty())
			   { 
				   return -1;
			   }      
			   // F(i)初始化 
			   int sum = array[0];     
			   // maxsum初始化     
			   int maxsum = array[0]; 
			   for (int i = 1; i < array.size(); i++)
			   {           
				   //  F(i) = max(F(i-1) + array[i]，array[i])    
				   sum = (sum > 0) ? sum + array[i] : array[i];          
				   // maxsum = max( maxsum，F(i))  
				   maxsum = (sum < maxsum) ? maxsum : sum;
			   } 
			   return maxsum;   
	}
};
