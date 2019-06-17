//
//  NSString+ELKChainedAlloy.h
//  ELKChained-master
//
//  Created by Jonathan on 2019/6/10.
//  Copyright © 2019 elk. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (ELKChainedAlloy)



/**
 check if is equal to string
 */
@property (nonatomic, copy, readonly) BOOL (^elk_isEqualToStr)(NSString * _Nonnull string);







@end

NS_ASSUME_NONNULL_END
