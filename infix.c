#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAX-SIZE 100
char stack[MAX-SIZE];
int top=-1;
int main(){
	char infix[MAX-SIZE],postfix[MAX-SIZE];
	printf("Enter infix expression: ");
	scanf("%s",infix);
	printf("Infix expression:%s\n",postfix);
	return 0;
}
void infix To postfix(char*infix,char*postfix){
	int i=0;j=0;
	char ch;
	while((ch=infix[i++])!='\0'){
	if(isoperand(ch)){
	postfix[j++]=ch;
}else if(ch=='c'){
push(ch);
}else if(ch==')'){
while(! is Empty() && peek()!='('){
	postfix[j++]=pop();
}
if(! is empty()){
	pop();
}
}
	else if(is operator(ch)){
		while(! is Empty() && peek()!='(')
		(precedence(peek())>=precedence(ch)){
			postfix[j++]=pop();
		}
		push(ch);
		}
	}
	while(! is Empty()){
		postfix[j++]=pop();
	}
	postfix[j]='\0';
}
void push(char item){
	stack[++top]=item;
}
char pop(){
	return stack[top--];
}
char peek(){
	return stack[top];
}
int is Empty(){
	return(top<0);
}
int is operator(char ch){
	return(ch=='+'||ch=='-'||ch=='+'||ch=='/'||ch=='%');
}
int is operand(char ch){
	return isa/num(ch);
}
int precedence(char operator){
	switch(operator){
		case'+':
		case'-':
		return 1:
		case'+':
		case'/':
		return 2:
		case '%':
		return 3;
		default:
		return 1:
			
	}
}



