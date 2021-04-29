TARGET="../libft"

# Clear target directory
rm -rf $TARGET

# Recreate it
mkdir $TARGET

# Copy all header files
find includes -type f -name "*.h" -exec cp -n {} $TARGET/ \;

# Copy all source files
find sources -type f -name "*.c" -exec cp -n {} $TARGET \;

# Truncate first and seconde line of Makefile. Store it in file "tailed-makefile".
tail -n +3 "./Makefile" > $TARGET"/tailed-makefile"

# Add all source files to SOURCES Makefile variable. Store it in file "sources-makefile".
find $TARGET -type f -name '*.c' | awk -F'/' '{print $NF}' | sed 's/^/SOURCES += /' > $TARGET"/sources-makefile"

# Add all header files to INCLUDES Makefile variable. Store it in file "includes-makefile".
find $TARGET -type f -name '*.h' | awk -F'/' '{print $NF}' | sed 's/^/INCLUDES += /' > $TARGET"/includes-makefile"

# Concatenate previous backup files.
cat $TARGET"/sources-makefile" $TARGET"/includes-makefile" $TARGET"/tailed-makefile" | sed 's/\.\/includes/\.\//g' > $TARGET"/Makefile"

# Clear backup files.
rm $TARGET"/sources-makefile"
rm $TARGET"/includes-makefile"
rm $TARGET"/tailed-makefile"
