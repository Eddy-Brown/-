/*���ڳ���Ϊ6λ��һ��01����ÿһλ��������0��1��һ����64�ֿ��ܡ�����ǰ�����ǣ�
000000
000001
000010
000011
000100
�밴��С�����˳�������64��01����*/

#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	for(a = 0;a < 2;a++)
	{
		for(b = 0;b < 2;b++)
		{
			for(c = 0;c < 2;c++)
			{
				for(d = 0;d < 2;d++)
				{
					for(e = 0;e < 2;e++)
					{
						for(f = 0;f < 2;f++)
						{
							cout<<a<<b<<c<<d<<e<<f<<endl;
						}
					}
				}
			}
		}
	}
} 
