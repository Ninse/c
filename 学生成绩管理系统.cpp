/*
ѧ���ɼ�����ϵͳV2.0 
���ߣ���С��
����ļ�˵����
<classnum.txt>��¼�γ���Ŀ 
<class.txt>��¼�γ����� 
<num.txt>��¼ѧ����Ŀ 
<student.txt>��¼ѧ���ɼ�
<if.txt>��¼�����Ƿ���Ҫ��ʼ��
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
///////////////////////��ʼ������ϵͳ///////////////
int ope()
{
	int n,m=0,k,s;
	char c[100];
	printf("------------��ʼ������ϵͳ��Ŀ(����һ������ʱ����)---------------\n"); 
	
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
	/*��һ�����У������������TXT�ļ�*/	
	  FILE *fx;
	  fx=fopen("num.txt","r+");	
	  fprintf(fx,"0");
	  fclose(fx);
	
	
	
	printf("\n\n\n");
	printf("\t��������Ҫ���ü��ſγ���Ŀ:"); 
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
		printf("\t��������Ҫ���õĵ�%d�ſγ����֣�",m);
		
		scanf("%s",&c);
		printf("\n\n");
		fprintf(fa,"%s\t",c);
	
	}/*�γ�������Ϣ����*/ 
	fclose(fa);
	fa=fopen("class.txt","r+") ;
	system("cls");
	printf("------------------��ʼ����Ϣȷ��----------------------\n\n");
	printf("\t\t�����趨�Ŀγ���ĿΪ:%d\n\n",s);
	for(k=1;k<=s;k++)
	{
		fscanf(fa,"%s",&c);
		printf("\t\t��%d�ſγ̵�����Ϊ%s\n\n",k,c);
	}
	printf("������ָ�ȷ��(Y)�����³�ʼ��(N)") ;
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
	
	
	
	
 }//�γ�������Ϣȷ�� 
 
	
	
////////////////////////////////�˵�////////////////////////////// 
int menu()
{
	system("cls");
	printf("\t\t-------------ѧ���ɼ�����ϵͳ---------\n\n\n"); 
    printf("\t\t---------------��0���˳�ϵͳ----------\n\n\n");
	printf("\t\t---------------��1�����ѧ��----------\n\n\n");
	printf("\t\t---------------��2����ʾѧ��----------\n\n\n");
	printf("\t\t---------------��3���޸�ѧ��----------\n\n\n");
	printf("\t\t---------------��4��ɾ��ѧ��----------\n\n\n");
	printf("\t\t---------------��9����������----------\n\n\n");
	
}
//ѧ����ʾ������ʾ��// 
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
/*��ȡ�γ���Ŀģ��*/
FILE *fc;
fc=fopen("classnum.txt","r+");
fscanf(fc,"%d",&h);
fclose(fc);

////////////////

    

	FILE *fp;
	fp=fopen("student.txt","r+");

printf("ѧ��\t����"); 
	FILE *fd;
fd=fopen("class.txt","r+");
for(z=0;z<h;z++)
{

	fscanf(fd,"%s",&j);
	printf("\t%s",j);
	
}
printf("\tƽ���ɼ�\n");
 printf("--------------------------------------------------------------------------\n");
  
/*�������ģ��*/	
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
/////////////////////////////ѧ����ʾ//////////////////////////
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
/*��ȡ�γ���Ŀģ��*/
FILE *fc;
fc=fopen("classnum.txt","r+");
fscanf(fc,"%d",&h);
fclose(fc);

////////////////

    

	FILE *fp;
	fp=fopen("student.txt","r+");

printf("ѧ��\t����"); 
	FILE *fd;
fd=fopen("class.txt","r+");
for(z=0;z<h;z++)
{

	fscanf(fd,"%s",&j);
	printf("\t%s",j);
	
}
printf("\tƽ���ɼ�\n");
 printf("--------------------------------------------------------------------------\n");
  
/*�������ģ��*/	
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
	//������ģ�� 	
printf("�Ƿ�ִ�������ܣ�Y�����߻ص������棨N��\n"); 
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

printf("ѧ��\t����"); 

fd=fopen("class.txt","r+");
for(z=0;z<h;z++)
{

	fscanf(fd,"%s",&j);
	printf("\t%s",j);
	
}
printf("\tƽ���ɼ�\n");
 printf("------------------------�����Ժ�-------------------------------------\n");
 
 
 /*�����������ģ��*/	
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
 //////////////////////////ѧ��ɾ��/////////////
 int del()
 {

 	
 	shows();
 	
 	
 	double k;
 	printf("������Ҫɾ����ѧ��ѧ��:");
 	scanf("%lf",&k);
 	
	 int n,i,j,l,h;
	FILE *fa;
    fa=fopen("num.txt","r+");
    fscanf(fa,"%d",&n);	
    
    /*��ȡ�γ���Ŀģ��*/
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
 	/*���ļ�*/
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
 //////////////////////////////�޸�ѧ��////////////////////////////// 
 
 int fix()
 {
 	char s[1000];
    shows(); 
 	double k;
 	printf("������Ҫ�޸ĵ�ѧ��ѧ��:");
 	scanf("%lf",&k);
 	
	 int n,i,j,l,h;
	FILE *fa;
    fa=fopen("num.txt","r+"); 
    fscanf(fa,"%d",&n);	
    
/*��ȡ�γ���Ŀģ��*/
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
 	/*���ļ�*/
 	    for(i=1;i<=n;i++)
    {
    	if(k==studenta[i].ID)
    	{
    		j=i;
			break;
		}
	}

	fp=fopen("student.txt","a+");
	printf("������ѧ��ѧ��:");
	scanf("%lf",&studenta[j].ID) ;
	getchar();
	printf("������ѧ������:");
	scanf("%s",&studenta[j].name) ;
	getchar();
	
	
	FILE *fc;
fc=fopen("class.txt","r+");
	for(l=0;l<h;l++)
	{
	fscanf(fc,"%s",&s);
	printf("������ѧ��%s�ɼ�:",s);
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
 	
 	

/////////////////////////////ѧ�����/////////////////////////// 
int add()
{
	system("cls");
	double k;
int number,i,m,j,h;
char s[100];
	FILE *fp;
	
/*��ȡ�γ���Ŀģ��*/
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
	printf("������ѧ��ѧ��:\n");
	scanf("%lf",&students.ID) ;

	printf("������ѧ������:\n");
	scanf("%s",&students.name) ;
	
	 fprintf(fp,"%lf\t%s",students.ID,students.name);
	 fc=fopen("class.txt","r+");
for(h=0;h<j;h++)
     {
     	fscanf(fc,"%s",&s);
	printf("������ѧ��%s�ɼ�:\n",s);
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
      
      

  printf("�Ƿ�������룿��Y/N��");
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
	printf("\t\t�Ƿ������������ݣ��˲���������������ݣ�\n\n");
	printf("\t\t�γ̳�ʼ��������Ϣ\n\n");
	printf("\t\tѧ��������Ϣ\n\n");
	printf("\t\tѧ�����гɼ�\n\n");
	printf("\t\t����������ת��������ָ��:ȷ��(Y)��ȡ��(N)\n");
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
			printf("�����Ѿ�������Ժ�����˳�") ; 
	}
    printf("\n\n\n");
    system("pause");
    exit(0);
	 
}
///////////////////////////////////////////////////////////


///////////////////////������//////////////////////////////////////// 
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
