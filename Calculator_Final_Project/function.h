float Sum (float x, float y)
{
    float result = x + y;
    return result;
}

float Sub (float x, float y)
{
    float result = x - y;
    return result;
}

float Product (float x, float y)
{
    float result = x * y;
    return result;
}

float Div (float x, float y)
{
    float result = x / y;
    return result;
}

float Sqr (float x)
{
    float result = x * x;
    return result;
}

float Cube (float x)
{
    float result = x * x * x;
    return result;
}

double Power (double x, double y)
{
    double result = 1.0;

    if (y == 0) result = 1.0;

    else if (y < 0)
    {
        int z = -y;
        for (int i = 1; i <= z; i++)
        {
            result = result * (1.0/x);
        }
    }
    else
    {
        for (int i = 1; i <= y; i++)
        {
            result = result * x;
        }
    }
    return result;
}

int Mod (int x, int y)
{
    int result = x % y;
    return result;
}

int Int (int x)
{
    int result = x;
    return result;
}

double Exp (double x, double y)
{
    double result = 1.0;

    if (y == 0) result = result * x;

    else if (y < 0)
    {
        int z = -y;
        for (int i = 1; i <= z; i++)
        {
            result = result * (1.0/10.0);
        }
    }
    else
    {
        for (int i = 1; i <= y; i++)
        {
            result = result * 10.0;
        }
    }
    result = x * result;
    return result;
}

double PowerTen (double x)
{
    double result = 1;

    if (x == 0) result = 1;

    else if (x < 0)
    {
        int z = -x;
        for (int i = 1; i <= z; i++)
        {
            result = result * (1.0/10.0);
        }
    }
    else
    {
        for (int i = 1; i <= x; i++)
        {
            result = result * 10.0;
        }
    }
    return result;
}

long long int Fact (long long int x)
{
    long long int result = 1;

    if (x<0)
    {
        long long int z = -x;
        for (long long int i = 1; i <= z; i++)
        {
            result = result * i;
        }
        result = - result;
    }
    else
    {
        for (long long int i = 1; i <= x; i++)
        {
            result = result * i;
        }
    }
    return result;
}

double Inv (double x)
{
    double result;
    result = 1.0 / x;
    return result;
}


float SignRev (float x)
{
    float result;
    if (x == 0) result = 0;
    else
    {
        result = -x;
    }
    return result;
}

float Percentage (float x, float y)
{
    float result = (x / y) * 100.0;
    return result;
}

