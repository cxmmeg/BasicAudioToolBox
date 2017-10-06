#pragma once
#ifndef  _FILEIO_H
#define _FILEIO_H

#ifdef __cplusplus
extern "C" {
#endif

#include<stdio.h>
#include"hmath.h"

typedef struct
{
	int numFrames;
	int lengthFrame;
	short sizeFrameInByte;
	short typeFlag;
	Matrix data;
}BinaryFileStruct;

void FreeBinaryFileStruct(BinaryFileStruct* bfp);

/*һ�������ļ������ĺ��������������ָ�뷵���ļ�ͷ��*/
int numRowInFile(FILE* f);

BinaryFileStruct readBinaryFile(FILE* f);

void writeBinaryFile(FILE* f, BinaryFileStruct bf);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // ! _FILEIO_H
