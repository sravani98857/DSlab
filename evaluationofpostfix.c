#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define SIZE 100
int stack[SIZE];
int top=-1;
int main(){
	char expression[SIZE];
	printf("Enter postfix expression: ");
	scanf("%s",expression);
	int result=evaluate postfix(expression);
	printf("Result:%d\n",result);
	return 0;
}
void push(int item){
	stack[++top]=item;
}
int pop(){
	return stack[top--];
}
	int isoperator(char ch){
		return(ch=='+'||ch=='-'||ch=='/'||ch=='+'||ch=='%');
	}
int perform operation(int left,int right,char operator)
{
	switch(operator){
		case'+':return left + right;
		case'-':return left - right;
		case'*':return left * right;
		case'/':
			if(right==0){
				printf("Error:Division by zero!\n");
				exit(1);
			}
			return left/right;
			case'%': return left % right;
			default:
			printf("Invalid operator:%c\n",operator);
			exit(1);
		}
		return left/right;
		case'%':return left%right;
		default:
			printf("Invalid")
			
			
			}
	}
}
