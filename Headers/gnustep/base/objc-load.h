/*
    objc-load.h - Dynamically load in Obj-C modules (Classes, Categories)

    Copyright (C) 1993, Adam Fedor.
    
*/

#ifndef __objc_load_h_INCLUDE
#define __objc_load_h_INCLUDE

#include <stdio.h>
#include <objc/objc-api.h>

extern long objc_load_module(
	const char *filename,
	FILE *errorStream,
	void (*loadCallback)(Class, Category*),
        void **header,
        char *debugFilename);

extern long objc_unload_module(
	FILE *errorStream,
	void (*unloadCallback)(Class, Category*));

extern long objc_load_modules(
	char *files[],
	FILE *errorStream,
        void (*callback)(Class*,Category*),
        void **header,
        char *debugFilename);

extern long objc_unload_modules(
	FILE *errorStream,
	void (*unloadCallback)(Class*, Category*));

#endif /* __objc_load_h_INCLUDE */
