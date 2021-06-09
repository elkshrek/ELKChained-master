//
//  UITextView+ELKChainedAlloy.h
//  ELKChained-master
//
//  Created by Jonathan on 2019/6/10.
//  Copyright © 2019 elk. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITextView (ELKChainedAlloy)


/**
 make a UITextView, return a new object
 
 @return a new UITextView
 */
+ (UITextView * _Nonnull)elk_make;

/**
 make a UITextView, return a new object
 
 @param block block
 @return a new UITextView
 */
+ (UITextView * _Nonnull)elk_makeBlock:(void (^ _Nullable)(UITextView * _Nonnull make))block;



/**
 set text
 */
@property (nonatomic, strong, readonly) UITextView * _Nonnull (^elk_setText)(NSString * _Nullable text);

/**
 set attribute text
 */
@property (nonatomic, strong, readonly) NS_AVAILABLE_IOS(6_0) UITextView * _Nonnull (^elk_setAttributeText)(NSAttributedString * _Nullable attrText);

/**
 set text color
 */
@property (nonatomic, strong, readonly) UITextView * _Nonnull (^elk_setTextColor)(UIColor * _Nullable tColor);

/**
 set font
 */
@property (nonatomic, strong, readonly) UITextView * _Nonnull (^elk_setFont)(UIFont * _Nullable font);

/**
 set system font of size
 */
@property (nonatomic, strong, readonly) UITextView * _Nonnull (^elk_setSysFont)(CGFloat fontSize);

/**
 set bold system font of size
 */
@property (nonatomic, strong, readonly) UITextView * _Nonnull (^elk_setBoldFont)(CGFloat fontSize);

/// set Keyboard Type
@property (nonatomic, strong, readonly) UITextView * _Nonnull (^elk_setKeyboardType)(UIKeyboardType keyboardType);

/// set keyboard appearance
@property (nonatomic, strong, readonly) UITextView * _Nonnull (^elk_setKeyboardAppearance)(UIKeyboardAppearance kbAppearance);

/// set ReturnKey type
@property (nonatomic, strong, readonly) UITextView * _Nonnull (^elk_setReturnKeyType)(UIReturnKeyType returnKeyType);

/// set SecureTextEntry
@property (nonatomic, copy, readonly) UITextView * _Nonnull (^elk_setSecureTextEntry)(BOOL secure);

/**
 set text alignment
 */
@property (nonatomic, strong, readonly) NS_AVAILABLE_IOS(6_0) UITextView * _Nonnull (^elk_setTextAlignment)(NSTextAlignment tAlignment);

/**
 set <UITextViewDelegate>delegate
 */
@property (nonatomic, strong, readonly) UITextView * _Nonnull (^elk_setDelegate)(id<UITextViewDelegate> _Nullable delegate);

/**
 set allows editing text attributes
 */
@property (nonatomic, strong, readonly) NS_AVAILABLE_IOS(6_0) UITextView * _Nonnull (^elk_setAllowEditTextAttribute)(BOOL allow);

/**
 set input view
 */
@property (nonatomic, strong, readonly) UITextView * _Nonnull (^elk_setInputView)(UIView * _Nullable inputView);

/**
 set input accessory view
 */
@property (nonatomic, strong, readonly) UITextView * _Nonnull (^elk_setInputAccessoryView)(UIView * _Nullable accView);

/**
 set selected range
 */
@property (nonatomic, strong, readonly) UITextView * _Nonnull (^elk_setSelectedRange)(NSRange selRange);

/**
 set edit able
 */
@property (nonatomic, strong, readonly) UITextView * _Nonnull (^elk_setEditable)(BOOL able);

/**
 set select able
 */
@property (nonatomic, strong, readonly) NS_AVAILABLE_IOS(7_0) UITextView * _Nonnull (^elk_setSelectAble)(BOOL able);

/**
 set data detector types
 */
@property (nonatomic, strong, readonly) UITextView * _Nonnull (^elk_setDataDetectorType)(UIDataDetectorTypes dType);

/**
 set text container inset
 */
@property (nonatomic, strong, readonly) NS_AVAILABLE_IOS(7_0) UITextView * _Nonnull (^elk_setTextContainerInset)(UIEdgeInsets inset);

/**
 set link text attribute
 */
@property (nonatomic, strong, readonly) NS_AVAILABLE_IOS(7_0) UITextView * _Nonnull (^elk_setLinkTextAttribute)(NSDictionary<NSAttributedStringKey,id> * _Nullable attrDict);

/**
 scroll range to visible
 */
@property (nonatomic, strong, readonly) UITextView * _Nonnull (^elk_scrollRangeToVisible)(NSRange sRange);



/**
 set frame
 */
@property (nonatomic, strong, readonly) UITextView * _Nonnull (^elk_setFrame)(CGRect frame);
@property (nonatomic, strong, readonly) UITextView * _Nonnull (^elk_setFrameMake)(CGFloat x, CGFloat y, CGFloat width, CGFloat height);

/**
 set background color
 */
@property (nonatomic, strong, readonly) UITextView * _Nonnull (^elk_setBackgroundColor)(UIColor * _Nonnull bgColor);

// When turned on, this changes the rendering scale of the text to match the standard text scaling and preserves the original font point sizes when the contents of the text view are copied to the pasteboard.  Apps that show a lot of text content, such as a text viewer or editor, should turn this on and use the standard text scaling.
@property (nonatomic, copy, readonly) API_AVAILABLE(ios(13.0)) UITextView * _Nonnull (^elk_setUsesStandardTextScaling)(BOOL usesStandardTextScaling);


@end

NS_ASSUME_NONNULL_END
