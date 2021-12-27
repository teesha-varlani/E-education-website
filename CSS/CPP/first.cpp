# include<stdio.h> 
#include<conio.h> 
struct information 
{ 
 char name[50];  
 int Roll_no;  float marks; 
}; 
void main() 
{ 
 	struct information I;  	
     printf("Enter The Student Name:");  	
     scanf("%s",I.name);  	
     printf("Enter The Roll No:");  	
     scanf("%d",&I.Roll_no);  	
     printf("Enter the Total Marks:");  	
     scanf("%f",&I.marks);  	
     getch(); 
} 
