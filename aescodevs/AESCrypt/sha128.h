#ifndef _SHA128_H
#define _SHA128_H

#ifndef uint8
#define uint8  unsigned char
#endif

#ifndef uint32
#define uint32 unsigned long int
#endif

typedef struct
{
    uint32 total[2];
    uint32 state[8];
    uint8 buffer[64];
}
sha128_context;

void sha128_starts( sha128_context *ctx );
void sha128_update( sha128_context *ctx, uint8 *input, uint32 length );
void sha128_finish( sha128_context *ctx, uint8 digest[32] );

#endif /* sha128.h */
