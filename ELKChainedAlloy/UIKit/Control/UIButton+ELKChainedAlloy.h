//
//  UIButton+ELKChainedAlloy.h
//  ELKChained-master
//
//  Created by Jonathan on 2019/6/5.
//  Copyright © 2019 elk. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN


/**
 ELKControlState is a shorthand for UIControlState, ELKControlState is exactly the same as UIControlState.
 */
typedef NS_OPTIONS(NSUInteger, ELKControlState) {
    /**
     ELKCSNormal is equal to UIControlStateNormal
     */
    ELKCSNormal      = UIControlStateNormal,
    /**
     ELKCSHighlighted is equal to UIControlStateHighlighted
     */
    ELKCSHighlighted = UIControlStateHighlighted,
    /**
     ELKCSDisabled is equal to UIControlStateDisabled
     */
    ELKCSDisabled    = UIControlStateDisabled,
    /**
     ELKCSSelected is equal to UIControlStateSelected
     */
    ELKCSSelected    = UIControlStateSelected,
    /**
     ELKCSFocused is equal to UIControlStateFocused
     */
    ELKCSFocused NS_ENUM_AVAILABLE_IOS(9_0) = UIControlStateFocused,
    /**
     ELKCSApplication is equal to UIControlStateApplication
     */
    ELKCSApplication = UIControlStateApplication,
    /**
     ELKCSReserved is equal to UIControlStateReserved
     */
    ELKCSReserved    = UIControlStateReserved
};


/**
 typedef a block to response target/action of button 

 @param sender the UIButton object
 */
typedef void(^ELKControlEventBlock)(UIButton *sender);


@interface UIButton (ELKChainedAlloy)

#pragma mark - make a button
/**
 make a button, return a new button
 
 @return a new button object
 */
+ (instancetype)elk_make;

/**
 make a button, return a new button
 
 @param block block
 @return a new button object
 */
+ (instancetype)elk_makeBlock:(void (^)(UIButton * _Nonnull make))block;

/**
 make a button with UIButtonType, return a new button
 
 @param btnType UIButtonType
 @return a new button object
 */
+ (instancetype)elk_makeWithType:(UIButtonType)btnType;

/**
 make a button with UIButtonType, return a new button
 
 @param btnType UIButtonType
 @param block block
 @return a new button object
 */
+ (instancetype)elk_makeWithType:(UIButtonType)btnType block:(void (^)(UIButton * _Nonnull make))block;


#pragma mark - set button title
/**
 set button title with ELKControlState
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull (^elk_setTitle)(NSString * _Nonnull title, ELKControlState state);

/**
 set button title for ELKCSNormal(UIControlStateNormal)
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull(^elk_setNormalTitle)(NSString * _Nonnull title);

/**
 set button title for ELKCSHighlighted(UIControlStateHighlighted)
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull(^elk_setHighlightedTitle)(NSString * _Nonnull title);

/**
 set button title for ELKCSDisabled(UIControlStateDisabled)
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull(^elk_setDisabledTitle)(NSString * _Nonnull title);

/**
 set button title for ELKCSSelected(UIControlStateSelected)
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull(^elk_setSelectedTitle)(NSString * _Nonnull title);

/**
 set button title for ELKCSFocused(UIControlStateFocused)
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull(^elk_setFocusedTitle)(NSString * _Nonnull title);


#pragma mark - set button title color
/**
 set button title color with ELKControlState
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull (^elk_setTitleColor)(UIColor * _Nonnull color, ELKControlState state);

/**
 set button title color for ELKCSNormal(UIControlStateNormal)
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull(^elk_setNormalTitleColor)(UIColor * _Nonnull color);

/**
 set button title color for ELKCSHighlighted(UIControlStateHighlighted)
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull(^elk_setHighlightedTitleColor)(UIColor * _Nonnull color);

/**
 set button title color for ELKCSDisabled(UIControlStateDisabled)
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull(^elk_setDisabledTitleColor)(UIColor * _Nonnull color);

/**
 set button title color for ELKCSSelected(UIControlStateSelected)
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull(^elk_setSelectedTitleColor)(UIColor * _Nonnull color);

/**
 set button title color for ELKCSFocused(UIControlStateFocused)
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull(^elk_setFocusedTitleColor)(UIColor * _Nonnull color);


#pragma mark - set button background color
/**
 set button background color
 */
//@property (nonatomic, strong, readonly) UIButton * _Nonnull (^elk_setBackColor)(UIColor * _Nonnull color);

@property (nonatomic, strong, readonly) UIButton * _Nonnull (^elk_setFrame)(CGRect frame);

#pragma mark - set button background image
/**
 set button background image with ELKControlState
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull (^elk_setBackImage)(UIImage * _Nonnull image, ELKControlState state);

/**
 set button background image for ELKCSNormal(UIControlStateNormal)
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull(^elk_setNormalBackImage)(UIImage * _Nonnull image);

/**
 set button background image for ELKCSHighlighted(UIControlStateHighlighted)
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull(^elk_setHighlightedBackImage)(UIImage * _Nonnull image);

/**
 set button background image for ELKCSDisabled(UIControlStateDisabled)
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull(^elk_setDisabledBackImage)(UIImage * _Nonnull image);

/**
 set button background image for ELKCSSelected(UIControlStateSelected)
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull(^elk_setSelectedBackImage)(UIImage * _Nonnull image);

/**
 set button background image for ELKCSFocused(UIControlStateFocused)
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull(^elk_setFocusedBackImage)(UIImage * _Nonnull image);


#pragma mark - set button image
/**
 set button image with ELKControlState
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull (^elk_setImage)(UIImage * _Nonnull image, ELKControlState state);

/**
 set button image for ELKCSNormal(UIControlStateNormal)
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull(^elk_setNormalImage)(UIImage * _Nonnull image);

/**
 set button image for ELKCSHighlighted(UIControlStateHighlighted)
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull(^elk_setHighlightedImage)(UIImage * _Nonnull image);

/**
 set button image for ELKCSDisabled(UIControlStateDisabled)
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull(^elk_setDisabledImage)(UIImage * _Nonnull image);

/**
 set button image for ELKCSSelected(UIControlStateSelected)
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull(^elk_setSelectedImage)(UIImage * _Nonnull image);

/**
 set button image for ELKCSFocused(UIControlStateFocused)
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull(^elk_setFocusedImage)(UIImage * _Nonnull image);


#pragma mark - add target
/**
 add target/action for particular event.
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull(^elk_addTarget)(id target, SEL action, UIControlEvents event);

/**
 add target/action for particular event.
 */
@property (nonatomic, strong, readonly) UIButton * _Nonnull(^elk_addTargetBlock)(UIControlEvents event, ELKControlEventBlock block);









@end

NS_ASSUME_NONNULL_END
