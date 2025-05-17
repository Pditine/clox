#ifndef clox_debug_h
#define clox_debug_h

#include "chunk.h"

#define PRINT_SIZE(x) printf("%llu", sizeof(x))

void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);

#endif
