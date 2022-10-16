#include <stdio.h>

int main()
{
	int arr[100000]={0,};
	int num;

	printf("스마트 도시의 빌딩 수를 입력 하시오:");//빌딩 수 입력
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("빌딩 %d:", i + 1);
		scanf_s("%d", &arr[i]);
	}

	for (int i = num; i > 0; i--)//버블정렬
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

	printf("오름차순으로 정렬된 빌딩은 다음과 같습니다.\n");
	for (int i = 0; i < num; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
