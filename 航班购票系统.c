#include<stdio.h>
#include<string.h>  
#include<stdlib.h>
#define MAX_hbxx 18
#define MAX_ckxx 18
#define MAX_Passenger 20


//  结构体定义 

typedef struct chengkexinxi
{
	char id[20];
	char name[20];
	char tell[20]; 
	char hbh[9];
	char site[10]; 
	int price;
}Cheng; 

Cheng CHE[100];



struct plane
{
	char hbh[9];//航班号
	char start[20];//起飞地
	char end[20];//目的地
	char tbegin[20];//起飞时间
	char tover[20];//到达时间
	int p_num;//票数
	int gprice;//头等舱票价
	int dprice;
}data[100];





// 全局变量

int flag=0; 
int flag2=0;
int temp=0;
int count=0;
char site[50]="11001111010000101010";
char sitee[50]="AAAAAAAAAAAAAAAAAAAAAAAA";
int sitenum=0;


//函数申明： 
void menu1();
void init();
void liulan();
void zhuce();
void denglu();
void dingpiao();
void chaxun();
void dayin();
void tuipiao(); 


//主函数 
int  main()
{
	init();
	menu1();
//	dingpiao();
//	dayin();
//	denglu();
//	zhuce();
//	tuipiao();
	return 0;
	
}

   
// 系统初始化
//void init()
//{
	/*	strcpy(INF[0].hbh,"ch111");strcpy(INF[0].start,"咸阳");strcpy(INF[0].end,"龙湾");strcpy(INF[0].tbegin,"8：00");strcpy(INF[0].tover,"10：00");strcpy(INF[0].jprice,"1000");strcpy(INF[0].tprice,"2000");
		strcpy(INF[1].hbh,"ch122");strcpy(INF[1].start,"咸阳");strcpy(INF[1].end,"龙湾");strcpy(INF[1].tbegin,"12：00");strcpy(INF[1].tover,"14：00");strcpy(INF[1].jprice,"900");strcpy(INF[1].tprice,"1800");
		strcpy(INF[2].hbh,"ch133");strcpy(INF[2].start,"咸阳");strcpy(INF[2].end,"龙湾");strcpy(INF[2].tbegin,"16：00");strcpy(INF[2].tover,"18：00");strcpy(INF[2].jprice,"800");strcpy(INF[2].tprice,"1600");
		strcpy(INF[3].hbh,"ch211");strcpy(INF[3].start,"咸阳");strcpy(INF[3].end,"双流");strcpy(INF[3].tbegin,"8：00");strcpy(INF[3].tover,"10：00");strcpy(INF[3].jprice,"1000");strcpy(INF[3].tprice,"2000");		
		strcpy(INF[4].hbh,"ch222");strcpy(INF[4].start,"咸阳");strcpy(INF[4].end,"双流");strcpy(INF[4].tbegin,"12：00");strcpy(INF[4].tover,"14：00");strcpy(INF[4].jprice,"1100");strcpy(INF[4].tprice,"2100");	
		strcpy(INF[5].hbh,"ch233");strcpy(INF[5].start,"咸阳");strcpy(INF[5].end,"双流");strcpy(INF[5].tbegin,"16：00");strcpy(INF[5].tover,"18：00");strcpy(INF[5].jprice,"1100");strcpy(INF[5].tprice,"2100");
		strcpy(INF[6].hbh,"ch311");strcpy(INF[6].start,"咸阳");strcpy(INF[6].end,"宝安");strcpy(INF[6].tbegin,"8：00");strcpy(INF[6].tover,"10：00");strcpy(INF[6].jprice,"1100");strcpy(INF[6].tprice,"2200");
		strcpy(INF[7].hbh,"ch322");strcpy(INF[7].start,"咸阳");strcpy(INF[7].end,"宝安");strcpy(INF[7].tbegin,"12：00");strcpy(INF[7].tover,"14：00");strcpy(INF[7].jprice,"1000");strcpy(INF[7].tprice,"2300");
		strcpy(INF[8].hbh,"ch333");strcpy(INF[8].start,"咸阳");strcpy(INF[8].end,"宝安");strcpy(INF[8].tbegin,"16：00");strcpy(INF[8].tover,"18：00");strcpy(INF[8].jprice,"1100");strcpy(INF[8].tprice,"2000");
		strcpy(INF[9].hbh,"ch411");strcpy(INF[9].start,"咸阳");strcpy(INF[9].end,"白云");strcpy(INF[9].tbegin,"8：00");strcpy(INF[9].tover,"10：00");strcpy(INF[9].jprice,"1300");strcpy(INF[9].tprice,"2200");
		strcpy(INF[10].hbh,"ch422");strcpy(INF[10].start,"咸阳");strcpy(INF[10].end,"白云");strcpy(INF[10].tbegin,"8：00");strcpy(INF[10].tover,"10：00");strcpy(INF[10].jprice,"1300");strcpy(INF[10].tprice,"2000");
		strcpy(INF[11].hbh,"ch433");strcpy(INF[11].start,"咸阳");strcpy(INF[11].end,"白云");strcpy(INF[11].tbegin,"8：00");strcpy(INF[11].tover,"10：00");strcpy(INF[11].jprice,"1000");strcpy(INF[11].tprice,"2100");
		strcpy(INF[12].hbh,"ch511");strcpy(INF[12].start,"咸阳");strcpy(INF[12].end,"路桥");strcpy(INF[12].tbegin,"8：00");strcpy(INF[12].tover,"10：00");strcpy(INF[12].jprice,"1400");strcpy(INF[12].tprice,"2400");
		strcpy(INF[13].hbh,"ch522");strcpy(INF[13].start,"咸阳");strcpy(INF[13].end,"路桥");strcpy(INF[13].tbegin,"8：00");strcpy(INF[13].tover,"10：00");strcpy(INF[13].jprice,"1000");strcpy(INF[13].tprice,"2000");
		strcpy(INF[14].hbh,"ch533");strcpy(INF[14].start,"咸阳");strcpy(INF[14].end,"路桥");strcpy(INF[14].tbegin,"8：00");strcpy(INF[14].tover,"10：00");strcpy(INF[14].jprice,"1050");strcpy(INF[14].tprice,"2300");
		strcpy(INF[15].hbh,"ch611");strcpy(INF[15].start,"咸阳");strcpy(INF[15].end,"中川");strcpy(INF[15].tbegin,"8：00");strcpy(INF[15].tover,"10：00");strcpy(INF[15].jprice,"1600");strcpy(INF[15].tprice,"2000");
		strcpy(INF[16].hbh,"ch622");strcpy(INF[16].start,"咸阳");strcpy(INF[16].end,"中川");strcpy(INF[16].tbegin,"8：00");strcpy(INF[16].tover,"10：00");strcpy(INF[16].jprice,"1000");strcpy(INF[16].tprice,"2000");
		strcpy(INF[17].hbh,"ch633");strcpy(INF[17].start,"咸阳");strcpy(INF[17].end,"中川");strcpy(INF[17].tbegin,"8：00");strcpy(INF[17].tover,"10：00");strcpy(INF[17].jprice,"1070");strcpy(INF[17].tprice,"2100");
}*/

void init()
{
	int i=0;
	FILE* hbxx = fopen("plane.txt", "r");// 读取内存中的数据 
	for (i = 0; i < MAX_hbxx; i++)
	{
	//	printf("++++");
		int num = 0;
		num = fscanf(hbxx, "%s %s %s %s %s %d %d %d", data[i].hbh, data[i].start, data[i].end, data[i].tbegin, data[i].tover,&data[i].p_num,&data[i].gprice,&data[i].dprice);
	}
	fclose(hbxx);
	

	FILE* ckxx=fopen("chengkexinxi.txt","r");
	for(i=0;i<MAX_ckxx;i++)
	{
		int num=0;
	//	printf("==============") ;
		num=fscanf(ckxx,"%s %s %s %s %s %d",CHE[i].id,CHE[i].name,CHE[i].tell,CHE[i].hbh,CHE[i].site,&CHE[i].price);
	//printf("==============") ;
	//	printf("%s  %s  %s  %s  %s %d\n",CHE[i].id,CHE[i].name,CHE[i].tell,CHE[i].hbh,CHE[i].site,CHE[i].price);
	}
	fclose(ckxx);


}
  
// 主菜单 
  void menu1()
{
	printf("********************************\n");
	printf("*  0:登录                *\n");           //  登录成功以后需要删掉 登录 以及注册的这个选项 
	printf("*  1:浏览航班信息        *\n");
	printf("*  2:查询信息            *\n");
	printf("*  3:订票                *\n");
	printf("*  4:打印订单            *\n");
	printf("*  5:退票                *\n");
	printf("*  6:注册                *\n");
	printf("*  7:退出                *\n"); 
	
	printf("********************************\n");
	printf("====请输入每个选项前边对应的数字====\n");
	int switch_on;
	scanf("%d", &switch_on);
	switch (switch_on)
	{
	case 0:
		denglu();
		break;
	case 1:
		liulan();
		break;
	case 2:
		chaxun();
		break;
	case 3:
		dingpiao();
		break;
	case 4:
		dayin();
		break; 
	case 5:
		tuipiao();
		break; 
	case 6:
		zhuce();
		break;	
	case 7:
		return;
	default:
		break;
	}
	menu1();
}


// 查询信息 
void chaxun()
{

    if(flag == 1)	//如果已经登录
    {
  		int n,i=0;
  		char didian[10],hbh[10],enter_name[20];
		printf("====请输入每个选项前边对应的数字====\n");
		printf("1:按抵达地点查询可选班次\n");
		printf("2:按航班号查询可选班次\n");
	//	printf("3:查询旅客身份信息\n");
		scanf("%d",&n);
		if (n==1)
		{
			printf("请输入抵达地点：\n");
			scanf("%s",didian);
			printf("航班号   起飞机场   降落机场   起飞时间   降落时间  剩余票数\n");
			for (i = 0; i < MAX_hbxx; i++)
			{
				if (strcmp(didian, data[i].end) == 0)
				{
					printf("%8s   %8s   %10s   %8s   %8s   %d\n", data[i].hbh, data[i].start, data[i].end, data[i].tbegin, data[i].tover,data[i].p_num);
				}
			//	else if(i==MAX_hbxx-1)
			//	{
			//		printf("没有该航班信息，已自动退出\n");
			//		break;
			//	}
		   	}
		}
		else if(n==2)
		{
			printf("请输入航班号：\n");
			scanf("%s",hbh);
			printf("航班号   起飞机场   降落机场   起飞时间   降落时间  剩余票数\n");
			for (i = 0; i < MAX_hbxx; i++)
			{
				if (strcmp(hbh, data[i].hbh) == 0)
				{
					printf("%8s   %8s   %10s   %8s   %8s   %d\n", data[i].hbh, data[i].start, data[i].end, data[i].tbegin, data[i].tover,data[i].p_num);
				}
			//	else
			//	{
			//		printf("没有该航班信息，已自动退出\n");
			//		break;
			//	}		
			} 
		   			
		}
	/*	else if(n==3)
		{
			printf("请输入要查询的姓名：\n");
			scanf("%s",enter_name);
			for(i=0; i<MAX_Passenger; i++)
      	  	{
           		if(strcmp(CHE[i].name,enter_name)==0)
           		{
           	   		printf("身份证号:%s, 姓名:%s, 电话:%s\n",CHE[i].id,CHE[i].name,CHE[i].tell);
                	//break;
            	}
				else
				{
					printf("没有此人，已自动退出\n");
					break;
				}		
			} 
		}*/
		
	}
    else
    { 
        printf("在查询信息之前请登录\n");
    }
}

  
// 显示航班信息表 
void liulan()
{
	if(flag == 1)
	{ 
		int i = 0;
		for (i = 0; i < MAX_hbxx; i++)
		{
			printf("航班号:%8s   起飞机场:%8s   降落机场:%10s   起飞时间:%9s   降落时间:%8s  余票:%5d  经济舱价格:%3d  头等舱舱价格:%8d\n", data[i].hbh, data[i].start, data[i].end, data[i].tbegin, data[i].tover,data[i].p_num, data[i].gprice, data[i].dprice);
		}
	} 
	else
    { 
        printf("请先登录！\n");
    }
	
	 
}



//订票 
void dingpiao()
{
if(flag == 1)
{	
	char a_end[20];
	char lname[10];
	char lcard[10];
	char ltell[10];
	int i, w = 0,m=0, num=0, s,n;
	char p[10]="";
	printf("请输入要前往的目的地：");
	scanf("%s", a_end);
	printf("航班号   起飞机场   降落机场   起飞时间   降落时间  剩余票数\n");
aaa:for (i = 0; i < MAX_hbxx; i++) {
		if (strcmp(a_end, data[i].end) == 0)
		{
			printf("%8s   %8s   %10s   %8s   %8s   %d\n", data[i].hbh, data[i].start, data[i].end, data[i].tbegin, data[i].tover,data[i].p_num);
			w = 1;
		}
	}
	if (w != 0)
	{
		printf("请选择您的航班:");
//	aaa:
		scanf("%s", p);
		for (i = 0; i < MAX_hbxx; i++)
		{
			if (strcmp(p,data[i].hbh)==0)
			{
				if (data[i].p_num == 0)
				{
					printf("该航班没票了\n");
					printf("1、重新选择航班\n");
					printf("2、退出\n");
					scanf("%d", &n);
					if (n == 1)
					{
						goto aaa;
					}
					else if (n == 2)
					{
						return;
					}
					else
					{
						printf("输入错误，自动退出\n");
						return;
					}
				}
				else
				{
					printf("请输入名字\n");
					scanf("%s", lname);
					printf("请输入证件号:\n");
					scanf("%s", lcard);
					printf("请输入电话号:\n");
					scanf("%s", ltell);
					printf("请选择：\n");
					printf("0:头等舱\n");
					printf("1:经济舱\n");
					scanf("%d",&m);
					if(m==0)
					{
						//printf("请输入购票数");
					//	scanf("%d", &num);
						printf("确认购票请支付%d元,请按1确认:", data[i].dprice);
						CHE[i].price = data[i].dprice;
					}
					if(m==1)
					{
					//	printf("请输入购票数");
					//	scanf("%d", &num);
						printf("确认购票请支付%d元,请按1确认:", data[i].gprice );
						CHE[i].price = data[i].gprice;
					}
					scanf("%d", &s);
					if (s == 1)
					{
						printf("购票成功!"); 
					//	temp=num;
						data[i].p_num --;
						strcpy(CHE[count].name, lname);
						strcpy(CHE[count].id, lcard);
						strcpy(CHE[count].tell, ltell);
					//	CHE[i].price = data[i].dprice*num;
						strcpy(CHE[i].hbh, p);
						strcpy(data[i].hbh, p);
						count++;
					//	count=i;   
				    }
				}
				

			}
		}
		
	}
	
	printf("\n");
	if (w == 0)
	{
		printf("没找到你查询的航班\n");
	}
}

else
{
	printf("请在登录以后再订票\n");
}
 
}



//  用户注册
void zhuce() 
{
	int i=0;
	char id,name;
	char ASD[50];
	char ASDF[50];
	char AS[50];
	printf("请输入id：");
	scanf("%s",ASD);
	strcpy(CHE[i].id,ASD);
	printf("请输入name:");
	scanf("%s",ASDF); 
	strcpy(CHE[i].name,ASDF);
	printf("请输入电话：");
	scanf("%s",AS);
	strcpy(CHE[i].tell,AS);
	
	printf("注册成功已经自动转到登录界面\n") ;
	denglu(); 
}



// 用户登录
void denglu() 
{
	if(flag==0) 
	{
		int i;
		int time=0;
		while(time<3)
		{
			char QWE[50];
			char QWER[50];
			printf("请登录：\n");
			printf("请输入账号：");
			scanf("%s",QWE);
			printf("请输入密码:");
			scanf("%s",QWER); 
			for(i=0;i<MAX_Passenger;i++)
			{
				if(strcmp(CHE[i].name,QWER)==0 && strcmp(CHE[i].id,QWE)==0)	
				{
					printf("==登录成功!==\n");
					flag=1;
					return; 
				}
				else if(i==MAX_Passenger-1)
				{
					printf("输入错误\n");
					time++;
				}

			}
	
		}
		flag==-1;
		printf("用户已被锁定，请前往注册或者找工作人员\n"); 
	}
	
	else if(flag==1)
	{
		printf("你已成功登录！\n"); 
	}
	
	else
	{
		printf("户已被锁定，请前往注册或者找工作人员");
	}
} 



//打印订单
void dayin()
{
	int i=0,j=0;
	char hangbanhao[20]="";
	if(flag==1)
	{
		if(flag2==0)
		{
			printf("输入航班号：\n");
			scanf("%s",hangbanhao);
			for(i=0;i<MAX_hbxx;i++)
			{
		
				if(strcmp(data[i].hbh,hangbanhao)==0)
				{
					while(site[sitenum]!='0')
					{
						sitenum++;
					}
					site[sitenum]=1;
					for(j=0;j<count;j++)
					{		
						printf("姓名:%s   身份证号:%s   电话号:%s     起点:%s    终点:%s    座位号:%c%d    价格:%d\n",CHE[j].name,CHE[j].id,CHE[j].tell,data[i].start,data[i].end,sitee[sitenum],sitenum,CHE[j].price);
						sitenum++;
						//return ;
					}	
				}
			//	else
			//	{
			//		printf("没有相关订单信息：\n");
			//		break; 
			//	}
			}
		}
		else
		{
			printf("没有订单信息\n");
		}
	}
	
	else
	{
		printf("您还未登录，请前往登录!\n");
	}
} 



// 退票 
void tuipiao()
{
	if(flag==1)
	{	
		int n=0,i=0;
		char hbh[18]; 
		printf("确认要退票吗？\n");
		printf("1:确认\n");
		printf("0:退出\n");
		scanf("%d",&n);
		if(n==1)
		{
			printf("请输入要退的航班号：\n");
			scanf("%s",hbh);
			for(i=0;i<MAX_hbxx;i++)
			{
				if(strcmp(hbh,data[i].hbh)==0)
				{
					data[i].p_num++;
					flag2=1;
					printf("退票成功！\n");
				} 
			}
		}
		else if(n==0)
		{
			return;	
		}		
		
	} 
	else
	{
		printf("您还未登录，请前往登录！\n");
	}
} 
 












