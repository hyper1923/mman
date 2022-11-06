#include <mman/mman.h>

void* alloc(uint64_t size){
    MEMORY_BLOCK* mem_block = (MEMORY_BLOCK*)malloc(sizeof(MEMORY_BLOCK) + size);
    mem_block->size = size;
    mem_block->data = (char*)(mem_block + sizeof(MEMORY_BLOCK));
    return mem_block->data;
}
void mfree(void *ptr){
    MEMORY_BLOCK* mem_block = (MEMORY_BLOCK*)ptr-sizeof(MEMORY_BLOCK);
    free((void*)((uint64_t)mem_block->data));
}
uint64_t msize(void* ptr){
    MEMORY_BLOCK* mem_block = (MEMORY_BLOCK*)ptr-sizeof(MEMORY_BLOCK);
    return mem_block->size;
}