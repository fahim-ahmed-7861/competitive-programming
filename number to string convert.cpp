ll convert(string str)
{
    ll sum=0;

    for(ll i=str.size()-1; i>=0; i--)
    {
        sum*=10;

        sum+=(str[i]-'0');
    }

    return sum;
}
