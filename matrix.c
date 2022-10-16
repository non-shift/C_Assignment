#include <stdio.h>

int main()
{
	int matrixA[3][3]={0,};
	double inverse[3][3]={0,};
	double det=0, idet=0;
	int b[3]={0,};
	double x[3]={0,};
	
	printf("A ��� (2����) �Է�\n");//��� A �Է¹ޱ�

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d�� %d��:", i + 1, j + 1);
			scanf_s("%d", &matrixA[i][j]);
		}
		printf("\n");
	}

	printf("b (1���� ����) �Է�\n");//b �Է¹ޱ�

	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &b[i]);
	}

	//determinant ���ϱ�
	det= (matrixA[0][0] * matrixA[1][1] * matrixA[2][2]) -( matrixA[0][0] * matrixA[1][2] * matrixA[2][1])+ (matrixA[0][1] * matrixA[1][2] * matrixA[2][0]) - (matrixA[0][1] * matrixA[1][0] * matrixA[2][2])+ (matrixA[0][2] * matrixA[1][0] * matrixA[2][1]) - (matrixA[0][2] * matrixA[1][1] * matrixA[2][0]);
	
	if (det == 0)
	{
		printf("������� ���� ���� �ʽ��ϴ�. �����ϴ� ���� ������ ������ ���ų� �ذ� �������� �ʽ��ϴ�.");
		return 0;
	}

	idet = 1 / det;
	
	//�밡�ټ� ����� ���ϱ�
	inverse[0][0] = (matrixA[1][1] * matrixA[2][2] - matrixA[2][1] * matrixA[1][2]) * idet;
	inverse[0][1] = (matrixA[0][2] * matrixA[2][1] - matrixA[0][1] * matrixA[2][2]) * idet;
	inverse[0][2] = (matrixA[0][1] * matrixA[1][2] - matrixA[0][2] * matrixA[1][1]) * idet;
	inverse[1][0] = (matrixA[1][2] * matrixA[2][0] - matrixA[1][0] * matrixA[2][2]) * idet;
	inverse[1][1] = (matrixA[0][0] * matrixA[2][2] - matrixA[0][2] * matrixA[2][0]) * idet;
	inverse[1][2] = (matrixA[1][0] * matrixA[0][2] - matrixA[0][0] * matrixA[1][2]) * idet;
	inverse[2][0] = (matrixA[1][0] * matrixA[2][1] - matrixA[2][0] * matrixA[1][1]) * idet;
	inverse[2][1] = (matrixA[2][0] * matrixA[0][1] - matrixA[0][0] * matrixA[2][1]) * idet;
	inverse[2][2] = (matrixA[0][0] * matrixA[1][1] - matrixA[1][0] * matrixA[0][1]) * idet;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			x[i] += inverse[i][j] * b[j];
		}
	}

	printf("x�� ��:");

	for (int i = 0; i < 3; i++)
	{
		printf("%.3f ", x[i]);
	}
	return 0;
}