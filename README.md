# Libft

This is my libft for 42.

## Additional functions

- `ft_abs(int n)` : returns the absolute value of n.
- `ft_cdup(char c)` : allocates a null terminated str containing only c.
- `ft_iscinstr(char c, const char *str)` : returns true if c is in str.
- `ft_max(int a, int b)` : returns a if a >= b, else returns b.
- `ft_min(int a, int b)` : returns a if a <= b, else returns b.
- `ft_rand(void)` : generates a pseudo-random unsigned int between [1, 2^32[ using a linear feedback shift register.
- `ft_randr(int min, int max)` : generates a pseudo-random unsigned int between [min,max[.
- `ft_utoa(unsigned int n)` : similar to itoa but with unsigned int.
- `ft_utoabase(unsigned int n)` : returns an allocated string converting the unsigned int into the arbitrary defined base.
- `ft_ultoabase(unsigned long n)` : similar to ft_utoabase except it can work with a unsigned long.

## Functions to add

- `realloc` : change size of allocated memory.
