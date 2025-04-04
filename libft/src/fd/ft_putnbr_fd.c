#include "libft.h"

/*!
 * @brief 
	Outputs the integer ’n’ to the given file descriptor.
 * @param n 
	The integer to output.
 * @param fd 
	The file descriptor on which to write.
 */
void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		n = (unsigned int)(nb * -1);
	}
	else
		n = (unsigned int)nb;
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + 48, fd);
}
