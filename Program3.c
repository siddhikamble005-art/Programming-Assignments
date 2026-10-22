void DisplayEvenFactor(int iNo)
{
    int i = 0;
    
    // Updater to handle negative numbers
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    // Loop runs up to iNo / 2 since the largest proper factor cannot exceed half of the number
    for(i = 1; i <= iNo / 2; i++)
    {
        // Check if 'i' is a factor of 'iNo' AND if 'i' is an even number
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d ", i);
        }
    }
}
