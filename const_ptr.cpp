const int * p0;
int * const p1;
const int * const p2;
    
int main()
{
    const char * x;
    // char * const y = nullptr;
    x = "123";
    // y = "123";
    x[0] = 0x1;
    const char * const ptr = x;
    // ptr = y;
    // ptr[0] = ..;
    // * ... 
    //  ... * 
}