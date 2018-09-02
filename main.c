//
//  main.c
//  priorityLRU
//
//  Created by x5sh1 on 04/05/2018.
//  Copyright © 2018 x5sh1. All rights reserved.
//

#include <stdio.h>
#include <cache.h>

//Priority stack.
struct priority_list{
    struct priority_list *prio_next;        //priority of next way.
    struct priority_list *prio_prev;        //priority of previouse way.
    int priority;       //priority of currenct way
};

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
