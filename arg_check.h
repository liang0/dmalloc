/*
 * defines for malloc string routines...
 *
 * Copyright 1993 by the Antaire Corporation
 *
 * This file is part of the malloc-debug package.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose and without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies, and that
 * the name of Antaire not be used in advertising or publicity pertaining to
 * distribution of the document or software without specific, written prior
 * permission.
 *
 * The Antaire Corporation makes no representations about the suitability of
 * the software described herein for any purpose.  It is provided "as is"
 * without express or implied warranty.
 *
 * The author may be contacted at gray.watson@antaire.com
 *
 * $Id: arg_check.h,v 1.3 1993/10/17 00:39:07 gray Exp $
 */

#ifndef __ARG_CHECK_H__
#define __ARG_CHECK_H__

#include "malloc_dbg.h"			/* for MALLOC_SIZE */
#include "malloc_loc.h"			/* for IMPORT */

/*<<<<<<<<<<  The below prototypes are auto-generated by fillproto */

/*
 * dummy function for checking bcmp's arguments.
 */
IMPORT	int	_malloc_bcmp(const void * b1, const void * b2,
			     const MALLOC_SIZE len);

/*
 * dummy function for checking bcopy's arguments.
 */
IMPORT	void	_malloc_bcopy(const char * from, char * to,
			      const MALLOC_SIZE len);

/*
 * dummy function for checking memcmp's arguments.
 */
IMPORT	int	_malloc_memcmp(const void * b1, const void * b2,
			       const MALLOC_SIZE len);

/*
 * dummy function for checking memcpy's arguments.
 */
IMPORT	char	*_malloc_memcpy(char * to, const char * from,
				const MALLOC_SIZE len);

/*
 * dummy function for checking memset's arguments.
 */
IMPORT	char	*_malloc_memset(void * buf, const char ch,
				const MALLOC_SIZE len);

/*
 * dummy function for checking index's arguments.
 */
IMPORT	char	*_malloc_index(const char * str, const char ch);

/*
 * dummy function for checking rindex's arguments.
 */
IMPORT	char	*_malloc_rindex(const char * str, const char ch);

/*
 * dummy function for checking strcat's arguments.
 */
IMPORT	char	*_malloc_strcat(char * to, const char * from);

/*
 * dummy function for checking strcmp's arguments.
 */
IMPORT	int	_malloc_strcmp(const char * s1, const char * s2);

/*
 * dummy function for checking strlen's arguments.
 */
IMPORT	MALLOC_SIZE	_malloc_strlen(const char * str);

/*
 * dummy function for checking strtok's arguments.
 */
IMPORT	char	*_malloc_strtok(char * str, const char * sep);

/*
 * dummy function for checking bzero's arguments.
 */
IMPORT	void	_malloc_bzero(void * buf, const MALLOC_SIZE len);

/*
 * dummy function for checking memccpy's arguments.
 */
IMPORT	char	*_malloc_memccpy(char * s1, const char * s2, const char ch,
				 const MALLOC_SIZE len);

/*
 * dummy function for checking memchr's arguments.
 */
IMPORT	char	*_malloc_memchr(const char * s1, const char ch,
				const MALLOC_SIZE len);

/*
 * dummy function for checking strchr's arguments.
 */
IMPORT	char	*_malloc_strchr(const char * str, const char ch);

/*
 * dummy function for checking strrchr's arguments.
 */
IMPORT	char	*_malloc_strrchr(const char * str, const char ch);

/*
 * dummy function for checking strcpy's arguments.
 */
IMPORT	char	*_malloc_strcpy(char * to, const char * from);

/*
 * dummy function for checking strncpy's arguments.
 */
IMPORT	char	*_malloc_strncpy(char * to, const char * from,
				 const MALLOC_SIZE len);

/*
 * dummy function for checking strcasecmp's arguments.
 */
IMPORT	int	_malloc_strcasecmp(const char * s1, const char * s2);

/*
 * dummy function for checking strncasecmp's arguments.
 */
IMPORT	int	_malloc_strncasecmp(const char * s1, const char * s2,
				    const MALLOC_SIZE len);

/*
 * dummy function for checking strspn's arguments.
 */
IMPORT	int	_malloc_strspn(const char * str, const char * list);

/*
 * dummy function for checking strcspn's arguments.
 */
IMPORT	int	_malloc_strcspn(const char * str, const char * list);

/*
 * dummy function for checking strncat's arguments.
 */
IMPORT	char	*_malloc_strncat(char * to, const char * from,
				 const MALLOC_SIZE len);

/*
 * dummy function for checking strncmp's arguments.
 */
IMPORT	int	_malloc_strncmp(const char * s1, const char * s2,
				const MALLOC_SIZE len);

/*
 * dummy function for checking strpbrk's arguments.
 */
IMPORT	char	*_malloc_strpbrk(const char * str, const char * list);

/*
 * dummy function for checking strstr's arguments.
 */
IMPORT	char	*_malloc_strstr(const char * str, const char * pat);

/*<<<<<<<<<<   This is end of the auto-generated output from fillproto. */

#endif /* ! __ARG_CHECK_H__ */