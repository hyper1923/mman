#pragma once
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    uint64_t size;
    char* data;
}MEMORY_BLOCK;


void* alloc(uint64_t size);
void mfree(void *ptr);
uint64_t msize(void* ptr);