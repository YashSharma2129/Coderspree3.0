void printTriangle(int n)
{
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= x; k++)
        {
            cout << "*";
        }
        x += 2;
        cout << endl;
    }
}