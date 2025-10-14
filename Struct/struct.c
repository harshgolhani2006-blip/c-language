//struct is a combination of stract data type and class data type.It is out of the main part
#include<stdio.h>
#include<string.h>
struct Address
{
    char street[50];
    char city[50];
    char state[50];
    int pincode;
};
struct student
{
    int id;
    char name[20];
    float marks;
    int age;
    int Rollno;
    int phone;
    int height;
    int weight;
    char email[30];
    char gender[10];
    struct Address addr;
};  
int main(){
    struct student s1;
    {
        printf("Student Details:\n");
        s1.id;
        s1.age;
        s1.marks;
        s1.Rollno;
        s1.phone;
        s1.height;
        s1.weight;
        s1.addr.pincode;
            s1.name;
            s1.email;
            s1.gender;
            s1.addr.street;
            s1.addr.city;
            s1.addr.state;

        printf("Enter name: ");
        scanf("%s",s1.name);
        printf("Enter ID: ");
        scanf("%d",&s1.id);
        printf("Enter Marks: ");
        scanf("%f",&s1.marks);
        printf("Enter Age: ");
        scanf("%d",&s1.age);
        printf("Enter Roll No: ");
        scanf("%d",&s1.Rollno);
        printf("Enter Phone No: ");
        scanf("%d",&s1.phone);
        printf("Enter Height: ");
        scanf("%d",&s1.height);
        printf("Enter Weight: ");
        scanf("%d",&s1.weight);
        printf("Enter Email: ");
        scanf("%s",s1.email);
        printf("Enter Gender:"  );
        scanf("%s",s1.gender);
        printf("Enter Street: ");
        scanf("%s",s1.addr.street);
        printf("Enter City: ");
        scanf("%s",s1.addr.city);
        printf("Enter State: ");
        scanf("%s",s1.addr.state);
        printf("Enter Pincode: ");
        scanf("%d",&s1.addr.pincode);
        printf("\n");
        printf("Student Information:\n");
        printf("ID: %d\n",s1.id);
        printf("Name: %s\n",s1.name);
        printf("Marks: %.2f\n",s1.marks);
        printf("Age: %d\n",s1.age);
        printf("Roll No: %d\n",s1.Rollno);
        printf("Phone No: %d\n",s1.phone);
        printf("Height: %d\n",s1.height);   
        printf("weigth: %d\n",s1.weight);
        printf("Email: %s\n",s1.email );
        printf("Gender:",s1.gender);
        printf("Street: %s\n",s1.addr.street);
        printf("City: %s\n",s1.addr.city);
        printf("State: %s\n",s1.addr.state);
        printf("Pincode: %d\n",s1.addr.pincode);
    };
    return 1;
}