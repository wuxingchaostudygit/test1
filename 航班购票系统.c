#include<stdio.h>
#include<string.h>  
#include<stdlib.h>
#define MAX_hbxx 18
#define MAX_ckxx 18
#define MAX_Passenger 20


//  �ṹ�嶨�� 

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
	char hbh[9];//�����
	char start[20];//��ɵ�
	char end[20];//Ŀ�ĵ�
	char tbegin[20];//���ʱ��
	char tover[20];//����ʱ��
	int p_num;//Ʊ��
	int gprice;//ͷ�Ȳ�Ʊ��
	int dprice;
}data[100];





// ȫ�ֱ���

int flag=0; 
int flag2=0;
int temp=0;
int count=0;
char site[50]="11001111010000101010";
char sitee[50]="AAAAAAAAAAAAAAAAAAAAAAAA";
int sitenum=0;


//���������� 
void menu1();
void init();
void liulan();
void zhuce();
void denglu();
void dingpiao();
void chaxun();
void dayin();
void tuipiao(); 


//������ 
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

   
// ϵͳ��ʼ��
//void init()
//{
	/*	strcpy(INF[0].hbh,"ch111");strcpy(INF[0].start,"����");strcpy(INF[0].end,"����");strcpy(INF[0].tbegin,"8��00");strcpy(INF[0].tover,"10��00");strcpy(INF[0].jprice,"1000");strcpy(INF[0].tprice,"2000");
		strcpy(INF[1].hbh,"ch122");strcpy(INF[1].start,"����");strcpy(INF[1].end,"����");strcpy(INF[1].tbegin,"12��00");strcpy(INF[1].tover,"14��00");strcpy(INF[1].jprice,"900");strcpy(INF[1].tprice,"1800");
		strcpy(INF[2].hbh,"ch133");strcpy(INF[2].start,"����");strcpy(INF[2].end,"����");strcpy(INF[2].tbegin,"16��00");strcpy(INF[2].tover,"18��00");strcpy(INF[2].jprice,"800");strcpy(INF[2].tprice,"1600");
		strcpy(INF[3].hbh,"ch211");strcpy(INF[3].start,"����");strcpy(INF[3].end,"˫��");strcpy(INF[3].tbegin,"8��00");strcpy(INF[3].tover,"10��00");strcpy(INF[3].jprice,"1000");strcpy(INF[3].tprice,"2000");		
		strcpy(INF[4].hbh,"ch222");strcpy(INF[4].start,"����");strcpy(INF[4].end,"˫��");strcpy(INF[4].tbegin,"12��00");strcpy(INF[4].tover,"14��00");strcpy(INF[4].jprice,"1100");strcpy(INF[4].tprice,"2100");	
		strcpy(INF[5].hbh,"ch233");strcpy(INF[5].start,"����");strcpy(INF[5].end,"˫��");strcpy(INF[5].tbegin,"16��00");strcpy(INF[5].tover,"18��00");strcpy(INF[5].jprice,"1100");strcpy(INF[5].tprice,"2100");
		strcpy(INF[6].hbh,"ch311");strcpy(INF[6].start,"����");strcpy(INF[6].end,"����");strcpy(INF[6].tbegin,"8��00");strcpy(INF[6].tover,"10��00");strcpy(INF[6].jprice,"1100");strcpy(INF[6].tprice,"2200");
		strcpy(INF[7].hbh,"ch322");strcpy(INF[7].start,"����");strcpy(INF[7].end,"����");strcpy(INF[7].tbegin,"12��00");strcpy(INF[7].tover,"14��00");strcpy(INF[7].jprice,"1000");strcpy(INF[7].tprice,"2300");
		strcpy(INF[8].hbh,"ch333");strcpy(INF[8].start,"����");strcpy(INF[8].end,"����");strcpy(INF[8].tbegin,"16��00");strcpy(INF[8].tover,"18��00");strcpy(INF[8].jprice,"1100");strcpy(INF[8].tprice,"2000");
		strcpy(INF[9].hbh,"ch411");strcpy(INF[9].start,"����");strcpy(INF[9].end,"����");strcpy(INF[9].tbegin,"8��00");strcpy(INF[9].tover,"10��00");strcpy(INF[9].jprice,"1300");strcpy(INF[9].tprice,"2200");
		strcpy(INF[10].hbh,"ch422");strcpy(INF[10].start,"����");strcpy(INF[10].end,"����");strcpy(INF[10].tbegin,"8��00");strcpy(INF[10].tover,"10��00");strcpy(INF[10].jprice,"1300");strcpy(INF[10].tprice,"2000");
		strcpy(INF[11].hbh,"ch433");strcpy(INF[11].start,"����");strcpy(INF[11].end,"����");strcpy(INF[11].tbegin,"8��00");strcpy(INF[11].tover,"10��00");strcpy(INF[11].jprice,"1000");strcpy(INF[11].tprice,"2100");
		strcpy(INF[12].hbh,"ch511");strcpy(INF[12].start,"����");strcpy(INF[12].end,"·��");strcpy(INF[12].tbegin,"8��00");strcpy(INF[12].tover,"10��00");strcpy(INF[12].jprice,"1400");strcpy(INF[12].tprice,"2400");
		strcpy(INF[13].hbh,"ch522");strcpy(INF[13].start,"����");strcpy(INF[13].end,"·��");strcpy(INF[13].tbegin,"8��00");strcpy(INF[13].tover,"10��00");strcpy(INF[13].jprice,"1000");strcpy(INF[13].tprice,"2000");
		strcpy(INF[14].hbh,"ch533");strcpy(INF[14].start,"����");strcpy(INF[14].end,"·��");strcpy(INF[14].tbegin,"8��00");strcpy(INF[14].tover,"10��00");strcpy(INF[14].jprice,"1050");strcpy(INF[14].tprice,"2300");
		strcpy(INF[15].hbh,"ch611");strcpy(INF[15].start,"����");strcpy(INF[15].end,"�д�");strcpy(INF[15].tbegin,"8��00");strcpy(INF[15].tover,"10��00");strcpy(INF[15].jprice,"1600");strcpy(INF[15].tprice,"2000");
		strcpy(INF[16].hbh,"ch622");strcpy(INF[16].start,"����");strcpy(INF[16].end,"�д�");strcpy(INF[16].tbegin,"8��00");strcpy(INF[16].tover,"10��00");strcpy(INF[16].jprice,"1000");strcpy(INF[16].tprice,"2000");
		strcpy(INF[17].hbh,"ch633");strcpy(INF[17].start,"����");strcpy(INF[17].end,"�д�");strcpy(INF[17].tbegin,"8��00");strcpy(INF[17].tover,"10��00");strcpy(INF[17].jprice,"1070");strcpy(INF[17].tprice,"2100");
}*/

void init()
{
	int i=0;
	FILE* hbxx = fopen("plane.txt", "r");// ��ȡ�ڴ��е����� 
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
  
// ���˵� 
  void menu1()
{
	printf("********************************\n");
	printf("*  0:��¼                *\n");           //  ��¼�ɹ��Ժ���Ҫɾ�� ��¼ �Լ�ע������ѡ�� 
	printf("*  1:���������Ϣ        *\n");
	printf("*  2:��ѯ��Ϣ            *\n");
	printf("*  3:��Ʊ                *\n");
	printf("*  4:��ӡ����            *\n");
	printf("*  5:��Ʊ                *\n");
	printf("*  6:ע��                *\n");
	printf("*  7:�˳�                *\n"); 
	
	printf("********************************\n");
	printf("====������ÿ��ѡ��ǰ�߶�Ӧ������====\n");
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


// ��ѯ��Ϣ 
void chaxun()
{

    if(flag == 1)	//����Ѿ���¼
    {
  		int n,i=0;
  		char didian[10],hbh[10],enter_name[20];
		printf("====������ÿ��ѡ��ǰ�߶�Ӧ������====\n");
		printf("1:���ִ�ص��ѯ��ѡ���\n");
		printf("2:������Ų�ѯ��ѡ���\n");
	//	printf("3:��ѯ�ÿ������Ϣ\n");
		scanf("%d",&n);
		if (n==1)
		{
			printf("������ִ�ص㣺\n");
			scanf("%s",didian);
			printf("�����   ��ɻ���   �������   ���ʱ��   ����ʱ��  ʣ��Ʊ��\n");
			for (i = 0; i < MAX_hbxx; i++)
			{
				if (strcmp(didian, data[i].end) == 0)
				{
					printf("%8s   %8s   %10s   %8s   %8s   %d\n", data[i].hbh, data[i].start, data[i].end, data[i].tbegin, data[i].tover,data[i].p_num);
				}
			//	else if(i==MAX_hbxx-1)
			//	{
			//		printf("û�иú�����Ϣ�����Զ��˳�\n");
			//		break;
			//	}
		   	}
		}
		else if(n==2)
		{
			printf("�����뺽��ţ�\n");
			scanf("%s",hbh);
			printf("�����   ��ɻ���   �������   ���ʱ��   ����ʱ��  ʣ��Ʊ��\n");
			for (i = 0; i < MAX_hbxx; i++)
			{
				if (strcmp(hbh, data[i].hbh) == 0)
				{
					printf("%8s   %8s   %10s   %8s   %8s   %d\n", data[i].hbh, data[i].start, data[i].end, data[i].tbegin, data[i].tover,data[i].p_num);
				}
			//	else
			//	{
			//		printf("û�иú�����Ϣ�����Զ��˳�\n");
			//		break;
			//	}		
			} 
		   			
		}
	/*	else if(n==3)
		{
			printf("������Ҫ��ѯ��������\n");
			scanf("%s",enter_name);
			for(i=0; i<MAX_Passenger; i++)
      	  	{
           		if(strcmp(CHE[i].name,enter_name)==0)
           		{
           	   		printf("���֤��:%s, ����:%s, �绰:%s\n",CHE[i].id,CHE[i].name,CHE[i].tell);
                	//break;
            	}
				else
				{
					printf("û�д��ˣ����Զ��˳�\n");
					break;
				}		
			} 
		}*/
		
	}
    else
    { 
        printf("�ڲ�ѯ��Ϣ֮ǰ���¼\n");
    }
}

  
// ��ʾ������Ϣ�� 
void liulan()
{
	if(flag == 1)
	{ 
		int i = 0;
		for (i = 0; i < MAX_hbxx; i++)
		{
			printf("�����:%8s   ��ɻ���:%8s   �������:%10s   ���ʱ��:%9s   ����ʱ��:%8s  ��Ʊ:%5d  ���òռ۸�:%3d  ͷ�Ȳղռ۸�:%8d\n", data[i].hbh, data[i].start, data[i].end, data[i].tbegin, data[i].tover,data[i].p_num, data[i].gprice, data[i].dprice);
		}
	} 
	else
    { 
        printf("���ȵ�¼��\n");
    }
	
	 
}



//��Ʊ 
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
	printf("������Ҫǰ����Ŀ�ĵأ�");
	scanf("%s", a_end);
	printf("�����   ��ɻ���   �������   ���ʱ��   ����ʱ��  ʣ��Ʊ��\n");
aaa:for (i = 0; i < MAX_hbxx; i++) {
		if (strcmp(a_end, data[i].end) == 0)
		{
			printf("%8s   %8s   %10s   %8s   %8s   %d\n", data[i].hbh, data[i].start, data[i].end, data[i].tbegin, data[i].tover,data[i].p_num);
			w = 1;
		}
	}
	if (w != 0)
	{
		printf("��ѡ�����ĺ���:");
//	aaa:
		scanf("%s", p);
		for (i = 0; i < MAX_hbxx; i++)
		{
			if (strcmp(p,data[i].hbh)==0)
			{
				if (data[i].p_num == 0)
				{
					printf("�ú���ûƱ��\n");
					printf("1������ѡ�񺽰�\n");
					printf("2���˳�\n");
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
						printf("��������Զ��˳�\n");
						return;
					}
				}
				else
				{
					printf("����������\n");
					scanf("%s", lname);
					printf("������֤����:\n");
					scanf("%s", lcard);
					printf("������绰��:\n");
					scanf("%s", ltell);
					printf("��ѡ��\n");
					printf("0:ͷ�Ȳ�\n");
					printf("1:���ò�\n");
					scanf("%d",&m);
					if(m==0)
					{
						//printf("�����빺Ʊ��");
					//	scanf("%d", &num);
						printf("ȷ�Ϲ�Ʊ��֧��%dԪ,�밴1ȷ��:", data[i].dprice);
						CHE[i].price = data[i].dprice;
					}
					if(m==1)
					{
					//	printf("�����빺Ʊ��");
					//	scanf("%d", &num);
						printf("ȷ�Ϲ�Ʊ��֧��%dԪ,�밴1ȷ��:", data[i].gprice );
						CHE[i].price = data[i].gprice;
					}
					scanf("%d", &s);
					if (s == 1)
					{
						printf("��Ʊ�ɹ�!"); 
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
		printf("û�ҵ����ѯ�ĺ���\n");
	}
}

else
{
	printf("���ڵ�¼�Ժ��ٶ�Ʊ\n");
}
 
}



//  �û�ע��
void zhuce() 
{
	int i=0;
	char id,name;
	char ASD[50];
	char ASDF[50];
	char AS[50];
	printf("������id��");
	scanf("%s",ASD);
	strcpy(CHE[i].id,ASD);
	printf("������name:");
	scanf("%s",ASDF); 
	strcpy(CHE[i].name,ASDF);
	printf("������绰��");
	scanf("%s",AS);
	strcpy(CHE[i].tell,AS);
	
	printf("ע��ɹ��Ѿ��Զ�ת����¼����\n") ;
	denglu(); 
}



// �û���¼
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
			printf("���¼��\n");
			printf("�������˺ţ�");
			scanf("%s",QWE);
			printf("����������:");
			scanf("%s",QWER); 
			for(i=0;i<MAX_Passenger;i++)
			{
				if(strcmp(CHE[i].name,QWER)==0 && strcmp(CHE[i].id,QWE)==0)	
				{
					printf("==��¼�ɹ�!==\n");
					flag=1;
					return; 
				}
				else if(i==MAX_Passenger-1)
				{
					printf("�������\n");
					time++;
				}

			}
	
		}
		flag==-1;
		printf("�û��ѱ���������ǰ��ע������ҹ�����Ա\n"); 
	}
	
	else if(flag==1)
	{
		printf("���ѳɹ���¼��\n"); 
	}
	
	else
	{
		printf("���ѱ���������ǰ��ע������ҹ�����Ա");
	}
} 



//��ӡ����
void dayin()
{
	int i=0,j=0;
	char hangbanhao[20]="";
	if(flag==1)
	{
		if(flag2==0)
		{
			printf("���뺽��ţ�\n");
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
						printf("����:%s   ���֤��:%s   �绰��:%s     ���:%s    �յ�:%s    ��λ��:%c%d    �۸�:%d\n",CHE[j].name,CHE[j].id,CHE[j].tell,data[i].start,data[i].end,sitee[sitenum],sitenum,CHE[j].price);
						sitenum++;
						//return ;
					}	
				}
			//	else
			//	{
			//		printf("û����ض�����Ϣ��\n");
			//		break; 
			//	}
			}
		}
		else
		{
			printf("û�ж�����Ϣ\n");
		}
	}
	
	else
	{
		printf("����δ��¼����ǰ����¼!\n");
	}
} 



// ��Ʊ 
void tuipiao()
{
	if(flag==1)
	{	
		int n=0,i=0;
		char hbh[18]; 
		printf("ȷ��Ҫ��Ʊ��\n");
		printf("1:ȷ��\n");
		printf("0:�˳�\n");
		scanf("%d",&n);
		if(n==1)
		{
			printf("������Ҫ�˵ĺ���ţ�\n");
			scanf("%s",hbh);
			for(i=0;i<MAX_hbxx;i++)
			{
				if(strcmp(hbh,data[i].hbh)==0)
				{
					data[i].p_num++;
					flag2=1;
					printf("��Ʊ�ɹ���\n");
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
		printf("����δ��¼����ǰ����¼��\n");
	}
} 
 












