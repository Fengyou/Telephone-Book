#include"contact.h"

void print_menu()
{
	printf("*****************************\n");
	printf("*** 1>add		2>del	 ***\n");
	printf("*** 3>show		4>search ***\n");
	printf("*** 5>modify	6>clear  ***\n");
	printf("****************************\n");
}

int main()
{
	PCON  con;
	int input = 1;
	con.count = 0;
	while (input)
	{
		print_menu();
		printf("ÇëÑ¡Ôñ>:");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			add_peo(&con);
			break;
		case 2:
			del_peo(&con);
			break;
		case 3:
			show(&con);
			break;
		case 4:
			search(&con);
			break;
		case 5:
			modify(&con);
			break;
		case 6:
			clear(&con);
			break;
		default:
			break;
		}
	}

	return 0;
}
