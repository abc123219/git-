#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{

	char scn[32];
	int a;
	int k = 1;
	int mun = 0;

	cout << "������һ����������:";
	cin >> scn;

	a = strlen(scn);//��������ֵ�ĸ���



	for (int i = a - 1; i >= 0; i--)
	{
		/*
		1 2 4 8 16	�����Ƶ�λ������λ�� ��ʮ���� ֵ�� ����
		1*k(1)=1;  k*2;  1*k(2)=2;  k*2;  1*k(4)=4;
		*/

		int x = scn[i] - '0';//������scn��ֵת������������

		mun += x * k;//�����

		k *= 2;

	}
	printf("%d", mun);


	system("pause");
	return 0;
}