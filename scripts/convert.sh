rm -rf libft-converted
mkdir libft-converted
find includes -type f -name "*.h" -exec cp -n {} libft-converted/ \;
find sources -type f -name "*.c" -exec cp -n {} libft-converted/ \;
tail -n +2 "./Makefile" > "./libft-converted/tailed-makefile"
find libft-converted -name '*.c' | awk -F'/' '{print $2}' | sed 's/^/SRCS += /' > "./libft-converted/srcs-makefile"
cat "./libft-converted/srcs-makefile" "./libft-converted/tailed-makefile" > "./libft-converted/Makefile"
rm "./libft-converted/tailed-makefile"
rm "./libft-converted/srcs-makefile"
