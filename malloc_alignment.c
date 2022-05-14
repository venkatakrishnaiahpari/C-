
 #include <stdio.h>
 #include <stdlib.h>
 
 /*Write an aligned malloc & free function. Which takes number of bytes and aligned byte
 
  1. You need an offset if you want to support alignments beyond what your system's malloc() does. For example if your system malloc() aligns to 8 byte boundaries, and you want to align to 16 bytes, you ask for 15 bytes extra so you know for sure you can shift the result around to align it as requested. You also add sizeof(void*) to the size you pass to malloc() to leave room for bookkeeping.

2. ~(alignment - 1) is what guarantees the alignment. For example if alignment is 16, then subtract 1 to get 15, aka 0xF, then negating it makes 0xFF..FF0 which is the mask you need to satisfy the alignment for any returned pointer from malloc(). Note that this trick assumes alignment is a power of 2 (which practically it normally would be, but there really should be a check).

3. It's a void**. The function returns void*. This is OK because a pointer to void is "A pointer to any type," and in this case that type is void*. In other words, converting void* to and from other pointer types is allowed, and a double-pointer is still a pointer.

  4.The overall scheme here is to store the original pointer before the one that's returned to the caller. Some implementations of standard malloc() do the same thing: stash bookkeeping information before the returned block. This makes it easy to know how much space to reclaim when free() is called.
*/

void *malloc_aligment( size_t size, size_t alignment) {
    
    void* p1; // original block
    void** p2; // aligned block
    int offset = alignment - 1 + sizeof(void*);
    if ((p1 = (void*)malloc(size + offset)) == NULL)
    {
       return NULL;
    }
    p2 = (void**)(((size_t)(p1) + offset) & ~(alignment - 1));
    printf("0x%llx 0x%llx\n",p2,p2+1);
    p2[-1] = p1;
    return p2;
}

void mall_foree(void *p)
{
    free(((void **)p)[-1]);
}

int main(void) {
    void *p;
    p = malloc_aligment(10,20);
    printf("%llx %llx\n",p,p+1);
    
}