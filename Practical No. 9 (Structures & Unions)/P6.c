#include<stdio.h>
#include<string.h>

struct Hotel
{
    char name[50];
    char add[50];
    char grade;
    int avg_cost;
    int total_rooms;
};

int main()
{   
    struct Hotel a[5];
    
    strcpy(a[0].name,"Signiel Seoul");
    strcpy(a[0].add,"Songpa-gu");
    a[0].grade='A';  
    a[0].avg_cost=40000; 
    a[0].total_rooms=400;
    

    strcpy(a[1].name,"Four Seasons Hotel Seoul");
    strcpy(a[1].add,"Jongno-gu");
    a[1].grade='A';  
    a[1].avg_cost=38000; 
    a[1].total_rooms=410;    
    
    strcpy(a[2].name,"Lotte Hotel Jeju");
    strcpy(a[2].add,"Seogwipo-si, Jeju-do,");
    a[2].grade='B';  
    a[2].avg_cost=24000; 
    a[2].total_rooms=370;
    
    strcpy(a[3].name,"Josun Palace Hotel");
    strcpy(a[3].add,"Gangnam-gu");
    a[3].grade='C';  
    a[3].avg_cost= 30000; 
    a[3].total_rooms=310;    
    
    strcpy(a[4].name,"Skybay Hotel Gyeongpo");
    strcpy(a[4].add,"Gangneung-si, Gangwon-do");
    a[4].grade='B';  
    a[4].avg_cost=23000; 
    a[4].total_rooms=200;


    int i,j;
    struct Hotel w;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i].avg_cost<a[j].avg_cost)
            {
                w=a[j];
                a[j]=a[i];
                a[i]=w;
            }
        }
    }

    
    printf("Finding Hotels of your preference:\n");
    printf("Enter Grade(A,B,C):");
    char g;
    scanf(" %c",&g);
    printf("Hotels with grade %c:\n",g);
    for(i=0;i<5;i++)
    {   
        if(a[i].grade==g)
        {
            printf("Hotel name:%s\tAvg. Cost:%d\n",a[i].name,a[i].avg_cost);
        }
    }

    int c;
    printf("\nFinding Hotels of your Budget:\n");
    printf("Enter Your Budget:");scanf("%d",&c);
    printf("Hotels in your Budget:\n");
    for(i=0;i<5;i++)
    {   
        if(a[i].avg_cost<=c)
        printf("Hotel name:%s\tAvg. Cost:%d\n",a[i].name,a[i].avg_cost);
    }

    printf("\nHotels in order of their charges\n");
    for(i=0;i<5;i++)
    { 
        printf("Hotel name:%s\tAvg. Cost:%d\n",a[i].name,a[i].avg_cost);
    }
}
