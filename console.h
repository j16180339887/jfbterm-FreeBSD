/*
 * JFBTERM for FreeBSD
 * Copyright (C) 2009 Yusuke BABA <babayaga1@y8.dion.ne.jp>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY YUSUKE BABA ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL YUSUKE BABA BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 */

#ifndef INCLUDE_CONSOLE_H
#define INCLUDE_CONSOLE_H

#include <termios.h>
#include <stdbool.h>

void console_initialize(void);
int console_getActive(void);
bool console_isActive(void);
int console_getMode(void);
void console_setMode(int mode);
#if defined (__FreeBSD__)
void console_setSC_PIXEL_MODE(bool SC_PIXEL_MODE);
#endif
void console_setAcquireHandler(void (*acquireHandler)(int signum));
void console_setReleaseHandler(void (*releaseHandler)(int signum));

#endif /* INCLUDE_CONSOLE_H */

