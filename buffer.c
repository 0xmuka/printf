#include "main.h"

/**
 * writeToBuffer - Writes data to a buffer and flushes to stdout if necessary
 * @data: The data to write to the buffer
 * @buffer: The buffer to write to
 * @bufferIndex: Pointer to the current index in the buffer
 *
 * Description:
 * This function writes the provided data to the buffer. If writing the data
 * would exceed the buffer size, it flushes the buffer to stdout and resets
 * the buffer index.
 */
void writeToBuffer(const char *data, char *buffer, int *bufferIndex)
{

int dataSize = strlen(data);

if (((*bufferIndex) + dataSize >= MEMORY_SIZE))
{
fwrite(buffer, 1, *bufferIndex, stdout);
*bufferIndex = 0;
}

strcpy(buffer + (*bufferIndex), data);

*bufferIndex += dataSize;

}
