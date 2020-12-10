TARGET="../libft"

# Clear target directory
rm -rf $TARGET

# Recreate it
mkdir $TARGET

# Copy all header files
find includes -type f -name "*.h" -exec cp -n {} $TARGET/ \;

# Copy all source files
find sources -type f -name "*.c" -exec cp -n {} $TARGET \;

# Truncate first line of Makefile. Store it in file "tailed-makefile".
tail -n +2 "./Makefile" > $TARGET"/tailed-makefile"

# Add all source files to SRCS Makefile variable. Store it in file "srcs-makefile".
find $TARGET -type f -name '*.c' | awk -F'/' '{print $NF}' | sed 's/^/SRCS += /' > $TARGET"/srcs-makefile"

# Concatenate previous backup files.
cat $TARGET"/srcs-makefile" $TARGET"/tailed-makefile" | sed 's/\.\/includes/\.\//g' > $TARGET"/Makefile"

# Clear backup files.
rm $TARGET"/tailed-makefile"
rm $TARGET"/srcs-makefile"
