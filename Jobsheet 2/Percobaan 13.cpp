// Created by 22343019_Alvin Anugerah Pratama

#include <stdio.h>

struct person{
int age;
float weight;
};

int main(){
	struct person *personPtr,person1;

	printf("Enter age : ");
	scanf("%d", &person1.age);
	printf("Enter weight : ");
	scanf("%f", &person1.weight);
	printf("Displaying : \n");
	printf("Age : %d\n", person1.age);
	printf("Weight : %.2f", person1.weight);

return 0;
}

