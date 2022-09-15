/**
 * print_int - print integers
 * @v: value
 * Description: print out values
 * Return: integer value
 */
void print_int(int v)
{
        if(v!= 0)
        {
                print_int(v/10);
                putchar((v%10) + '0');
        }
}
