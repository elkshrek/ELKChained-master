//
//  UIControl+ELKChainedAlloy.m
//  ELKChained-master
//
//  Created by Jonathan on 2019/6/10.
//  Copyright © 2019 elk. All rights reserved.
//

#import "UIControl+ELKChainedAlloy.h"

@implementation UIControl (ELKChainedAlloy)


/**
 set selected
 */
- (UIControl * _Nonnull (^)(BOOL))elk_setSelected
{
    return ^(BOOL selected) {
        [self setSelected:selected];
        return self;
    };
}

/**
 set enabled
 */
- (UIControl * _Nonnull (^)(BOOL))elk_setEnabled
{
    return ^(BOOL enable) {
        [self setEnabled:enable];
        return self;
    };
}

/**
 set highlighted
 */
- (UIControl * _Nonnull (^)(BOOL))elk_setHighlighted
{
    return ^(BOOL highlighted) {
        [self setHighlighted:highlighted];
        return self;
    };
}

/**
 set content vertical alignment
 */
- (UIControl * _Nonnull (^)(UIControlContentVerticalAlignment))elk_setVerticalAlignment
{
    return ^(UIControlContentVerticalAlignment contentAlignment) {
        [self setContentVerticalAlignment:contentAlignment];
        return self;
    };
}

/**
 set content horizontal alignment
 */
- (UIControl * _Nonnull (^)(UIControlContentHorizontalAlignment))elk_setHorizontalAlignment
{
    return ^(UIControlContentHorizontalAlignment contentAlignment) {
        [self setContentHorizontalAlignment:contentAlignment];
        return self;
    };
}

/**
 add target action for control events
 */
- (UIControl * _Nonnull (^)(id _Nonnull, SEL _Nonnull, UIControlEvents))elk_addTarget
{
    return ^(id _Nonnull target, SEL _Nonnull selector, UIControlEvents contEvent) {
        [self addTarget:target action:selector forControlEvents:contEvent];
        return self;
    };
}

/**
 remove target action for control events
 */
- (UIControl * _Nonnull (^)(id _Nullable, SEL _Nullable, UIControlEvents))elk_removeTarget
{
    return ^(id _Nullable target, SEL _Nullable selector, UIControlEvents contEvent) {
        [self removeTarget:target action:selector forControlEvents:contEvent];
        return self;
    };
}


/// Adds the UIAction to a given event. UIActions are uniqued based on their identifier, and subsequent actions with the same identifier replace previously added actions. You may add multiple UIActions for corresponding controlEvents, and you may add the same action to multiple controlEvents.
/// addAction:forControlEvents:
- (UIControl * _Nonnull (^)(UIAction * _Nonnull, UIControlEvents))elk_addAction
API_AVAILABLE(ios(14.0))
{
    return ^(UIAction *_Nonnull action, UIControlEvents controlEvents) {
        [self addAction:action forControlEvents:controlEvents];
        return self;
    };
}

/// Removes the action from the set of passed control events.
/// removeAction:forControlEvents:
- (UIControl * _Nonnull (^)(UIAction * _Nonnull, UIControlEvents))elk_removeAction
API_AVAILABLE(ios(14.0))
{
    return ^(UIAction *_Nonnull action, UIControlEvents controlEvents) {
        [self removeAction:action forControlEvents:controlEvents];
        return self;
    };
}

/// Removes the action with the provided identifier from the set of passed control events.
/// removeActionForIdentifier:forControlEvents:
- (UIControl * _Nonnull (^)(UIActionIdentifier _Nonnull, UIControlEvents))elk_removeActionForIdentifier
API_AVAILABLE(ios(14.0))
{
    return ^(UIActionIdentifier actIdentifier, UIControlEvents controlEvts) {
        [self removeActionForIdentifier:actIdentifier forControlEvents:controlEvts];
        return self;
    };
}

@end
