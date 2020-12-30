#include <iostream>

using namespace std;
int main()
{
	int min =3;
	int max =14;
	int a[10] = {1,2,3,4,5,6,7,8,9,10};	
	int b[10]={};
	if(min)

	if(max >10)
	{	
		for(int i = min-1; i<10; i++)
		{
			//写操作
			cout<<"i:"<<i<<",a[i]:"<<a[i]<<endl;
		}
		for(int i = 0; i < max-10; i++)
		{
			//写操作
			cout<<"i:"<<i<<",a[i]:"<<a[i]<<endl;
		}
	}
	else
	{
		for(int i = min-1; i< max; i++)
		{
			//写操作
			cout<<"i:"<<i<<",a[i]:"<<a[i]<<endl;
		}	
		
	}
}
/*
$ ./a
i:2,a[i]:3
i:3,a[i]:4
i:4,a[i]:5
i:5,a[i]:6
i:6,a[i]:7
i:7,a[i]:8
i:8,a[i]:9
i:9,a[i]:10
i:0,a[i]:1
i:1,a[i]:2
i:2,a[i]:3
i:3,a[i]:4
*/