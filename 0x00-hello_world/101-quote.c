#include<stdio.h>
/**
* main-Entry point
*
* Description:print a quote using write Function
* write:int fd:void siz count
* Return:1(Not Success)
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korean, 2015-10-19\n", 59);
return (1);
}
