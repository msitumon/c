#include<stdio.h>
#include<string.h>
int main(){
    //Manage the attendance of n employees of a company.
    int i,n,choice,flag=0;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    int attend[n];
    char name[n][50];
    for(i=0; i<n; i++){
        printf("Enter name of employee %d: ",i+1);
        scanf("%s",name[i]);
        attend[i]=0;
    }
    printf("\n\nEmployee attendance management system\n");
    printf("1. Check absentees.\n");
    printf("2. Mark attendance for an employee.\n");
    printf("3. Display all employee attendance.\n");
    printf("4. Exit.\n\n");
    for( ; ; ){
        printf("Enter your choice: ");
        scanf("%d",&choice);
        if(choice==1){
            flag=0;
            for(i=0; i<n; i++){
                if(attend[i]==0){
                    printf("%s\n",name[i]);
                    flag=1;
                }
            }
            if(flag==0){
                printf("All employees are present.\n");
            }
        }
        else if(choice==2){
            flag=0;
            char attendName[50];
            printf("Enter employee name to mark attend: ");
            scanf("%s",attendName);
            for(i=0; i<n; i++){
                if(strcmp(name[i], attendName)==0){
                    printf("Enter attendance for %s (1 for present and 0 for absent): ",attendName);
                    scanf("%d",&attend[i]);
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                printf("Employee not found.\n");
            }
        }
        else if(choice==3){
            printf("Employee Attendance List: \n");
            for(i=0; i<n; i++){
                if(attend[i]){
                    printf("%s - Present\n",name[i]);
                }
                else{
                    printf("%s - Absent\n",name[i]);
                }
            }
        }
        else if(choice==4){
            printf("Exiting program. Thank you!\n");
            break;
        }
        else{
            printf("Invalid choice! Please try again.\n");
        }
            printf("\n");
    }
return 0;
}