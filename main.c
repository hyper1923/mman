#include <stdio.h>
#include <mman/mman.h>

int main(){
    char* ptr = (char*)alloc(256);
    char* ptr2 = (char*)alloc(512);
    printf("0x%x | %d\n", ptr, msize(ptr));
    printf("0x%x | %d\n", ptr2, msize(ptr2));
    mfree(ptr);
    mfree(ptr);
    return 0;    
}