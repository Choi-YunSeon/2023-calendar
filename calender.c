#include <stdio.h>
#include <string.h>

void menu() {
	printf("------------\n");
	printf("1. ���� �Է�\n");
	printf("2. ���� ���\n");
	printf("3. ���� ����\n");
	printf("4. ����\n");
	printf("------------\n");
}

int main()
{
	int num;
	int a;
	int date[30];//��¥
	int input;
	int i,j;
	int b;	
	int c,d,e;
	char arr1[30][5][20] = { ' ' }; //[6�� �޷� ��¥ ����][���� ����][���� ��] ���� �Է� 

	while (1) 
	{
		menu();

		printf("�Է�: ");
		scanf("%d", &num);

		//1��
		if (num == 1) 
		{
			system("cls");
			
			printf("��¥�� �Է�: ");
		
			scanf("%d",&a);
			date[a]=a;

			printf("������ �Է�(5�� ����)\n");
			
			
				for(j=0;j<5;j++) //���� 5�� �Է¹ޱ� ���� �ݺ���
				{
					if (strlen(arr1[a][j]) > 0) continue; //���ڿ��� �۾��� ������ ���� ���ڿ� �Է����� �Ѿ
					
					//���ڿ� ���� �� 20�� ������ ���� ���� temp_str�� ���� �ް� strncpy�� temp_str���� arr1�� 20���ڸ� �ű�
					char temp_str[20];
					printf("%d: ",j+1);
					scanf(" %[^\n]s", temp_str); 
					strncpy(arr1[a][j], temp_str, 20);
					
					printf("��� �����(1)/����(0) : ");
					scanf(" %d", &input);
					if (input == 0)
						break;
				}	
		}
			
		//2��
		else if (num == 2) 
		{
			system("cls");
			
			printf("��¥ �Է�: ");
			scanf(" %d", &b);
			
			printf("**** ���� ****\n");
			
			for(j=0;j<5;j++) //���� ��� �ݺ���
			{
				printf("%d: %s\n",j+1, arr1[b][j]);	
			}		
		}
		
		//3��
		else if (num == 3) {
			system("cls");
			
			printf("������ �����ϰ� ���� ��¥ ����: ");
			scanf(" %d", &c);
			
			printf("**** ���� ****\n");
			for(j=0;j<5;j++) //���� ���
			{
				printf("%d: %s\n",j+1, arr1[c][j]);	
			}
			printf("**************\n");
			
			printf("�����ϰ� ���� ���� ��ȣ ����: ");
			scanf("%d",&e);
			j=e-1;
			
			//�Է��� ���� ��ȣ�� ���ڿ� �ʱ�ȭ
				if(j==0)
				{
					strncpy(arr1[c][j],"",sizeof(20));
				}
				else if(j==1)
				{
					strncpy(arr1[c][j],"",sizeof(20));
				}
				else if(j==2)
				{
					strncpy(arr1[c][j],"",sizeof(20));
				}
				else if(j==3)
				{
					strncpy(arr1[c][j],"",sizeof(20));
				}
				else if(j==4)
				{
					strncpy(arr1[c][j],"",sizeof(20));
				}
				else
				{
					printf("�߸� �Է��Ͽ����ϴ�.");
				}	
		}
		
		//4��
		else if(num == 4)
		{
			break;
		}
	
	}
	
	return 0;
}
