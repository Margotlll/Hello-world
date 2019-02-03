#include <iostream>
#include <cstdio>
#include <algorithm>
//libreria <cstring>
using namespace std;
int minimo(int A)
{
	if(A==1 or A==2 or A==0)
	{
		if(A==0)
			return 0;
		else
			return 1;

	}
	else
	{
		bool op=true;
		int aux=1;
		while(aux<A && op)
		{
			aux=aux * 2;
			if(aux>A)
			{
				aux=aux/2;
				op=false;
			}
			
		}
		return 1+minimo(A-aux);
	}

}
int main()
{
	int a;
	int b;
	cin>>a;
	b=minimo(a);
	cout<<b;
	return 0;

}