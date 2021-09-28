/*
  Write a program that prints the numbers from 1 to 100 and for multiples of ‘3’ print “Fizz” instead of the number and for the multiples of ‘5’ print “Buzz”.
*/
void print_FizzBuzz(void )
{
    for (int i =0 ;i<= 100;i++){
        // number divisible by 3 and 5 will
        // always be divisible by 15, print
        // 'FizzBuzz' in place of the number
        if (i%15 == 0)
            printf("FizzBuzz \t");
        
        // number divisible by 3? print 'Fizz'
        // in place of the number
        else if (i%3 == 0)
            printf("Fizz \t");
        
        // number divisible by 5, print 'Buzz' 
        // in place of the number
        else if (i%5 == 0)
            printf("Buzz \t");
        //// print the number    
         else
            printf("%d\t",i);
    }
}

int main(void)
{
    print_FizzBuzz();
    return 0;
}