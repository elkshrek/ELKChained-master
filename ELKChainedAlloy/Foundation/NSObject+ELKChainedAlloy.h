//
//  NSObject+ELKChainedAlloy.h
//  ELKChained-master
//
//  Created by Jonathan on 2019/6/9.
//  Copyright © 2019 elk. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (ELKChainedAlloy)


/**
 make a object, return a new object
 
 @return a new object
 */
+ (instancetype)elk_make;

/**
 make a object, return a new object

 @param block block
 @return a new object
 */
+ (instancetype)elk_makeBlock:(void (^)(id _Nonnull make))block;



@property (nonatomic, strong, readonly) NSObject * _Nonnull (^elk_performSelOnMain)(SEL selector, id _Nonnull obj, BOOL untilDone);
@property (nonatomic, strong, readonly) NSObject * _Nonnull (^elk_performSelOnThread)(SEL selector, NSThread * _Nonnull thread, id _Nonnull obj, BOOL untilDone);
@property (nonatomic, strong, readonly) NSObject * _Nonnull (^elk_performSelInBackground)(SEL selector, id _Nonnull obj);
@property (nonatomic, strong, readonly) NSObject * _Nonnull (^elk_performSelWithDelay)(SEL selector, id _Nonnull obj, NSTimeInterval tInterval);


@property (nonatomic, strong, readonly) NSObject * _Nonnull (^elk_setValueForKey)(id _Nonnull object, NSString * _Nonnull key);
@property (nonatomic, copy, readonly) id _Nonnull (^elk_valueForKey)(NSString * _Nonnull key);
@property (nonatomic, strong, readonly) NSObject * _Nonnull (^elk_setValueForKeyPath)(id _Nonnull object, NSString * _Nonnull keyPath);
@property (nonatomic, copy, readonly) id _Nonnull (^elk_valueForKeyPath)(NSString * _Nonnull keyPath);
@property (nonatomic, strong, readonly) NSObject * _Nonnull (^elk_setValuesForKeysWithDict)(NSDictionary * _Nonnull dict);
@property (nonatomic, copy, readonly) NSDictionary * _Nonnull (^elk_dictWithValuesForKeys)(NSArray<NSString *> * _Nonnull keyArray);


@property (nonatomic, copy, readonly) BOOL (^elk_isEqual)(id _Nonnull obj);
@property (nonatomic, copy, readonly) BOOL (^elk_isKindOfClass)(Class cls);
@property (nonatomic, copy, readonly) BOOL (^elk_isMemberOfClass)(Class cls);
@property (nonatomic, copy, readonly) BOOL (^elk_conformsToProtocol)(Protocol * _Nonnull protocol);
@property (nonatomic, copy, readonly) BOOL (^elk_responsToSel)(SEL selector);



@end

NS_ASSUME_NONNULL_END
