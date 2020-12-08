//swap function prototype
void  swap_pointer(int* x,int* y);

int main()
{
    //Declare two integers --> x and y
    int x  = 10, y = 20;
    
    // Declare two pointers point to integer x and y
    int* xPtr = &x;
    int* yPtr = &y;
        
    //pass by the value of poniters to the swap function
    swap_pointer(xPtr , yPtr);
    
    return 0;
}

//define the swap function --> takes two arguments and swap their values.
void  swap_pointer(int* a,int* b) 
{
    int* temp = 0;
    *temp = *a;
    *a = *b;
    *b = *temp;
    
}





