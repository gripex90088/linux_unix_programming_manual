/*
 * currency_IO.c
 *
 *  Created on: Jul 25, 2019
 *      Author: xuxing
 *  Linux-UNIX系统编程手册（上、下册）.pdf chapter --- 4.1 通用I/O
 *
 */
#include <sys/stat.h>
#include <fcntl.h>
#include "tlpi_hdr.h"
#include "error_functions.h"

/* 文件访问模式
	O_RDONLY	以只读方式打开文件
	 O_WRONLY	 以只写方式打开文件
	   O_RDWR	  以读写方式打开文件 */

void currency_open()
{
	/* Open existing file for reading */
	int fd = open("startup", O_RDONLY);
	if (fd == -1)
		errExit("open");

	/* Open new or existing file for reading and writing, truncating to zero
	 	 bytes; file permissions read+write for owner, nothing for all others */
	fd = open ("myfile", O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		errExit("open");

	/* Open new or existing file for writing; writes should
	 	 always append to end of file */
	fd = open("w.log", O_WRONLY | O_CREAT | O_TRUNC | O_APPEND,
						S_IRUSR | S_IWUSR);
	if (fd == -1)
		errExit("open");
}
