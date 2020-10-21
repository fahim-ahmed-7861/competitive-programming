
    static int Sum(int value)
    {
        if (value > 0)
        {
          return value + Sum(value - 1);
        }
        else
        {
            return 1;
        }
    }

recursion
