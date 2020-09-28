#include <stdio.h>
#include <stdlib.h>
#include "people.h"
int main(){
	People jaz;
	jaz=new_People("Jazmín",19.0,55.0,1.58);
	print_People(jaz);	
	return 0;
}