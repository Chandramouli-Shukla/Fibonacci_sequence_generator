#include<iostream>

int main()
{
    long long int a = 0;
    long long int b = 0;
    int count;


    std::cout<< std::endl;
    std::cout<< "how many fibonacchi numbers you want: ";

    std::cin>> count ; 
    
    
    
    std::cout<< std::endl;

    for (int i = 0; i < count; i++)
    {
        long long int c = a+b;

        b = a;

        a = c;
        

        if (a == 0)
        {
            //std::cout<< a<< ", ";
            a++;
            
        }

        std::cout<< a<< ", ";
        
        
        
    }
    std::cout<< std::endl;
    std::cout<< std::endl;
    
    return 0;
}
