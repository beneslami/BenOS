#include "trap.h"
#include "print.h"
#include "debug.h"

void KMain(void)
{
   char *string = "Hello and Welcome to BenOS";
   int64_t value = 0x123456789ABCD;
   
   init_idt();
   init_memory();

   printk("%s\n", string);
}
