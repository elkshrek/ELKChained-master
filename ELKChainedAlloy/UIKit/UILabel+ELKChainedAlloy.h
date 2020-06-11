//
//  UILabel+ELKChainedAlloy.h
//  ELKChained-master
//
//  Created by Jonathan on 2019/6/10.
//  Copyright © 2019 elk. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UILabel (ELKChainedAlloy)


/**
 make a UILabel, return a new object
 
 @return a new UILabel
 */
+ (UILabel * _Nonnull)elk_make;

/**
 make a UILabel, return a new object

 @param block block
 @return a new UILabel
 */
+ (UILabel * _Nonnull)elk_makeBlock:(void (^ _Nullable)(UILabel * _Nonnull make))block;


/**
 set text
 */
@property (nonatomic, strong, readonly) UILabel * _Nonnull (^elk_setText)(NSString * _Nonnull text);

/**
 set attribute text
 */
@property (nonatomic, strong, readonly) NS_AVAILABLE_IOS(6_0) UILabel * _Nonnull (^elk_setAttributeText)(NSAttributedString * _Nonnull attrText);


/**
 set text alignment
 */
@property (nonatomic, strong, readonly) NS_AVAILABLE_IOS(6_0) UILabel * _Nonnull (^elk_setTextAlignment)(NSTextAlignment textAlign);

/**
 set text color
 */
@property (nonatomic, strong, readonly) UILabel * _Nonnull (^elk_setTextColor)(UIColor * _Nonnull color);

/**
 set highlight text color
 */
@property (nonatomic, strong, readonly) UILabel * _Nonnull (^elk_setHighlightTextColor)(UIColor * _Nonnull hColor);

/**
 set highlighted
 */
@property (nonatomic, strong, readonly) UILabel * _Nonnull (^elk_setHighlighted)(BOOL highlighted);

/**
 set enable
 */
@property (nonatomic, strong, readonly) UILabel * _Nonnull (^elk_setEnable)(BOOL enable);

/**
 set font
 */
@property (nonatomic, strong, readonly) UILabel * _Nonnull (^elk_setFont)(UIFont * _Nonnull font);

/**
 set system font with size
 */
@property (nonatomic, strong, readonly) UILabel * _Nonnull (^elk_setSysFont)(CGFloat fontSize);

/**
 set bold font with size
 */
@property (nonatomic, strong, readonly) UILabel * _Nonnull (^elk_setBoldFont)(CGFloat fontSize);



/**
 set shadow color
 */
@property (nonatomic, strong, readonly) UILabel * _Nonnull (^elk_setShadowColor)(UIColor * _Nonnull sColor);

/**
 set shadow offset
 */
@property (nonatomic, strong, readonly) UILabel * _Nonnull (^elk_setShadowOffset)(CGSize offset);


/**
 set line break mode
 */
@property (nonatomic, strong, readonly) NS_AVAILABLE_IOS(6_0) UILabel * _Nonnull (^elk_setLineBreakMode)(NSLineBreakMode lbMode);

/**
 set number of lines
 */
@property (nonatomic, strong, readonly) UILabel * _Nonnull (^elk_setNumberOfLines)(NSInteger lNumber);

/**
 set adjust font to fit width
 */
@property (nonatomic, strong, readonly) UILabel * _Nonnull (^elk_setAdjustFontToFitWidth)(BOOL adjust);

/**
 set baseline adjustment
 */
@property (nonatomic, strong, readonly) UILabel * _Nonnull (^elk_setBaselineAdjustment)(UIBaselineAdjustment lineAdjust);

/**
 draw text in rect
 */
@property (nonatomic, strong, readonly) UILabel * _Nonnull (^elk_drawTextInRect)(CGRect drawRect);


/// Set Text Font And Color
@property (nonatomic, copy, readonly) NS_AVAILABLE_IOS(6_0) UILabel * _Nonnull (^elk_setFontAndColor)(UIFont *_Nullable font, UIColor *_Nullable color);

/// Set Label Text, Font, Color
@property (nonatomic, copy, readonly) NS_AVAILABLE_IOS(6_0) UILabel * _Nonnull (^elk_setTextFontAndColor)(NSString *_Nullable text, UIFont *_Nullable font, UIColor *_Nullable color);


/// Set Text Font, Color And TextAlignment
@property (nonatomic, copy, readonly) NS_AVAILABLE_IOS(6_0) UILabel * _Nonnull (^elk_setFontColorAndAlignment)(UIFont *_Nullable font, UIColor *_Nullable color, NSTextAlignment alignment);


/// Set Label Text, Font, Color And TextAlignment
@property (nonatomic, copy, readonly) NS_AVAILABLE_IOS(6_0) UILabel * _Nonnull (^elk_setTextFontColorAndAlignment)(NSString *_Nullable text, UIFont *_Nullable font, UIColor *_Nullable color, NSTextAlignment alignment);



/**
 set frame
 */
@property (nonatomic, strong, readonly) UILabel * _Nonnull (^elk_setFrame)(CGRect frame);
@property (nonatomic, strong, readonly) UILabel * _Nonnull (^elk_setFrameMake)(CGFloat x, CGFloat y, CGFloat width, CGFloat height);

/**
 set background color
 */
@property (nonatomic, strong, readonly) UILabel * _Nonnull (^elk_setBackgroundColor)(UIColor * _Nonnull bgColor);


@end

NS_ASSUME_NONNULL_END
