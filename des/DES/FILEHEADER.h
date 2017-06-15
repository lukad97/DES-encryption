#ifndef FILEHEADER_H_INCLUDED
#define FILEHEADER_H_INCLUDED

#include <stdint.h>
#include <stdlib.h>

#define FILENAME_LEN_MAX 256

typedef struct
{
	char fileName[FILENAME_LEN_MAX];
	uint64_t len;
	unsigned char crc[4], pad[4];
} FileHeader;


FileHeader headerCreate(FILE *pFile, const char *pName);
//int headerCheck(FileHeader *pHeader, const char *pName);
//int headerSanityCheck(FileHeader *pHeader);
//
//void getVacantFileName(char *pFilePath);

#endif // FILEHEADER_H_INCLUDED