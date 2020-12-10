TARGET="./libft-convertedddddddd"

rm -rf $TARGET
mkdir $TARGET
find includes -type f -name "*.h" -exec cp -n {} $TARGET/ \;
find sources -type f -name "*.c" -exec cp -n {} $TARGET \;
tail -n +2 "./Makefile" > $TARGET"/tailed-makefile"
find libft-converted -name '*.c' | awk -F'/' '{print $2}' | sed 's/^/SRCS += /' > $TARGET"/srcs-makefile"
cat $TARGET"/srcs-makefile" $TARGET"/tailed-makefile" > $TARGET"/Makefile"
rm $TARGET"/tailed-makefile"
rm $TARGET"/srcs-makefile"
