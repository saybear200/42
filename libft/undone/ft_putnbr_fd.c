void ft_putnbr_fd(int n, int fd)
{
	if(n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	while( n >=0 && n <= 9)
	{
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}

int main(int argc, char **argv)
{
	(void)argc;
	ft_putnbr_fd(argv[1][0], argv[2]);
	return(0);
}
