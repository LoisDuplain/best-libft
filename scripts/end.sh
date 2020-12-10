#!/usr/bin/env sh

clear
echo "\033[1;37m-----------------------"
echo "\033[1;37m-----------------------"
echo "\033[1;37m---------START---------"
echo "\033[1;37m-----------------------"
echo "\033[1;37m-----------------------"
echo "\033[1;31mVERIFYING IF YOUR PROJECT IS READY TO BE PUSHED"
echo "\033[1;37m-----------------------"

echo "\033[1;37m-----------------------"
echo "\033[36mCleaning *.o files and the compiled program"
echo "\033[1;37m-----------------------"
echo "\033[1;36m "
make fclean
echo " "
echo " "

echo "\033[1;37m-----------------------"
echo "\033[30mGenerating sources.mk"
echo "\033[1;37m-----------------------"
echo "\033[1;30m"
make gmk
echo " "
echo " "

echo "\033[1;37m-----------------------"
echo "Compiling..."
echo "\033[1;37m-----------------------"
echo " "
make all
echo " "
echo " "

echo "\033[1;37m-----------------------"
echo "\033[30mExecuting your tests"
echo "\033[1;37m-----------------------"
echo "\033[1;30m"
make test
echo " "
echo " "

echo "\033[1;37m-----------------------"
echo "\033[36mCleaning *.o files"
echo "\033[1;37m-----------------------"
echo "\033[1;36m"
make clean
echo " "
echo " "

echo "\033[1;37m-----------------------"
echo "\033[32mExecuting norminette"
echo "\033[1;37m-----------------------"
echo "\033[1;32m"
make norminette
echo " "
echo " "

echo "\033[1;37m-----------------------"
echo "\033[36mCleaning *.o files and the compiled program"
echo "\033[1;37m-----------------------"
echo "\033[1;36m"
make fclean
echo " "
echo " "
echo "\033[1;37m-----------------------"
echo "\033[1;31mPrepared to be pushed"
echo "\033[1;37m-----------------------"