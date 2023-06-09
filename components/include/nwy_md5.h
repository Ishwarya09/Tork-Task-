/*====*====*====*====*====*====*====*====*====*====*====*====*====*====*
   Copyright (c) 2018 Neoway Technologies, Inc.
   All rights reserved.
   Confidential and Proprietary - Neoway Technologies, Inc.
   Author: zhangzhao
   Date: 2019.10
*====*====*====*====*====*====*====*====*====*====*====*====*====*====*/

#ifndef _NWY_MD5_H
#define _NWY_MD5_H
#ifdef __cplusplus
extern "C" {
#endif
typedef struct
{
    unsigned int count[2];
    unsigned int state[4];
    unsigned char buffer[64];   

}MD5_CTX;

   
#define F(x,y,z) ((x & y) | (~x & z))
#define G(x,y,z) ((x & z) | (y & ~z))
#define H(x,y,z) (x^y^z)
#define I(x,y,z) (y ^ (x | ~z))
#define ROTATE_LEFT(x,n) ((x << n) | (x >> (32-n)))

#define FF(a,b,c,d,x,s,ac) \
          { \
          a += F(b,c,d) + x + ac; \
          a = ROTATE_LEFT(a,s); \
          a += b; \
          }

#define GG(a,b,c,d,x,s,ac) \
          { \
          a += G(b,c,d) + x + ac; \
          a = ROTATE_LEFT(a,s); \
          a += b; \
          }

#define HH(a,b,c,d,x,s,ac) \
          { \
          a += H(b,c,d) + x + ac; \
          a = ROTATE_LEFT(a,s); \
          a += b; \
          }

#define II(a,b,c,d,x,s,ac) \
          { \
          a += I(b,c,d) + x + ac; \
          a = ROTATE_LEFT(a,s); \
          a += b; \
          }                                            

#define READ_DATA_SIZE	1024
#define MD5_SIZE		16
#define MD5_STR_LEN		(MD5_SIZE * 2)

int compute_file_md5(const char *file_path, char *md5_str);

#ifdef __cplusplus
   }
#endif

#endif /*_NWY_MD5_H*/