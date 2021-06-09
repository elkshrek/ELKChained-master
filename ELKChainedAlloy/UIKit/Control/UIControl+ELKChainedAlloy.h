//
//  UIControl+ELKChainedAlloy.h
//  ELKChained-master
//
//  Created by Jonathan on 2019/6/10.
//  Copyright © 2019 elk. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIControl (ELKChainedAlloy)


/**
 set selected
 */
@property (nonatomic, strong, readonly) UIControl * _Nonnull (^elk_setSelected)(BOOL selected);

/**
 set enabled
 */
@property (nonatomic, strong, readonly) UIControl * _Nonnull (^elk_setEnabled)(BOOL enable);

/**
 set highlighted
 */
@property (nonatomic, strong, readonly) UIControl * _Nonnull (^elk_setHighlighted)(BOOL highlighted);

/**
 set content vertical alignment
 */
@property (nonatomic, strong, readonly) UIControl * _Nonnull (^elk_setVerticalAlignment)(UIControlContentVerticalAlignment contentAlignment);

/**
 set content horizontal alignment
 */
@property (nonatomic, strong, readonly) UIControl * _Nonnull (^elk_setHorizontalAlignment)(UIControlContentHorizontalAlignment contentAlignment);

/**
 add target action for control events
 */
@property (nonatomic, strong, readonly) UIControl * _Nonnull (^elk_addTarget)(id _Nonnull target, SEL _Nonnull selector, UIControlEvents contEvent);

/**
 remove target action for control events
 */
@property (nonatomic, strong, readonly) UIControl * _Nonnull (^elk_removeTarget)(id _Nullable target, SEL _Nullable selector, UIControlEvents contEvent);

/// Adds the UIAction to a given event. UIActions are uniqued based on their identifier, and subsequent actions with the same identifier replace previously added actions. You may add multiple UIActions for corresponding controlEvents, and you may add the same action to multiple controlEvents.
/// addAction:forControlEvents:
@property (nonatomic, strong, readonly) API_AVAILABLE(ios(14.0)) UIControl * _Nonnull (^elk_addAction)(UIAction *_Nonnull action, UIControlEvents controlEvents);

/// Removes the action from the set of passed control events.
/// removeAction:forControlEvents:
@property (nonatomic, strong, readonly) API_AVAILABLE(ios(14.0)) UIControl * _Nonnull (^elk_removeAction)(UIAction *_Nonnull action, UIControlEvents controlEvents);

/// Removes the action with the provided identifier from the set of passed control events.
/// removeActionForIdentifier:forControlEvents:
@property (nonatomic, strong, readonly) API_AVAILABLE(ios(14.0)) UIControl * _Nonnull (^elk_removeActionForIdentifier)(UIActionIdentifier actIdentifier, UIControlEvents controlEvts);


@end

NS_ASSUME_NONNULL_END
