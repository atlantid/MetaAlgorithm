#include <vector>
#include <map>

template<class T, unsigned int ChunkSize = 32>
class Allocator
{
    T* allocMemory;

    Allocator()
    {
       allocMemory = malloc(sizeof(T)*ChunkSize);
       for(int i = 0; i<ChunkSize-1; i++)
       {
           allocMemory[i] = (void*)&allocMemory[i+1];
       }
    }

};
