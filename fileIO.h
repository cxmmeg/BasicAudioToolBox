#pragma once
#ifndef  _FILEIO_H
#define _FILEIO_H

#ifdef __cplusplus
extern "C" {
#endif

#include<stdio.h>

/*һ�������ļ������ĺ��������������ָ�뷵���ļ�ͷ��*/
int numRowInFile(FILE* f);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // ! _FILEIO_H
