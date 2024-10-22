// C structures
#include <stdio.h>
#include<string.h>

struct student{
    char name[20];
    char reg_no[16];
    int ID;
    float marks;
    int phone_no;
    char email[30];
}student1, student2;
int main(){
    //struct student,student1,student2
    //initializing variable(. operator)
    strcpy(student1.name, "monica");
    strcpy(student1.reg_no, "BCS-05-0002/2024");
    strcpy(student1.email, "okechmonica@gmail.com");
    student1.ID = 42669075;
    student1.phone_no = 706229616;
    student1.marks = 72.5;
    
    printf("Name: %s\n", student1.name);
    printf("Reg_no: %s\n", student1.reg_no);
    printf("ID is: %d\n", student1.ID);
    printf("Phone_no: %d\n", student1.phone_no);
    printf("Marks: %lf\n", student1.marks);
    printf("Email: %s\n", student1.email);
    
    return 0;
}
