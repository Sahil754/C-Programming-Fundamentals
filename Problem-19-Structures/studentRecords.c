//  Created by Sahil M on 2020-09-02.
//  Copyright © 2020 Sahil. All rights reserved.
//  Porgram inputs studen records and prints them.

#include<stdio.h>

struct student {
    char name[20];
    int age;
    int r_no;
};

int main(){
    int max = 10;
    int i;
    
    struct student s[max];
    
    for (i=0; i<max; i++) {
        printf("Enter name of student: ");
        scanf("%s",s[i].name);
        printf("Enter age of student: ");
        scanf("%d",&s[i].age);
        printf("Enter roll number of student: ");
        scanf("%d",&s[i].r_no);
        printf("\n");
    }
    
    for (i=0; i<max;i++) {
        printf("Name: %s | Age: %d | Roll number: %d", s[i].name, s[i].age, s[i].r_no);
        printf("\n");
    }
    
    return 0;
}
