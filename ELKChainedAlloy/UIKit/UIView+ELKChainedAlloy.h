//
//  UIView+ELKChainedAlloy.h
//  ELKChained-master
//
//  Created by Jonathan on 2019/6/8.
//  Copyright © 2019 elk. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (ELKChainedAlloy)


/**
 make a UIView, return a new object
 
 @return a new UIView
 */
+ (UIView * _Nonnull)elk_make;

/**
 make a UIView, return a new object
 
 @param block block
 @return a new UIView
 */
+ (UIView * _Nonnull)elk_makeBlock:(void (^ _Nullable)(UIView * _Nonnull make))block;



#pragma mark - base property
/**
 set frame
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setFrame)(CGRect frame);
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setFrameMake)(CGFloat x, CGFloat y, CGFloat width, CGFloat height);
@property (nonatomic, assign, readonly) CGRect elk_frame;

@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setX)(CGFloat x);
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setY)(CGFloat y);
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setWidth)(CGFloat width);
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setHeight)(CGFloat height);


@property (nonatomic, assign, readonly) CGFloat elk_x;
@property (nonatomic, assign, readonly) CGFloat elk_y;
@property (nonatomic, assign, readonly) CGFloat elk_width;
@property (nonatomic, assign, readonly) CGFloat elk_height;

@property (nonatomic, assign, readonly) CGFloat elk_maxX;
@property (nonatomic, assign, readonly) CGFloat elk_maxY;

@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setBounds)(CGRect bounds);
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setBoundsMake)(CGFloat x, CGFloat y, CGFloat width, CGFloat height);
@property (nonatomic, assign, readonly) CGRect elk_bounds;

@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setCenter)(CGPoint cPoint);
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setCenterMake)(CGFloat centerX, CGFloat centerY);
@property (nonatomic, assign, readonly) CGPoint elk_center;

@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setCenterX)(CGFloat centerX);
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setCenterY)(CGFloat centerY);
@property (nonatomic, assign, readonly) CGFloat elk_centerX;
@property (nonatomic, assign, readonly) CGFloat elk_centerY;

@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setSize)(CGSize size);
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setSizeMake)(CGFloat width, CGFloat height);
@property (nonatomic, assign, readonly) CGSize elk_size;

@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setOrigin)(CGPoint origin);
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setOriginMake)(CGFloat originX, CGFloat originY);
@property (nonatomic, assign, readonly) CGPoint elk_origin;


/**
 set background color
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setBackgroundColor)(UIColor * _Nonnull bgColor);
/**
 set alpha
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setAlpha)(CGFloat alpha);
/**
 set opaque
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setOpaque)(CGFloat opaque);

/// set border color
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setBorderColor)(UIColor *borderColor);

/// set border width
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setBorderWidth)(CGFloat borderWidth);

/// set Border with Color and Width
@property (nonatomic, copy, readonly) UIView * _Nonnull (^elk_setBorderColorWidth)(UIColor *_Nullable borderColor, CGFloat width);


/**
 set corner radius
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setCornerRadius)(CGFloat cRadius);
/**
 set mask to bounds
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setMaskToBounds)(BOOL bounds);

/// set Corner with Radius and masksToBounds
@property (nonatomic, copy, readonly) UIView * _Nonnull (^elk_setCornerAndMask)(CGFloat radius, BOOL bounds);


/**
 set clip to bounds
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setClipToBounds)(BOOL clip);
/**
 set user interaction enable
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setUserInteractionEnable)(BOOL enable);
/**
 set hidden
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setHidden)(BOOL hide);
/**
 set tag
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setTag)(NSInteger tag);
/**
 set content mode
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setContentMode)(UIViewContentMode contentMode);
/**
 set mutiple touch
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setMutipleTouch)(BOOL mutipleTouch);
/**
 set autoresize subviews
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setAutoresizeSubViews)(BOOL autoresize);
/**
 set autoresize mask
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_setAutoresizeMask)(BOOL autoresize);
/**
 end editing
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_endEditing)(BOOL force);

/**
 remove from superview
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_removeFromSuperView)(void);
/**
 insert subView at index
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_insertSubviewAtIndex)(UIView * _Nonnull subView, NSInteger index);
/**
 insert subView below tView
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_inserSubviewBelowView)(UIView * _Nonnull subView, UIView * _Nonnull tView);
/**
 insert subView above tView
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_insertSubviewAboveView)(UIView * _Nonnull subView, UIView * _Nonnull tView);
/**
 exchange subview at index with index
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_exchangeSubviewAtIndexWithIndex)(NSInteger index1, NSInteger index2);
/**
 bring subView to front
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_bringSubViewToFront)(UIView * _Nonnull subView);
/**
 send subView to back
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_sendSubviewToBack)(UIView * _Nonnull subView);
/**
 add subView
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_addSubview)(UIView * _Nonnull subView);

/**
 add gesture
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_addGesture)(UIGestureRecognizer * _Nonnull gesture);
/**
 remove gesture
 */
@property (nonatomic, strong, readonly) UIView * _Nonnull (^elk_removeGesture)(UIGestureRecognizer * _Nonnull gesture);



#pragma mark - get view property
@property (nonatomic, assign, readonly) BOOL elk_isZeroSize;



/**
 set Tint color
 */
@property (nonatomic, strong, readonly) NS_AVAILABLE_IOS(7_0) UIView * _Nonnull (^elk_setTintColor)(UIColor * _Nonnull tColor);






@end

NS_ASSUME_NONNULL_END
