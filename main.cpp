#include <iostream>

int main()
{
    // Задание 1

    const int N_Max = 10000;
    int min = INT_MAX;
    int sum = 0;
    int n;
    int seq[N_Max];

    std::cout << "enter n: ";
    std::cin >> n;

    if (n<=0 || n>N_Max)
    {
        std::cout << "error" << std::endl;
        return 1;
    }

    std::cout << "sequence values: ";

    for(int i=0;i<n;i++)
    {
        std::cin >> seq[i];
        if (seq[i]<=0)
        {
            std::cout << "error" << std::endl;
            return 1;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(seq[i]%10!=1)
        {
            sum+=seq[i];
            if(seq[i]<min)
            {
                min=seq[i];
            }
            std::cout << "num " << seq[i] << " is #" << i+1 << std::endl; 
        }
    }
    std::cout << "min num: " << min << std::endl;
    std::cout << "sum: " << sum << std::endl;
    
    // Задание 2

    int x;

    std::cout << "enter x c 0 < x < 10^9";
    std::cin >> x;

    if(x<1 || x>=1000000000)
    {
        std::cout << "error" << std::endl;
        return 1;
    }

    int numcount[10] = {0};

    while (x > 0)
    {
        int num = x % 10;
        numcount[num]++;
        x /= 10;
    }

    int mincount = 1000000000;
    int rarenum = 0;

    for (int i = 0; i < 10; i++)
    {
        if (numcount[i] > 0 && numcount[i] < mincount)
        {
            mincount = numcount[i];
            rarenum = i;
        }
    }

    std::cout << "the rarest num: " << rarenum << std::endl;

    return 0;
}