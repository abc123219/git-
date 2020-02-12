#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{

	char scn[32];
	int a;
	int k = 1;
	int mun = 0;

	cout << "请输入一个二进制数:";
	cin >> scn;

	a = strlen(scn);//计算数组值的个数



	for (int i = a - 1; i >= 0; i--)
	{
		/*
		1 2 4 8 16	二进制低位数到高位数 的十进制 值的 规律
		1*k(1)=1;  k*2;  1*k(2)=2;  k*2;  1*k(4)=4;
		*/

		int x = scn[i] - '0';//将数组scn的值转换成整数类型

		mun += x * k;//计算和

		k *= 2;

	}
	printf("%d", mun);


	system("pause");
	return 0;
}