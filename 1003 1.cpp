#include <iostream>
using namespace std;

int Rev(int a)
{
	int ra = 0, f = 0;
	while(a)
	{
		f = a % 10;
		ra = ra*10 + f;
		a /= 10;
	}
	return ra;
}

int main()
{
	int A,B,S,a=0;
	while(cin>>A>>B)
	{
	    S = Rev(A) + Rev(B);
	    cout<<S<<endl;
	}
	return 0;
}
