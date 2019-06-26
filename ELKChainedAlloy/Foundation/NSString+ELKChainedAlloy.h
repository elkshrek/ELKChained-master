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
 compare
 */
@property (nonatomic, copy, readonly) NSComparisonResult (^elk_compare)(NSString * _Nonnull string);

/**
 compare options
 */
@property (nonatomic, copy, readonly) NSComparisonResult (^elk_compareOptions)(NSString * _Nonnull string, NSStringCompareOptions mask);

/**
 compare options range
 */
@property (nonatomic, copy, readonly) NSComparisonResult (^elk_compareOptionsRange)(NSString * _Nonnull string, NSStringCompareOptions mask, NSRange range);

/**
 compare options range locale
 */
@property (nonatomic, copy, readonly) NSComparisonResult (^elk_compareOptionsRangeLocale)(NSString * _Nonnull string, NSStringCompareOptions mask, NSRange range, id _Nullable locale);

/**
 case insensitive compare
 */
@property (nonatomic, copy, readonly) NSComparisonResult (^elk_caseInsensitiveCompare)(NSString * _Nonnull string);

/**
 localized compare
 */
@property (nonatomic, copy, readonly) NSComparisonResult (^elk_localizedCompare)(NSString * _Nonnull string);

/**
 localized case insensitive compare
 */
@property (nonatomic, copy, readonly) NSComparisonResult (^elk_localizedCaseInsensitiveCompare)(NSString * _Nonnull string);

/**
 localized standard compare
 */
@property (nonatomic, copy, readonly) NSComparisonResult (^elk_localizedStandardCompare)(NSString * _Nonnull string);

/**
 check if is equal to string
 */
@property (nonatomic, copy, readonly) BOOL (^elk_isEqualToStr)(NSString * _Nonnull string);

/**
 has prefix
 */
@property (nonatomic, copy, readonly) BOOL (^elk_hasPrefix)(NSString * _Nonnull str);

/**
 has suffix
 */
@property (nonatomic, copy, readonly) BOOL (^elk_hasSuffix)(NSString * _Nonnull str);

/**
 common prefix with string options
 */
@property (nonatomic, copy, readonly) NSString * _Nonnull (^elk_commonPrefixWithStringOption)(NSString * _Nonnull str, NSStringCompareOptions mask);

/**
 contains string
 */
@property (nonatomic, copy, readonly) BOOL (^elk_containsString)(NSString * _Nonnull str) API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(9.0));

/**
 localized case insensitive contains string
 */
@property (nonatomic, copy, readonly) BOOL (^elk_localizedCaseInsensitiveContainsString)(NSString * _Nonnull str) API_AVAILABLE(macos(10.10), ios(8.0), watchos(2.0), tvos(9.0));

/**
 localized standard contains string
 */
@property (nonatomic, copy, readonly) BOOL (^elk_localizedStandardContainsString)(NSString * _Nonnull str) API_AVAILABLE(macos(10.11), ios(9.0), watchos(2.0), tvos(9.0));

/**
 localized standard range of string
 */
@property (nonatomic, copy, readonly) NSRange (^elk_localizedStandardRangeOfString)(NSString * _Nonnull str) API_AVAILABLE(macos(10.11), ios(9.0), watchos(2.0), tvos(9.0));

/**
 range of string
 */
@property (nonatomic, copy, readonly) NSRange (^elk_rangeOfString)(NSString * _Nonnull searchString);

/**
 range of string options
 */
@property (nonatomic, copy, readonly) NSRange (^elk_rangeOfStringOptions)(NSString * _Nonnull searchString, NSStringCompareOptions mask);

/**
 range of string options range
 */
@property (nonatomic, copy, readonly) NSRange (^elk_rangeOfStringOptionRange)(NSString * _Nonnull searchString, NSStringCompareOptions mask, NSRange range);

/**
 range of string options range locale
 */
@property (nonatomic, copy, readonly) NSRange (^elk_rangeOfStringOptionRangeLocale)(NSString * _Nonnull searchString, NSStringCompareOptions mask, NSRange range, NSLocale * _Nullable locale) API_AVAILABLE(macos(10.5), ios(2.0), watchos(2.0), tvos(9.0));

/**
 range of character from set
 */
@property (nonatomic, copy, readonly) NSRange (^elk_rangeOfCharacterFromSet)(NSCharacterSet * _Nonnull searchSet);

/**
 range of character from set options
 */
@property (nonatomic, copy, readonly) NSRange (^elk_rangeOfCharacterFromSetOption)(NSCharacterSet * _Nonnull searchSet, NSStringCompareOptions mask);

/**
 range of character from set options range
 */
@property (nonatomic, copy, readonly) NSRange (^elk_rangeOfCharacterFromSetOptionRange)(NSCharacterSet * _Nonnull searchSet, NSStringCompareOptions mask, NSRange range);

/**
 range of composed character sequence at index
 */
@property (nonatomic, copy, readonly) NSRange (^elk_rangeOfComposedCharacterSequenceAtIndex)(NSUInteger index);

/**
 range of composed character sequences for range
 */
@property (nonatomic, copy, readonly) NSRange (^elk_rangeOfComposedCharacterSequencesForRange)(NSRange range) API_AVAILABLE(macos(10.5), ios(2.0), watchos(2.0), tvos(9.0));

/**
 string by appending string
 */
@property (nonatomic, copy, readonly) NSString * _Nonnull (^elk_stringByAppendingString)(NSString * _Nonnull aString);


/**
 upperace string with locale
 */
@property (nonatomic, copy, readonly) NSString * _Nonnull (^elk_uppercaseStringWithLocale)(NSLocale * _Nullable locale);










/**
 substring from index
 */
@property (nonatomic, copy, readonly) NSString * _Nonnull (^elk_substringFromIndex)(NSUInteger from);

/**
 substring to index
 */
@property (nonatomic, copy, readonly) NSString * _Nonnull (^elk_substringToIndex)(NSUInteger to);

/**
 substring with range
 */
@property (nonatomic, copy, readonly) NSString * _Nonnull (^elk_substringWithRange)(NSRange range);















@end

NS_ASSUME_NONNULL_END
