/*
 * Copyright (c) 2003 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */

#ifndef _ALLOCA_H_
#define _ALLOCA_H_

#include <sys/cdefs.h>
#include <_types.h>

#ifndef	_SIZE_T
#define	_SIZE_T
typedef	__darwin_size_t	size_t;
#endif

__BEGIN_DECLS
void	*alloca(size_t);		/* built-in for gcc */
__END_DECLS

#if defined(__GNUC__) && __GNUC__ >= 3
/* built-in for gcc 3 */
#undef	alloca
#undef	__alloca
#define	alloca(size)	__alloca(size)
#define	__alloca(size)	__builtin_alloca(size)
#endif

#endif /* _ALLOCA_H_ */