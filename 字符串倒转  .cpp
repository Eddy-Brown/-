#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

int main()
{
	int ra,rb;
	char a[9], b[9];
	char *aa,*bb;
	cin>>a>>b;
	
	strrev(a);  
	strrev(b);
	
	ra = strtoul(a,&aa,10);
	rb = strtoul(b,&bb,10);
	
//	ra = atoi(a);
//	rb = atoi(b);
	cout<<ra+rb;
}
