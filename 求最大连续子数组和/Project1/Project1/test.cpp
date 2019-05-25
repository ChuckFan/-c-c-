//#include<iostream>
//#include<string>
//using namespace std;
//int find_big_array(int array[])
//{
//	int minmax = array[0];
//	int max = array[0];
//	for (int i = 1; i <= sizeof(array); i++)
//	{
//		minmax = (array[i]>array[i] + minmax ? array[i] : array[i] + minmax);
//		max = (minmax>max ? minmax : max);
//	}
//	return max;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int array[50];
//	for(int i = 0; i<n; i++)
//	{
//		cin >> array[i];
//	}
//	int ret = find_big_array(array);
//	cout << ret << endl;
//	return 0;
//}

#include <iostream>
using namespace std;
int main(){
	int n, curSum = 0, maxSum = -1e5;
	cin >> n;
	int *arr;
	arr= new int[n];
	for (int i = 0; i<n; i++){
		cin >> arr[i];
		curSum += arr[i];
		if (curSum>maxSum){
			maxSum = curSum;
		}
		if (curSum<0){
			curSum = 0;
		}
	}
	cout << maxSum << endl;
	system("pause");
	return 0;
}
