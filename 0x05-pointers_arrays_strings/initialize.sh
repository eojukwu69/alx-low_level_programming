echo "#include \"main.h\"" >> $1
echo ""
echo "/**" >> $1
echo " * $2 - function call" >> $1
echo " * Return: value" >> $1
echo " */" >> $1
echo "void $2()" >> $1
vim $1
