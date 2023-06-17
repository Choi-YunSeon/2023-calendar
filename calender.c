#include <stdio.h>
#include <string.h>

void menu() {
	printf("------------\n");
	printf("1. 일정 입력\n");
	printf("2. 일정 출력\n");
	printf("3. 일정 삭제\n");
	printf("4. 종료\n");
	printf("------------\n");
}

int main()
{
	int num;
	int a;
	int date[30];//날짜
	int input;
	int i,j;
	int b;	
	int c,d,e;
	char arr1[30][5][20] = { ' ' }; //[6월 달력 날짜 개수][일정 개수][글자 수] 일정 입력 

	while (1) 
	{
		menu();

		printf("입력: ");
		scanf("%d", &num);

		//1번
		if (num == 1) 
		{
			system("cls");
			
			printf("날짜를 입력: ");
		
			scanf("%d",&a);
			date[a]=a;

			printf("일정을 입력(5개 까지)\n");
			
			
				for(j=0;j<5;j++) //일정 5개 입력받기 위한 반복문
				{
					if (strlen(arr1[a][j]) > 0) continue; //문자열에 글씨가 있으면 다음 문자열 입력으로 넘어감
					
					//문자열 글자 수 20자 제한을 위해 변수 temp_str에 먼저 받고 strncpy로 temp_str에서 arr1로 20글자를 옮김
					char temp_str[20];
					printf("%d: ",j+1);
					scanf(" %[^\n]s", temp_str); 
					strncpy(arr1[a][j], temp_str, 20);
					
					printf("등록 재실행(1)/종료(0) : ");
					scanf(" %d", &input);
					if (input == 0)
						break;
				}	
		}
			
		//2번
		else if (num == 2) 
		{
			system("cls");
			
			printf("날짜 입력: ");
			scanf(" %d", &b);
			
			printf("**** 일정 ****\n");
			
			for(j=0;j<5;j++) //일정 출력 반복문
			{
				printf("%d: %s\n",j+1, arr1[b][j]);	
			}		
		}
		
		//3번
		else if (num == 3) {
			system("cls");
			
			printf("일정을 삭제하고 싶은 날짜 선택: ");
			scanf(" %d", &c);
			
			printf("**** 일정 ****\n");
			for(j=0;j<5;j++) //일정 출력
			{
				printf("%d: %s\n",j+1, arr1[c][j]);	
			}
			printf("**************\n");
			
			printf("삭제하고 싶은 일정 번호 선택: ");
			scanf("%d",&e);
			j=e-1;
			
			//입력한 일정 번호의 문자열 초기화
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
					printf("잘못 입력하였습니다.");
				}	
		}
		
		//4번
		else if(num == 4)
		{
			break;
		}
	
	}
	
	return 0;
}
