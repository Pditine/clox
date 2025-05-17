#include <stdio.h>
#include "chunk.h"
#include "debug.h"

int main(void) {
    Chunk chunk;
    initChunk(&chunk);
    writeChunk(&chunk, OP_RETURN);
    freeChunk(&chunk);
    // disassembleChunk(&chunk, "test chunk");
    PRINT_SIZE(OpCode);
    return 0;
}