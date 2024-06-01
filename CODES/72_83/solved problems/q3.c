// GATE 2014 set-2
int f(int j)
{
    static int i=50;
    int k;
    if(i==j)
    {
        printf("something");
        k=f(i);
        return 0;
    }
    else return 0;
}

    /*
        options
        a) the function returns 0 for all value of j.
        b) the function prints the string "something" for all values 
        of j.
        c) the function return 0 when j=50';
        d) the function will exhaust the runtime stack or run into an 
        infinite loop when j=50.

        answer is d option

    */