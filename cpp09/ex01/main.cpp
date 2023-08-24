#include <iostream>
#include <stack>
#include <exception>

int rpn_calc(int i, int j, char c){   
    switch (c)
    {
        case '+':
            return (i + j);
        case '-':
            return (i - j);
        case '*':
            return (i * j);
        case '/':
        {   
            if(j == 0)
                throw std::runtime_error("can't / by 0");
            return (i / j);
        }
        default:
            return 0;
            break;
    }
}

int main(int ac, char **av)
{
    int i = 0;
    int num;

    std::stack<int> rpn;
    
    if(ac != 2)
        return 0;

    while(av[1][i])
    {
        if (isspace(av[1][i]))
        {
            i++;
            continue;
        }
        if(isdigit(av[1][i]))
        {
            rpn.push((av[1][i] - '0'));
        }
        else if(av[1][i] == '+' || av[1][i] == '-' || av[1][i] == '*' || av[1][i] == '/')
        {
            if(rpn.size() >= 2)
            {
                num = rpn.top();
                rpn.pop();
                rpn.top() = rpn_calc(rpn.top(), num, av[1][i]);
            }
            else
                throw std::runtime_error("Bad ARGS");  
        }
        else
        {
            throw std::runtime_error("Bad ARGS");            
        }
        i++;
    }

    if(rpn.size() > 1)
        throw std::runtime_error("Bad ARGS");
    std::cout << rpn.top() << std::endl;

}