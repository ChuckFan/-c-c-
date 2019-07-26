//��Ŀ�����ֵ�����s1��s2֮��ģ�������len1��len2���ַ����ĸ��������mod 1000007��
//����������ÿ�����ݰ���s1������С��100����s2������С��100����len1��С��100000����len2������len1��С��100000����
//�������ӣ�
//ab ce 1 2
//�����56
#include<iostream>
#include<string>

public static long get(String a, String b, int min)
{
	long suma = 0;
	long sumb = 0;
	char[] ar = a.toCharArray();
	char[] br = b.toCharArray();
	for (int i = 0; i<ar.length; i++)
	{
		suma = suma + (ar[i] - 'a')*(long)Math.pow(26, min - 1 - i);
	}
	if (ar.length != 0)
	{
		suma++;
	}
	for (int i = 0; i<br.length; i++)
	{
		sumb = sumb + (br[i] - 'a')*(long)Math.pow(26, min - 1 - i);
	}
	if (br.length != 0)
	{
		sumb++;
	}
	return sumb - suma;
}
public static void main(String[] args)
{
	Scanner scan = new Scanner(System.in);
	while (scan.hasNext())
	{
		//��ȡ����Ĳ���
		String s = scan.nextLine();
		String[] array = s.split(" ");
		//�õ�len1����
		int min = Integer.parseInt(array[2]);
		//�õ�len2����
		int max = Integer.parseInt(array[3]);
		long sum = 0;
		//һ���Ҵ�min���ȵ�max����
		for (int i = min; i <= max; i++)
		{
			char a = array[0].charAt(0);
			char b = array[1].charAt(0);
			//�ڵ�ǰ����֮ǰ26^(i-1)����ֱ�Ӽ�����֮��
			sum = sum + (long)Math.pow(26, i - 1)*(b - a);
			//�ҵ�1��i֮���
			String la = array[0].substring(1, i < array[0].length() ? i : array[0].length());
			//�ҵ�1��i֮���
			String lb = array[1].substring(1, i < array[1].length() ? i : array[1].length());

			sum = sum + get(la, lb, i - 1);
		}
		long res = sum - 1;
		System.out.println(res % 1000007);
	}

}
��