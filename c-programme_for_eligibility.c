#include<stdio.h>

int main()
{
    float class_attendance;
    float average_marks;
    int eligible_for_exam=1;
    printf("Enter attendance:");
    scanf("%f",&class_attendance);
    
    printf("Enter average_marks:");
    scanf("%f",&average_marks);
    
    if(class_attendance>=75){
    eligible_for_exam=1;
    }
    if(average_marks>=40.0){
    eligible_for_exam=1;
    }
    if(eligible_for_exam){
    printf("student is eligible for the  exam.\n");
    }else{
    printf("student is not eligible for exam.\n");
    }
    
    return 0;
}
