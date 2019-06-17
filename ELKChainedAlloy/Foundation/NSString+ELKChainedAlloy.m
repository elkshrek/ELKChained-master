//
//  NSString+ELKChainedAlloy.m
//  ELKChained-master
//
//  Created by Jonathan on 2019/6/10.
//  Copyright © 2019 elk. All rights reserved.
//

#import "NSString+ELKChainedAlloy.h"

@implementation NSString (ELKChainedAlloy)


/**
 check if is equal to string
 */
- (BOOL (^)(NSString * _Nonnull))elk_isEqualToStr
{
    return ^(NSString * _Nonnull string) {
        return [self isEqualToString:string];
    };
}









@end
