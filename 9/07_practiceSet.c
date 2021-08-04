#include<stdio.h>
#include<string.h>

// q1
// struct vector{
//     int x;
//     int y;
// };

// int main(int argc, char const *argv[]){
//     struct vector v1,v2;
//     v1.x = 31;
//     v1.y = 32;

//     printf("The x is %d and y is %d\n", v1.x, v1.y);

//     v2.x = 45;
//     v2.y = 34;
//     printf("The x is %d and y is %d\n", v2.x, v2.y);
//     return 0;
// }

// Q2
// struct vector{
//     int x;
//     int y;
// };

// struct vector sum(struct vector v1,struct vector v2){
//     struct vector c;
//     c.x = v1.x+v2.x;
//     c.y = v1.y+v2.y;
//     return c;
// }

// int main(int argc, char const *argv[])
// {
//     struct vector v1,v2;
//     v1.x = 21;
//     v1.y = 12;
//     v2.x = 21;
//     v2.y = 12;
//     printf("The x is %d and y is %d\n", v1.x, v1.y);
//     printf("The x is %d and y is %d\n", v2.x, v2.y);
//     printf("The sum of vectors are : %d and %d\n", (sum(v1,v2)).x, (sum(v1,v2)).y);
    
//     return 0;
// }

// Q4
// struct try{
//     int age;
//     int code;
//     int marks;
// };

// int main(int argc, char const *argv[]){
//     struct try e1;
//     struct try *ptr;
//     ptr = &e1;
//     //(*ptr).code = 101; //or you can also write: ptr->code = 101;
//     ptr->code = 101;
//     ptr->age = 16;

//     return 0;
// }

// q5
// typedef struct complex{
//     int complex;
//     int real;
// } comp;

// void display(comp c){
//     printf("The value of real integer is : %d\n", c.real);
//     printf("The value of complex integer is : %d\n", c.complex);
// }

// int main(int argc, char const *argv[]){
//     comp cnums[5];
//     for(int i=0;i<5;i++){
//         printf("Enter the real number for CNUMS[%d] : ", i);
//         scanf("%d", &cnums[i].real);

//         printf("Enter the complex number for CNUMS[%d] : ", i);
//         scanf("%d", &cnums[i].complex);
//     }

//     for(int i=0;i<5;i++){
//         display(cnums[i]);
//     }
//     return 0;
// }

// q6
// typedef struct bank{
//     int acc_no;
//     char name[20];
//     int balance;
//     int cvv;
// } bank;
// int main(int argc, char const *argv[]){
    
//     bank b;
//     b.acc_no = 2312;
//     strcat(b.name, "Tanmay Kumar");
//     b.balance = 3232132;
//     b.cvv = 3231;

//     printf("%s \n", b.name);
//     printf("%d \n", b.acc_no);
//     printf("%d \n", b.balance);
//     printf("%d \n", b.cvv);
//     return 0;
// }

// q7
typedef struct date{
    int date;
    int month;
    int year;
} date;

int compare(date d1, date d2){
    if(d1.year == d2.year){
        if(d1.month == d2.month){
            if(d1.date == d2.date){
                return 1;
            }
        }else{
            return 0;
        }
    }else{
        return 0;
    }
}

void display(date d){
    printf("%d/%d/%d\n", d.date, d.month, d.year);
}
int main(int argc, char const *argv[]){
    date d1 = {1,8,2021};
    date d2 = {1,8,2021};

    display(d1);
    display(d2);
    if(compare(d1,d2) == 1){
        printf("Dates are Equal");
    }else{
        printf("Dates are Unequal");
    }

    return 0;
}
