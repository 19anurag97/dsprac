#include <stdio.h>
typedef int (*callBack_)(void);

int callbackFunc(){//callback function.
    printf("\nHello");
    return 1;
}

void runloop(callBack_ fn) {
    for (int i=0;i<5;i++)
    {
        if (i==3){
            (*fn)();//executing a callback
        }
        printf("\ni=%d", i);
    }
}

int main()
{
    callBack_ fptr = &callbackFunc;//registering a callback.
    
    runloop(fptr);
    return 0;
}

//“A function pointer’s return type and parameter list must exactly match the function it points to. 
//The return type doesn’t have to be related to the parameter types — it just has to match the signature. 
//In my example, the callback returns int but takes no parameters, which is perfectly valid.”