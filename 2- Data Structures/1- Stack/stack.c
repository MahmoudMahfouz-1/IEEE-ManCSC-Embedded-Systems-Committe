/*
 * stack.c
 *
 *  Created on: Apr 25, 2022
 *      Author: Mahmoud
 */
#include "stack.h"

Stack_Status stack_init(Stack* stack_ptr, element_type* buffer)
{

	stack_ptr->length = Buffer_legnth;
	stack_ptr->count = 0;
	stack_ptr->head = buffer;
	stack_ptr->base = buffer;

	return stack_no_error;
}

Stack_Status stack_push(Stack* stack_ptr, element_type item)
{
	if(!stack_ptr->head || !stack_ptr->base || !stack_ptr)
		return stack_null;
	if(stack_ptr->count == Buffer_legnth)
		return stack_full;

	*(stack_ptr->head) = item;
	stack_ptr->head++;
	stack_ptr->count++;
	//	printf("count %d \n", stack_ptr->count);

	return stack_no_error;
}


Stack_Status stack_pop(Stack* stack_ptr, element_type* item)
{
	if(!stack_ptr->head || !stack_ptr->base || !stack_ptr)
		return stack_null;

	if(stack_ptr->count == 0)
		return stack_empty;

	stack_ptr->head--;
	*item = *(stack_ptr->head);
	stack_ptr->count--;
	//	printf("count %d \n", stack_ptr->count);

	return stack_no_error;
}


Stack_Status stack_top(Stack* stack_ptr, element_type* item)
{
	if(!stack_ptr->head || !stack_ptr->base || !stack_ptr)
		return stack_null;

	if(stack_ptr->count == 0)
		return stack_empty;

	*item = *(stack_ptr->head);

	return stack_no_error;
}


Stack_Status stack_Full(Stack* stack_ptr)
{
	if(!stack_ptr->head || !stack_ptr->base || !stack_ptr)
		return stack_null;

	if(stack_ptr->count == 0)
		return stack_empty;

	if(stack_ptr->count == Buffer_legnth)
		return stack_full;

	return stack_no_error;
}

// int *p = &i
// Stack_Status (*pf)(int)

void TraverseStack(Stack *stack_ptr, void(*pf)(element_type))
{
	for(int i=stack_ptr->count;i>0;i--)
	{
		(*pf)(static_buffer[i-1]);
	}
}





