//
//  single.m
//  test
//
//  Created by MEET on 13-8-6.
//  Copyright (c) 2013年 meetstudio. All rights reserved.
//

#import "single.h"

@implementation single
@synthesize a;
@synthesize b;
+ (single *)shareInstance{
    static single *instance = nil;
    if (instance == nil)
    {
        instance = [[single alloc] init];
    }
    return instance;
}
@end
