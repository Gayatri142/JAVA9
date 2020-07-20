
#include<stdio.h>

void main(){

	int subVal=15;

	if(subVal++ && subVal--){
		printf("SubVal : %d\n",subVal);
	}
	
	if(subVal-- || ++subVal){
		printf("SubVal : %d\n",subVal);
	}	
	if(subVal > subVal);{
		printf("SubVal : %d\n",subVal);
	}
}

// Here in this program ....
// we define subVal=15
// then in first 'if' we post increment the value of subVal And post decrement also so it will first increment value as 16 then decrement it as 15 condition gets true so it will print value of subVal as 15....here we check both the conditions 
// In second 'if' first it will post decrement the value of subVal or pre increment the value of subVal here it will check first condition if it is true then it will directly print value of subVal as 14 ....here we check only first condition
// In third 'if' it check for subVal is less than subVal condition get false but we give semicolon at the end of 'if' and here ';' means null statement and 'if' only print statement next to it and if next statement is ';' it means null statement then it will print all the statement after semicolon as it is so here output is 14
// the outputnof whole program looks like
// subVal = 15
// subVal = 14
// subVal = 14 

