//
//  UIImageView+ELKChainedAlloy.h
//  ELKChained-master
//
//  Created by Jonathan on 2019/6/10.
//  Copyright © 2019 elk. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (ELKChainedAlloy)


/**
 make a UIImageView, return a new object
 
 @return a new UIImageView
 */
+ (UIImageView * _Nonnull)elk_make;

/**
 make a UIImageView, return a new object
 
 @param block block
 @return a new UIImageView
 */
+ (UIImageView * _Nonnull)elk_makeBlock:(void (^ _Nullable)(UIImageView * _Nonnull make))block;



/**
 set image
 */
@property (nonatomic, strong, readonly) UIImageView * _Nonnull (^elk_setImage)(UIImage * _Nonnull image);

/**
 set image with name
 */
@property (nonatomic, strong, readonly) UIImageView * _Nonnull (^elk_setImageNamed)(NSString * _Nonnull imgName);



/**
 set highlighted image
 */
@property (nonatomic, strong, readonly) UIImageView * _Nonnull (^elk_setHighlightedImage)(UIImage * _Nonnull hImage);

/**
 set highlighted image with name
 */
@property (nonatomic, strong, readonly) UIImageView * _Nonnull (^elk_setHighlightedImageNamed)(NSString * _Nonnull hImgName);


/**
 set highlighted
 */
@property (nonatomic, strong, readonly) UIImageView * _Nonnull (^elk_setHighlighted)(BOOL highLight);

/// setPreferredSymbolConfiguration
@property (nonatomic, copy, readonly) API_AVAILABLE(ios(13.0),tvos(13.0),watchos(6.0)) UIImageView * _Nonnull (^elk_setPreferredSymbolConfiguration)(UIImageSymbolConfiguration *_Nullable preferredSymbolConfiguration);

/**
 set animation images
 */
@property (nonatomic, strong, readonly) UIImageView * _Nonnull (^elk_setAnimationImages)(NSArray<UIImage *> * _Nonnull images);

/**
 set animation images with names
 */
@property (nonatomic, strong, readonly) UIImageView *_Nonnull (^elk_setAnimationImgNames)(NSArray<NSString *> * _Nonnull imgNames);



/**
 set highlight animation images
 */
@property (nonatomic, strong, readonly) UIImageView * _Nonnull (^elk_setHighlightAnimationImages)(NSArray<UIImage *> * _Nonnull images);

/**
 set highlight animation images with names
 */
@property (nonatomic, strong, readonly) UIImageView * _Nonnull (^elk_setHighlightAnimationImgNames)(NSArray<NSString *> * _Nonnull imgNames);



/**
 set animation duration
 */
@property (nonatomic, strong,  readonly) UIImageView * _Nonnull (^elk_setAnimationDuration)(NSTimeInterval tInterval);

/**
 set animation repeat count
 */
@property (nonatomic, strong, readonly) UIImageView * _Nonnull (^elk_setAnimationRepeatCount)(NSInteger rCount);



/**
 set frame
 */
@property (nonatomic, strong, readonly) UIImageView * _Nonnull (^elk_setFrame)(CGRect frame);
@property (nonatomic, strong, readonly) UIImageView * _Nonnull (^elk_setFrameMake)(CGFloat x, CGFloat y, CGFloat width, CGFloat height);

/**
 set background color
 */
@property (nonatomic, strong, readonly) UIImageView * _Nonnull (^elk_setBackgroundColor)(UIColor * _Nonnull bgColor);


@end

NS_ASSUME_NONNULL_END
