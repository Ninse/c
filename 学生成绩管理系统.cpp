/*
学生成绩管理系统V2.0 
作者：汪小祯
相关文件说明：
<classnum.txt>记录课程数目 
<class.txt>记录课程名称 
<num.txt>记录学生数目 
<student.txt>记录学生成绩
<if.txt>记录程序是否需要初始化
*/ 





#include<stdio.h>
#include<process.h>
#include<stdlib.h>
struct student
{
	double ID;
	char name[20];
	double math;
	double english;
	double c;
	double avg;
	double score[1000];
	double scor;
	
};
struct student students;
struct student studenta[1000];
struct student temps;
///////////////////////初始化管理系统///////////////
int ope()
{
	int n,m=0,k,s;
	char c[100];
	printf("------------初始化管理系统节目(仅第一次启动时设置)---------------\n"); 
	
		FILE *fp;
     	FILE *fa1;
     	FILE *fb1;
     	FILE *fc;
     	FILE *fk;
	    fp=fopen("student.txt","w");
		fa1=fopen("num.txt","w"); 
		fk=fopen("if.txt","w"); 
		fclose(fk);
		fclose(fa1);
		fclose(fp);
		fb1=fopen("class.txt","w");
		fc=fopen("classnum.txt","w"); 
		fclose(fb1);
		fclose(fc);              
	/*第一次运行，创建相关所有TXT文件*/	
	  FILE *fx;
	  fx=fopen("num.txt","r+");	
	  fprintf(fx,"0");
	  fclose(fx);
	
	
	
	printf("\n\n\n");
	printf("\t请输入你要设置几门课程数目:"); 
	scanf("%d",&n);
	printf("\n\n");
	
	FILE *fb;
	fb=fopen("classnum.txt","r+");
	fprintf(fb,"%d",n);
	fclose(fb);
	
	
	s=n;
	FILE *fa;
	fa=fopen("class.txt","r+") ;
	while(n--)
	{
		m++;
		printf("\t请输入你要设置的第%d门课程名字：",m);
		
		scanf("%s",&c);
		printf("\n\n");
		fprintf(fa,"%s\t",c);
	
	}/*课程设置信息输入*/ 
	fclose(fa);
	fa=fopen("class.txt","r+") ;
	system("cls");
	printf("------------------初始化信息确认----------------------\n\n");
	printf("\t\t你所设定的课程数目为:%d\n\n",s);
	for(k=1;k<=s;k++)
	{
		fscanf(fa,"%s",&c);
		printf("\t\t第%d门课程的名字为%s\n\n",k,c);
	}
	printf("请输入指令：确认(Y)，重新初始化(N)") ;
	getchar();
     if(getchar()=='N')
     {
     	FILE *fb1;
     	FILE *fc1;
     	FILE *fk1;
	
	
		fk1=fopen("if.txt","w"); 
		fclose(fk1);

		fb1=fopen("class.txt","w");
		fc1=fopen("classnum.txt","w"); 
		fclose(fb1);
		fclose(fc1);
     	return 0;	
	 }
	 else
	
	
	fclose(fa);
	 FILE *fj;
     fj=fopen("if.txt","r+");
     fprintf(fj,"%d",1);
     fclose(fj);
	
	
	
	
 }//课程设置信息确认 
 
	
	
////////////////////////////////菜单////////////////////////////// 
int menu()
{
	system("cls");
	printf("\t\t-------------学生成绩管理系统---------\n\n\n"); 
    printf("\t\t---------------【0】退出系统----------\n\n\n");
	printf("\t\t---------------【1】添加学生----------\n\n\n");
	printf("\t\t---------------【2】显示学生----------\n\n\n");
	printf("\t\t---------------【3】修改学生----------\n\n\n");
	printf("\t\t---------------【4】删除学生----------\n\n\n");
	printf("\t\t---------------【9】重置数据----------\n\n\n");
	
}
//学生显示（仅显示）// 
int shows()
{
	char a[100],j[1000],xa;
	int n,i,h,x,z,score[300],sa,sb,x1,x2;
	double k,f=0.0,temp;
	FILE *fa;
    fa=fopen("num.txt","r+");
    fscanf(fa,"%d",&n);	
    fclose(fa);
system("cls");
/*读取课程数目模块*/
FILE *fc;
fc=fopen("classnum.txt","r+");
fscanf(fc,"%d",&h);
fclose(fc);

////////////////

    

	FILE *fp;
	fp=fopen("student.txt","r+");

printf("学号\t姓名"); 
	FILE *fd;
fd=fopen("class.txt","r+");
for(z=0;z<h;z++)
{

	fscanf(fd,"%s",&j);
	printf("\t%s",j);
	
}
printf("\t平均成绩\n");
 printf("--------------------------------------------------------------------------\n");
  
/*输出数据模块*/	
	for(i=1;i<=n;i++)
    {
    	f=0.0;
	fscanf(fp,"%lf",&studenta[i].ID);
	fscanf(fp,"%s",&studenta[i].name);
	printf("%.0lf\t%s",studenta[i].ID,studenta[i].name);

for(x=0;x<h;x++)
{

	fscanf(fp,"%lf",&studenta[i].score[x]); 
	printf("\t%.2lf",studenta[i].score[x]);
	f+=studenta[i].score[x];
}
  studenta[i].scor=f/h;
  printf("\t%.2lf",f/h);
  printf("\n");

    }

	 	fclose(fp);	
}
/////////////////////////////学生显示//////////////////////////
int show()
{
	char a[100],j[1000],xa;
	int n,i,h,x,z,score[300],sa,sb,x1,x2;
	double k,f=0.0,temp;
	FILE *fa;
    fa=fopen("num.txt","r+");
    fscanf(fa,"%d",&n);	
    fclose(fa);
system("cls");
/*读取课程数目模块*/
FILE *fc;
fc=fopen("classnum.txt","r+");
fscanf(fc,"%d",&h);
fclose(fc);

////////////////

    

	FILE *fp;
	fp=fopen("student.txt","r+");

printf("学号\t姓名"); 
	FILE *fd;
fd=fopen("class.txt","r+");
for(z=0;z<h;z++)
{

	fscanf(fd,"%s",&j);
	printf("\t%s",j);
	
}
printf("\t平均成绩\n");
 printf("--------------------------------------------------------------------------\n");
  
/*输出数据模块*/	
	for(i=1;i<=n;i++)
    {
    	f=0.0;
	fscanf(fp,"%lf",&studenta[i].ID);
	fscanf(fp,"%s",&studenta[i].name);
	printf("%.0lf\t%s",studenta[i].ID,studenta[i].name);

for(x=0;x<h;x++)
{

	fscanf(fp,"%lf",&studenta[i].score[x]); 
	printf("\t%.2lf",studenta[i].score[x]);
	f+=studenta[i].score[x];
}
  studenta[i].scor=f/h;
  printf("\t%.2lf",f/h);
  printf("\n");

    }

	 	fclose(fp);	
	//排序功能模块 	
printf("是否执行排序功能（Y）或者回到主界面（N）\n"); 
scanf("%s",&xa);
if(xa=='N')
{
	return 0;
 } 
 
 for(x1=1;x1<=n;x1++)
 {
 	for(x2=1;x2<=x1;x2++)
 	{
 		if(studenta[x1].scor>studenta[x2].scor)
 		{
 			studenta[999]=studenta[x1];
 			studenta[x1]=studenta[x2];
 			studenta[x2]=studenta[999];
		 }

	 }
 	
 }
 printf("\n\n\n\n\n") ;
 
 
	fp=fopen("student.txt","r+");

printf("学号\t姓名"); 

fd=fopen("class.txt","r+");
for(z=0;z<h;z++)
{

	fscanf(fd,"%s",&j);
	printf("\t%s",j);
	
}
printf("\t平均成绩\n");
 printf("------------------------排序以后-------------------------------------\n");
 
 
 /*输出排序数据模块*/	
	for(i=1;i<=n;i++)
    {
    	f=0.0;
	
	printf("%.0lf\t%s",studenta[i].ID,studenta[i].name);

for(x=0;x<h;x++)
{


	printf("\t%.2lf",studenta[i].score[x]);
	f+=studenta[i].score[x];
}
  studenta[i].scor=f/h;
  printf("\t%.2lf",f/h);
  printf("\n");

    }
   
	
 }
 //////////////////////////学生删除/////////////
 int del()
 {

 	
 	shows();
 	
 	
 	double k;
 	printf("请输入要删除的学生学号:");
 	scanf("%lf",&k);
 	
	 int n,i,j,l,h;
	FILE *fa;
    fa=fopen("num.txt","r+");
    fscanf(fa,"%d",&n);	
    
    /*读取课程数目模块*/
FILE *fc;
fc=fopen("classnum.txt","r+");
fscanf(fc,"%d",&h);
fclose(fc);

////////////////

    
	FILE *fp;
	fp=fopen("student.txt","r+");
    for(i=1;i<=n;i++)
    {
	fscanf(fp,"%lf",&studenta[i].ID);
	fscanf(fp,"%s",&studenta[i].name);
	
	for(l=0;l<h;l++)
{

	fscanf(fp,"%lf",&studenta[i].score[l]);
}
    }
 	/*打开文件*/
 	    for(i=1;i<=n;i++)
    {
    	if(k==studenta[i].ID)
    	{
    		j=i;
			break;
		}
	}

	

	  for(i=j;i<n;i++)
	  {
	  	studenta[i]=studenta[i+1];
	  }



	  	  n--;
      fclose(fa);
      fa=fopen("num.txt","w");	
      fclose(fa);
      fa=fopen("num.txt","r+");	
      fprintf(fa,"%d",n);
      fclose(fa);
      
    fclose(fp);
    fp=fopen("student.txt","w");
      fclose(fp);
    fp=fopen("student.txt","r+");
	      for(i=1;i<=n;i++)
    {
    	fprintf(fp,"%.0lf\t%s",studenta[i].ID,studenta[i].name) ;
         for(l=0;l<h;l++)
         {
         	fprintf(fp,"\t\t%.2lf",studenta[i].score[l]); 	
		 }
		 fprintf(fp,"\n");
   
    }   
	  fclose(fp);
	  
	 
	  
	  


 
  } 
 //////////////////////////////修改学生////////////////////////////// 
 
 int fix()
 {
 	char s[1000];
    shows(); 
 	double k;
 	printf("请输入要修改的学生学号:");
 	scanf("%lf",&k);
 	
	 int n,i,j,l,h;
	FILE *fa;
    fa=fopen("num.txt","r+"); 
    fscanf(fa,"%d",&n);	
    
/*读取课程数目模块*/
FILE *fd;
fd=fopen("classnum.txt","r+");
fscanf(fd,"%d",&h);
fclose(fd);

////////////////

    
	FILE *fp;
	fp=fopen("student.txt","r+");
    for(i=1;i<=n;i++)                            
    {
	fscanf(fp,"%lf",&studenta[i].ID);
	fscanf(fp,"%s",&studenta[i].name);
	
	for(l=0;l<h;l++)
{

	fscanf(fp,"%lf",&studenta[i].score[l]);
}
    }
 	/*打开文件*/
 	    for(i=1;i<=n;i++)
    {
    	if(k==studenta[i].ID)
    	{
    		j=i;
			break;
		}
	}

	fp=fopen("student.txt","a+");
	printf("请输入学生学号:");
	scanf("%lf",&studenta[j].ID) ;
	getchar();
	printf("请输入学生名字:");
	scanf("%s",&studenta[j].name) ;
	getchar();
	
	
	FILE *fc;
fc=fopen("class.txt","r+");
	for(l=0;l<h;l++)
	{
	fscanf(fc,"%s",&s);
	printf("请输入学生%s成绩:",s);
	scanf("%lf",&studenta[j].score[l]) ;
	getchar();
	
     }
      fclose(fc);   


      
    fclose(fp);
    fp=fopen("student.txt","w");
      fclose(fp);
    fp=fopen("student.txt","r+");
	      for(i=1;i<=n;i++)
    {
    	fprintf(fp,"%.0lf\t%s",studenta[i].ID,studenta[i].name) ;
         for(l=0;l<h;l++)
         {
         	fprintf(fp,"\t\t%.2lf",studenta[i].score[l]); 	
		 }
		 fprintf(fp,"\n");
   
    }   
	  fclose(fp);
	  
	 
	  
	  


 
  } 
 	
 	

/////////////////////////////学生添加/////////////////////////// 
int add()
{
	system("cls");
	double k;
int number,i,m,j,h;
char s[100];
	FILE *fp;
	
/*读取课程数目模块*/
FILE *fb;
FILE *fc;
fb=fopen("classnum.txt","r+");
fscanf(fb,"%d",&m);
fclose(fb);
/////////////// 
j=m;
while(1)
{
char b;
fp=fopen("student.txt","a+");
	printf("请输入学生学号:\n");
	scanf("%lf",&students.ID) ;

	printf("请输入学生名字:\n");
	scanf("%s",&students.name) ;
	
	 fprintf(fp,"%lf\t%s",students.ID,students.name);
	 fc=fopen("class.txt","r+");
for(h=0;h<j;h++)
     {
     	fscanf(fc,"%s",&s);
	printf("请输入学生%s成绩:\n",s);
	scanf("%lf",&k) ;
	fprintf(fp,"\t%.1lf",k);	
    }
fprintf(fp,"\n");
fclose(fp);
      
      
      FILE *fa;
	  fa=fopen("num.txt","r+");	
      fscanf(fa,"%d",&number);
      number++;
      fclose(fa);
      fa=fopen("num.txt","w");	
      fclose(fa);
      fa=fopen("num.txt","r+");	
      fprintf(fa,"%d",number);
      fclose(fa);
      
      

  printf("是否继续输入？（Y/N）");
    scanf("%s",&b);
    if(b!='Y')
    {
    break;

    }
    


}
	
}

//////////////////////////////////////////////////////////////////// 
int news()
{
	system("cls");
	char a;
	printf("\t\t是否重置所有数据？此操作将清除以下数据：\n\n");
	printf("\t\t课程初始化设置信息\n\n");
	printf("\t\t学生所有信息\n\n");
	printf("\t\t学生所有成绩\n\n");
	printf("\t\t操作不可逆转，请输入指令:确认(Y)，取消(N)\n");
	scanf("%s",&a);
	if(a=='Y')
	{
	    FILE *fp;
     	FILE *fa;
     	FILE *fb;
     	FILE *fc;
     	FILE *fk;
	    fp=fopen("student.txt","w");
		fa=fopen("num.txt","w"); 
		fk=fopen("if.txt","w"); 
		fclose(fk);
		fclose(fa);
		fclose(fp);
		fb=fopen("class.txt","w");
		fc=fopen("classnum.txt","w"); 
		fclose(fb);
		fclose(fc);
		
	  FILE *fx;
	  fx=fopen("num.txt","r+");	
	  fprintf(fx,"0");
	  fclose(fx);
			printf("数据已经清除，稍后程序将退出") ; 
	}
    printf("\n\n\n");
    system("pause");
    exit(0);
	 
}
///////////////////////////////////////////////////////////


///////////////////////主函数//////////////////////////////////////// 
int main()
{
	int n,k;
	
     FILE *fj;
     fj=fopen("if.txt","r+");
     fscanf(fj,"%d",&k);
     fclose(fj);
     if(k!=1)
   	    ope();
	
	
	
	while(1)
	{
	 menu();

    scanf("%d",&n);
	
	switch(n)
    {
    	case 0:
    	return 0;
    	case 1:
    		add();
    		break;
    	case 2:
    		show();
    		system("pause");
    		break;
        case 3:
            fix(); 
             break;
        case 4:
        	del();
        	break;
        case 9:
        	news();
        	break;
    	default:
    		break;
    	
    	
	}

	}
}
//////////////////////////////////////////////////////////////////
