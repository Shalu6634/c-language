#include<stdio.h>
main()
{
	int choice;
	printf("Welcome to our shop\n");
	printf("choice your language\n");
	printf("1.Hindi\n");
	printf("2.English\n");
	printf("enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Me apki kya madad kar sakti hu\n");
			printf("1.Agar koi shikayat ho to 4763623664 number pe call kare\n");
			printf("2.agar order dena ho to 6738389437 number pe call kare\n");
			printf("enter your choice:\n\n");
	        scanf("%d",&choice);
	        switch(choice)
	        {
	        	case 1:printf("Apki shikayat par kam kiya jayega");
	        	break;
	        	case 2:printf("aapka order confirm hua");
	        	break;
			}
			break;
			case 2:
				printf("how can i help you?\n");
	            printf("1.if you have any problem contact 9821002984 this number\n");
	            printf("2.if you want to order something 6745980176 contact this number\n");
	            printf("enter your choice\n\n");
	            scanf("%d",&choice);
	          switch(choice)
	           {
	    	      case 1:printf("working on your problem\n");
	    	      break;
	    	      case 2:printf("your order is confirm");
	     	      break;
		       }
	}
}