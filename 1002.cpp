/*Time Limit: 1000 ms
Memory Limit: 256 mb
��ͳ��ĳ��������Χ[L, R]�����������У����� 2 ���ֵĴ�����
���������Χ[2, 22]������ 2 ���� 2 �г����� 1 �Σ����� 12 �г��� 1 �Σ����� 20 �г��� 1�Σ�
���� 21 �г��� 1�Σ����� 22 �г��� 2 �Σ��������� 2 �ڸ÷�Χ��һ�������� 6�Ρ�*/ 
#include <iostream>
//#include <stdlib.h>  itoa ͷ�ļ�  
using namespace std;

int main()
{
    int l,r; // �������� 
    int flag = 0; // ������ 
    char i[6];
    cin>>l>>r;
    for(int a=l;a<=r;a++)
    {
    	sprintf(i,"%d",a);  // itoa(a,i,10);   itoa����������ת��Ϊ�ַ������� 
    	                    // itoaֻ��windos����  ����ƽ̨�Ļ���ʹ��sprintf���� 
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
