//
//  UITableViewCell+ELKChainedAlloy.m
//  ELKChained-master
//
//  Created by wing on 2019/9/10.
//  Copyright © 2019 elk. All rights reserved.
//

#import "UITableViewCell+ELKChainedAlloy.h"

@implementation UITableViewCell (ELKChainedAlloy)

/// Requests the cell update its configuration for its current state. This method is called automatically
/// when the cell's `configurationState` may have changed, as well as in other circumstances where an
/// update may be required. Multiple requests may be coalesced into a single update at the appropriate time.
/// setNeedsUpdateConfiguration
- (UITableViewCell * _Nonnull (^)(void))elk_setNeedsUpdateConfiguration
{
    return ^(void) {
        [self setNeedsUpdateConfiguration];
        return self;
    };
}

/// Returns a default list content configuration for the cell's style.
- (UIListContentConfiguration * _Nonnull (^)(void))elk_defaultContentConfiguration
{
    return ^(void) {
        UIListContentConfiguration *configList = [self defaultContentConfiguration];
        return configList;
    };
}

/// Setting a content configuration replaces the existing contentView of the cell with a new content view instance from the configuration,
/// or directly applies the configuration to the existing content view if the configuration is compatible with the existing content view type.
/// The default value is nil. After a configuration has been set, setting this property to nil will replace the current content view with a new content view.
- (UITableViewCell * _Nonnull (^)(id<UIContentConfiguration> _Nullable))elk_setContentConfiguration
{
    return ^(id<UIContentConfiguration> _Nullable contentConfiguration) {
        self.contentConfiguration = contentConfiguration;
        return self;
    };
}

/// When YES, the cell will automatically call -updatedConfigurationForState: on its `contentConfiguration` when the cell's
/// configuration state changes, and apply the updated configuration back to the cell. The default value is YES.
- (UITableViewCell * _Nonnull (^)(BOOL))elk_setAutomaticallyUpdatesContentConfiguration
{
    return ^(BOOL config) {
        self.automaticallyUpdatesContentConfiguration = config;
        return self;
    };
}

/// Setting a background configuration supersedes the cell's backgroundView, selectedBackgroundView, and multipleSelectionBackgroundView. The default value is nil.
- (UITableViewCell * _Nonnull (^)(UIBackgroundConfiguration * _Nonnull))elk_setBackgroundConfiguration
{
    return ^(UIBackgroundConfiguration *config) {
        self.backgroundConfiguration = config;
        return self;
    };
}

/// When YES, the cell will automatically call -updatedConfigurationForState: on its `backgroundConfiguration` when the cell's
/// configuration state changes, and apply the updated configuration back to the cell. The default value is YES.
- (UITableViewCell * _Nonnull (^)(BOOL))elk_setAutomaticallyUpdatesBackgroundConfiguration
{
    return ^(BOOL autoConfig) {
        self.automaticallyUpdatesBackgroundConfiguration = autoConfig;
        return self;
    };
}

/**
 default is UITableViewCellSelectionStyleDefault.
 */
- (UITableViewCell * _Nonnull (^)(UITableViewCellSelectionStyle))elk_setSelectionStyle
{
    return ^(UITableViewCellSelectionStyle style) {
        [self setSelectionStyle:style];
        return self;
    };
}

/**
 animate between regular and selected state
 */
- (UITableViewCell * _Nonnull (^)(BOOL, BOOL))elk_setSelectedAnimated
{
    return ^(BOOL selected, BOOL animated) {
        [self setSelected:selected animated:animated];
        return self;
    };
}

/**
 animate between regular and highlighted state
 */
- (UITableViewCell * _Nonnull (^)(BOOL, BOOL))elk_setHighlightedAnimated
{
    return ^(BOOL highlighted, BOOL animated) {
        [self setHighlighted:highlighted animated:animated];
        return self;
    };
}

/**
 default is NO
 */
- (UITableViewCell * _Nonnull (^)(BOOL))elk_showsReorderControl
{
    return ^(BOOL shows) {
        [self setShowsReorderControl:shows];
        return self;
    };
}

/**
 default is YES.  This is unrelated to the indentation level below.
 */
- (UITableViewCell * _Nonnull (^)(BOOL))elk_shouldIndentWhileEditing
{
    return ^(BOOL editing) {
        [self setShouldIndentWhileEditing:editing];
        return self;
    };
}

/**
 default is UITableViewCellAccessoryNone. use to set standard type
 */
- (UITableViewCell * _Nonnull (^)(UITableViewCellAccessoryType))elk_setAccessoryType
{
    return ^(UITableViewCellAccessoryType accType) {
        [self setAccessoryType:accType];
        return self;
    };
}

/**
 if set, use custom view. ignore accessoryType. tracks if enabled can calls accessory action
 */
- (UITableViewCell * _Nonnull (^)(UIView * _Nullable))elk_setAccessoryView
{
    return ^(UIView *_Nullable accessoryView) {
        [self setAccessoryView:accessoryView];
        return self;
    };
}

/**
 default is UITableViewCellAccessoryNone. use to set standard type
 */
- (UITableViewCell * _Nonnull (^)(UITableViewCellAccessoryType))elk_setEditingAccessoryType
{
    return ^(UITableViewCellAccessoryType accType) {
        [self setEditingAccessoryType:accType];
        return self;
    };
}

/**
 if set, use custom view. ignore editingAccessoryType. tracks if enabled can calls accessory action
 */
- (UITableViewCell * _Nonnull (^)(UIView * _Nullable))elk_setEditingAccessoryView
{
    return ^(UIView *_Nullable editingAccView) {
        [self setEditingAccessoryView:editingAccView];
        return self;
    };
}

/**
 adjust content indent. default is 0
 */
- (UITableViewCell * _Nonnull (^)(NSInteger))elk_setIndentationLevel
{
    return ^(NSInteger indentationLevel) {
        [self setIndentationLevel:indentationLevel];
        return self;
    };
}

/**
 width for each level. default is 10.0
 */
- (UITableViewCell * _Nonnull (^)(CGFloat))elk_setIndentationWidth
{
    return ^(CGFloat indentationWidth) {
        [self setIndentationWidth:indentationWidth];
        return self;
    };
}

/**
 allows customization of the separator frame
 */
- (UITableViewCell * _Nonnull (^)(UIEdgeInsets))elk_setSeparatorInset NS_AVAILABLE_IOS(7_0) UI_APPEARANCE_SELECTOR __TVOS_PROHIBITED
{
    return ^(UIEdgeInsets separatorInset) {
        [self setSeparatorInset:separatorInset];
        return self;
    };
}

/**
 show appropriate edit controls (+/- & reorder). By default -setEditing: calls setEditing:animated: with NO for animated.
 */
- (UITableViewCell * _Nonnull (^)(BOOL, BOOL))elk_setEditingAnimated
{
    return ^(BOOL editing, BOOL animated) {
        [self setEditing:editing animated:animated];
        return self;
    };
}

/**
 set focus style
 */
- (UITableViewCell * _Nonnull (^)(UITableViewCellFocusStyle))elk_setFocusStyle NS_AVAILABLE_IOS(9_0) UI_APPEARANCE_SELECTOR
{
    return ^(UITableViewCellFocusStyle focusStyle) {
        [self setFocusStyle:focusStyle];
        return self;
    };
}

/**
 Controls whether the cell in the table view allows user interaction once it is part of a drag (UITableViewCellDragStateDragging).
 Default is NO.
 */
- (UITableViewCell * _Nonnull (^)(BOOL))elk_setUserInteractionEnabledWhileDragging
{
    return ^(BOOL enable) {
        [self setUserInteractionEnabledWhileDragging:enable];
        return self;
    };
}


- (UITableViewCell * _Nonnull (^)(UIColor * _Nonnull))elk_setBackgroundColor
{
    return ^(UIColor * _Nonnull bgColor) {
        [self setBackgroundColor:bgColor];
        return self;
    };
}

@end
