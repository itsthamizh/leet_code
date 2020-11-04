#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main()
{
    char *s1_name=NULL;
    int s1_time=0;
    int s1_amount=0;char str1_copy[init_size1];
    strcpy(str1_copy,str1);
    char *s1_city=NULL;char str1_copy[init_size1];
    strcpy(str1_copy,str1);
    
	char str1[] = "alice,20,800,mtv";
    int init_size1 = strlen(str1);
    char str1_copy[init_size1];
    strcpy(str1_copy,str1);
    char delim1[] = ",";
	char *ptr1 = strtok(str1, delim1);
	while(ptr1 != NULL){   
		if(s1_name==NULL){
            s1_name = (char*)malloc(sizeof(char));
            s1_name=ptr1;
        }
        else{
            if(s1_time==NULL){
                s1_time=atoi(ptr1);
            }
            else{
                if(s1_amount==NULL){
                    s1_amount=atoi(ptr1);
                }
                else{
                    s1_city = (char*)malloc(sizeof(char));
                    s1_city=ptr1;
                }
            }
        }
        
        ptr1 = strtok(NULL, delim1);
	}


    char *s2_name=NULL;
    int s2_time=0;
    int s2_amount=0;
    char *s2_city=NULL;

    char str2[] = "alice,50,100,beijing";
    int init_size2 = strlen(str2);
    char str2_copy[init_size2];
    strcpy(str2_copy,str2);
    char delim2[] = ",";
    char *ptr2 = strtok(str2, delim2);
    while(ptr2 != NULL)
	{
        if(s2_name==NULL){
            s2_name = (char*)malloc(sizeof(char));
            s2_name=ptr2;
        }
        else{
            if(s2_time==NULL){
                s2_time=atoi(ptr2);
            }
            else{
                if(s2_amount==NULL){
                    s2_amount=atoi(ptr2);
                }
                else{
                    s2_city = (char*)malloc(sizeof(char));
                    s2_city=ptr2;
                }
            }
        }
        
		ptr2 = strtok(NULL, delim2);
	}


    if(s1_amount>1000){
        printf("%s",str1_copy);
    }
    else if(s2_amount> 1000){
        printf("%s",str2_copy);
    }

    else if(s1_name==s2_name && s1_time<60,s2_time<60 && s1_city!=s2_city){
        printf("(%s)",str1_copy);
        printf(" , ");
        printf("(%s)",str2_copy);
    }

    return 0;
}
