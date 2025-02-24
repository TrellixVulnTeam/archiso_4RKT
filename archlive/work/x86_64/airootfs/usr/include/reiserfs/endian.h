/*
  libreiserfs - a library for manipulating reiserfs partitions
  Copyright (C) 2001-2004 Yury Umanets <torque@ukrpost.net>.

  This program is free software; you can redistribute it and/or modify it under
  the terms of the GNU General Public License as published by the Free Software
  Foundation; either version 2 of the License, or (at your option) any later
  version.
                                                                                                 
  This program is distributed in the hope that it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
  details.
                                                                                                 
  You should have received a copy of the GNU General Public License along with
  this program; if not, write to the Free Software Foundation, Inc., 59 Temple
  Place, Suite 330, Boston, MA 02111-1307 USA
*/

#ifndef ENDIAN_H
#define ENDIAN_H

#ifdef HAVE_CONFIG_H
#	include <config.h>
#endif

#include <sys/types.h>

#define GET_BYTE(x, n)			( ((x) >> (8 * (n))) & 0xff )

#define __SWAP16(x)			( (GET_BYTE(x, 0) << 8)	\
					  + (GET_BYTE(x, 1) << 0) )

#define __SWAP32(x)			( (GET_BYTE(x, 0) << 24) \
					  + (GET_BYTE(x, 1) << 16) \
					  + (GET_BYTE(x, 2) << 8) \
					  + (GET_BYTE(x, 3) << 0) )

#define __SWAP64(x)			( (GET_BYTE(x, 0) << 56) \
					  + (GET_BYTE(x, 1) << 48) \
					  + (GET_BYTE(x, 2) << 40) \
					  + (GET_BYTE(x, 3) << 32) \
					  + (GET_BYTE(x, 4) << 24) \
					  + (GET_BYTE(x, 5) << 16) \
					  + (GET_BYTE(x, 6) << 8) \
					  + (GET_BYTE(x, 7) << 0) )

#define SWAP16(x)			((uint16_t) __SWAP16( (uint16_t) x ))
#define SWAP32(x)			((uint32_t) __SWAP32( (uint32_t) x ))
#define SWAP64(x)			((uint64_t) __SWAP64( (uint64_t) x ))

#ifdef WORDS_BIGENDIAN
# define CPU_TO_LE16(x)			SWAP16(x)
# define CPU_TO_BE16(x)			(x)
# define CPU_TO_LE32(x)			SWAP32(x)
# define CPU_TO_BE32(x)			(x)
# define CPU_TO_LE64(x)			SWAP64(x)
# define CPU_TO_BE64(x)			(x)

# define LE16_TO_CPU(x)			SWAP16(x)
# define BE16_TO_CPU(x)			(x)
# define LE32_TO_CPU(x)			SWAP32(x)
# define BE32_TO_CPU(x)			(x)
# define LE64_TO_CPU(x)			SWAP64(x)
# define BE64_TO_CPU(x)			(x)
#else
# define CPU_TO_LE16(x)			(x)
# define CPU_TO_BE16(x)			SWAP16(x)
# define CPU_TO_LE32(x)			(x)
# define CPU_TO_BE32(x)			SWAP32(x)
# define CPU_TO_LE64(x)			(x)
# define CPU_TO_BE64(x)			SWAP64(x)

# define LE16_TO_CPU(x)			(x)
# define BE16_TO_CPU(x)			SWAP16(x)
# define LE32_TO_CPU(x)			(x)
# define BE32_TO_CPU(x)			SWAP32(x)
# define LE64_TO_CPU(x)			(x)
# define BE64_TO_CPU(x)			SWAP64(x)
#endif

#define get_leXX(xx, p, field)			\
	(LE##xx##_TO_CPU ((p)->field))

#define set_leXX(xx, p, field, val)				\
	do {							\
		(p)->field = CPU_TO_LE##xx(val);		\
	} while (0)

#define get_le16(p, field) 			\
	get_leXX (16, p, field)

#define set_le16(p, field, val)			\
	set_leXX (16, p, field, val)

#define get_le32(p, field) 			\
	get_leXX (32, p, field)

#define set_le32(p, field, val)			\
	set_leXX (32, p, field, val)

#define get_le64(p, field) 			\
	get_leXX (64, p, field)

#define set_le64(p, field, val)			\
	set_leXX (64, p, field, val)

#endif

