#include <stdio.h>

int main()
{
	int arr[100000];
	int num;

	printf("����Ʈ ������ ���� ���� �Է� �Ͻÿ�:");//���� �� �Է�
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("���� %d:", i + 1);
		scanf_s("%d", &arr[i]);
	}

	for (int i = num; i > 0; i--)//��������
	{
		int temp=0;
		
		for (int j = 0; j < num - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	printf("������������ ���ĵ� ������ ������ �����ϴ�.\n");
	for (int i = 0; i < num; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
