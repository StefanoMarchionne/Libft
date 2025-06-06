#include "libft.h"

/*!
 * @brief 
	Function that allows you to customize a message before exiting with the 
	exit() function.	
 * @param msg 
	Message to display before exiting.
 * @param color 
	Color of the message, if NULL default Shell color will be used.
 * @param fd 
	File descriptor.
 * @param exit_code 
	Exit code.
 */
void	ft_exit(char *msg, char *color, int fd, int exit_code)
{
	if (color)
		write(fd, color, ft_strlen(color));
	write(fd, msg, ft_strlen(msg));
	if (color)
		write(fd, RESET, ft_strlen(RESET));
	exit(exit_code);
}
