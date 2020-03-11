/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:32:48 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/17 11:13:43 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

/*
** Determining if one byte of a long word is 0
**
** ~((((lw & 0x7F7F7F7F) + 0x7F7F7F7F) | lw) | 0x7F7F7F7F)
**
** where `lw` is a long word
**
** 0x7F -> 0b 0111 1111
**
** null_high = lw & 0x7F7F7F7F        // will set the high bit of each byte to 0
** overflow = null_high + 0x7F7F7F7F  // addition will overflow the high bit is one of the other bits was 1.
**
** oring = overflow | lw              // the high bit of a byte is set iff any bit in the byte was set
** ones = oring | 0x7F7F7F7F          // the high bits and ones everywhere else
** has_no_zero_byte = ~ones           // the ones become zeros, if no high bit was set, there was no zero
**
**
** (lw - 0x01010101) & ~lw & 0x80808080
**
** overflow = lw - 0x01010101         // overflow the high bit if one was 0 or > 0x80 (0b 1000 0000)  0 || >0x80
** no_high_bit = ~lw & 0x80808080     // high bit set if the high bit was 0 (i.e < 0x80)              0 || <0x80
** has_zero = overflow & no_high_bit  // (0 || >0x80) && (0 || <0x80) -> 0 && 0
**
**
** libc's strlen only filter out < 0x80 bytes by omitting the ~lw & 0x80808080
**   part because most string only contain ascii characters.
**
** sources:
** - https://graphics.stanford.edu/~seander/bithacks.html#ZeroInWord
** - https://stackoverflow.com/questions/20021066
*/

#define HIMAGIC 0x8080808080808080L
#define LOMAGIC 0x0101010101010101L

size_t	ft_strlen(const char *s)
{
	uint64_t	*ptr;
	const char	*cpy;
	uint64_t	lw;

	cpy = s;
	while (((uint64_t)cpy & 0b111) != 0)
	{
		if (*cpy == 0)
			return (cpy - s);
		cpy++;
	}
	ptr = (uint64_t*)cpy;
	while (TRUE)
	{
		lw = *ptr++;
		if (((lw - LOMAGIC) & HIMAGIC) != 0)
		{
			cpy = (const char*)(ptr - 1);
			if (cpy[0] == '\0')
				return (cpy - s);
			if (cpy[1] == '\0')
				return (cpy - s + 1);
			if (cpy[2] == '\0')
				return (cpy - s + 2);
			if (cpy[3] == '\0')
				return (cpy - s + 3);
			if (cpy[4] == '\0')
				return (cpy - s + 4);
			if (cpy[5] == '\0')
				return (cpy - s + 5);
			if (cpy[6] == '\0')
				return (cpy - s + 6);
			if (cpy[7] == '\0')
				return (cpy - s + 7);
		}
	}
}
