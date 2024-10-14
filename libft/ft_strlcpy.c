#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_size;

	src_size = ft_strlen(src);
	if (src_size + 1 < dstsize)
		ft_memcpy(dst, src, src_size + 1);
	else 
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (src_size);
}