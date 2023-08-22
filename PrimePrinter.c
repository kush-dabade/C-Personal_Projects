    #include<stdio.h>
    #include<stdbool.h>

    bool isPrime(int n) {
        if(n == 1 || n == 0)
            return false;

        for (int i = 2; i<= n /2; i++){

            if(n % i == 0)
                return false;
        }
        return true;
    }

    int main()
    {
        int c;
        int x;
        
        printf("Enter Number Upto Which Prime Numbers Must Be Entered  ");
        scanf("%d", &c);
        x = c;

        for (int i = 1; i <= x; i++) {

            if (isPrime(i)) {

                printf("%d ", i);
            }
        }
        return 0;
    }
