//
//  single.h
//  test
//
//  Created by MEET on 13-8-6.
//  Copyright (c) 2013年 meetstudio. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface single : NSObject{
    NSString *a;
    NSString *b;
}
@property (strong, nonatomic) NSString *a;
@property (strong, nonatomic) NSString *b;
+ (single *)shareInstance;
@end
