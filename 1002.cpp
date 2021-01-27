/*Time Limit: 1000 ms
Memory Limit: 256 mb
请统计某个给定范围[L, R]的所有整数中，数字 2 出现的次数。
比如给定范围[2, 22]，数字 2 在数 2 中出现了 1 次，在数 12 中出现 1 次，在数 20 中出现 1次，
在数 21 中出现 1次，在数 22 中出现 2 次，所以数字 2 在该范围内一共出现了 6次。*/ 
#include <iostream>
//#include <stdlib.h>  itoa 头文件  
using namespace std;

int main()
{
    int l,r; // 左右限制 
    int flag = 0; // 计数器 
    char i[6];
    cin>>l>>r;
    for(int a=l;a<=r;a++)
    {
    	sprintf(i,"%d",a);  // itoa(a,i,10);   itoa函数：整型转换为字符串类型 
    	                    // itoa只有windos能用  若跨平台的话可使用sprintf函数 
    	for(int b=0;b<6;b++)
    	{
    		if(i[b] == '2')
    		{
    			flag++;
			}
		}
	}
	cout<<flag;
}
