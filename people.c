#include "people.h"
#include <stdio.h>
#include <stdlib.h>

People new_People(char *name,double age, double weight, double height){
	People people;
	people.name=name;
	people.age=age;
	people.weight=weight;
	people.height=height;
	return people;
}

int print_People (People people){
	printf("Hello %s\n",people.name);
	printf("Your age is: %.2f years\n ",people.age);
	printf("Your weight is:  %.2fkg\n",people.weight);
	printf("Your height is: %.2fm\n",people.height);
	return 1;
}

