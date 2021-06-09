//
//  UITableViewCell+ELKChainedAlloy.h
//  ELKChained-master
//
//  Created by wing on 2019/9/10.
//  Copyright © 2019 elk. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITableViewCell (ELKChainedAlloy)

/// Requests the cell update its configuration for its current state. This method is called automatically
/// when the cell's `configurationState` may have changed, as well as in other circumstances where an
/// update may be required. Multiple requests may be coalesced into a single update at the appropriate time.
/// setNeedsUpdateConfiguration
@property (nonatomic, copy, readonly) API_AVAILABLE(ios(14.0), tvos(14.0), watchos(7.0)) UITableViewCell * _Nonnull (^elk_setNeedsUpdateConfiguration)(void);

/// Returns a default list content configuration for the cell's style.
@property (nonatomic, copy, readonly) API_AVAILABLE(ios(14.0), tvos(14.0), watchos(7.0)) UIListContentConfiguration *(^elk_defaultContentConfiguration)(void);

/// Setting a content configuration replaces the existing contentView of the cell with a new content view instance from the configuration,
/// or directly applies the configuration to the existing content view if the configuration is compatible with the existing content view type.
/// The default value is nil. After a configuration has been set, setting this property to nil will replace the current content view with a new content view.
@property (nonatomic, copy, readonly) API_AVAILABLE(ios(14.0), tvos(14.0), watchos(7.0)) UITableViewCell * _Nonnull (^elk_setContentConfiguration)(id<UIContentConfiguration> _Nullable contentConfiguration);

/// When YES, the cell will automatically call -updatedConfigurationForState: on its `contentConfiguration` when the cell's
/// configuration state changes, and apply the updated configuration back to the cell. The default value is YES.
@property (nonatomic, copy, readonly) API_AVAILABLE(ios(14.0), tvos(14.0), watchos(7.0)) UITableViewCell * _Nonnull (^elk_setAutomaticallyUpdatesContentConfiguration)(BOOL config);

/// Setting a background configuration supersedes the cell's backgroundView, selectedBackgroundView, and multipleSelectionBackgroundView. The default value is nil.
@property (nonatomic, copy, readonly) API_AVAILABLE(ios(14.0), tvos(14.0), watchos(7.0)) UITableViewCell * _Nonnull (^elk_setBackgroundConfiguration)(UIBackgroundConfiguration *config);

/// When YES, the cell will automatically call -updatedConfigurationForState: on its `backgroundConfiguration` when the cell's
/// configuration state changes, and apply the updated configuration back to the cell. The default value is YES.
@property (nonatomic, copy, readonly) API_AVAILABLE(ios(14.0), tvos(14.0), watchos(7.0)) UITableViewCell * _Nonnull (^elk_setAutomaticallyUpdatesBackgroundConfiguration)(BOOL autoConfig);

/**
 default is UITableViewCellSelectionStyleDefault.
 */
@property (nonatomic, copy, readonly) UITableViewCell * _Nonnull (^elk_setSelectionStyle)(UITableViewCellSelectionStyle style);

/**
 animate between regular and selected state
 */
@property (nonatomic, copy, readonly) UITableViewCell * _Nonnull (^elk_setSelectedAnimated)(BOOL selected, BOOL animated);

/**
 animate between regular and highlighted state
 */
@property (nonatomic, copy, readonly) UITableViewCell * _Nonnull (^elk_setHighlightedAnimated)(BOOL highlighted, BOOL animated);

/**
 default is NO
 */
@property (nonatomic, copy, readonly) UITableViewCell * _Nonnull (^elk_showsReorderControl)(BOOL shows);

/**
 default is YES.  This is unrelated to the indentation level below.
 */
@property (nonatomic, copy, readonly) UITableViewCell * _Nonnull (^elk_shouldIndentWhileEditing)(BOOL editing);

/**
 default is UITableViewCellAccessoryNone. use to set standard type
 */
@property (nonatomic, copy, readonly) UITableViewCell * _Nonnull (^elk_setAccessoryType)(UITableViewCellAccessoryType accType);

/**
 if set, use custom view. ignore accessoryType. tracks if enabled can calls accessory action
 */
@property (nonatomic, copy, readonly) UITableViewCell * _Nonnull (^elk_setAccessoryView)(UIView *_Nullable accessoryView);

/**
 default is UITableViewCellAccessoryNone. use to set standard type
 */
@property (nonatomic, copy, readonly) UITableViewCell * _Nonnull (^elk_setEditingAccessoryType)(UITableViewCellAccessoryType accType);

/**
 if set, use custom view. ignore editingAccessoryType. tracks if enabled can calls accessory action
 */
@property (nonatomic, copy, readonly) UITableViewCell * _Nonnull (^elk_setEditingAccessoryView)(UIView *_Nullable editingAccView);

/**
 adjust content indent. default is 0
 */
@property (nonatomic, copy, readonly) UITableViewCell * _Nonnull (^elk_setIndentationLevel)(NSInteger indentationLevel);

/**
 width for each level. default is 10.0
 */
@property (nonatomic, copy, readonly) UITableViewCell * _Nonnull (^elk_setIndentationWidth)(CGFloat indentationWidth);

/**
 allows customization of the separator frame
 */
@property (nonatomic, copy, readonly) NS_AVAILABLE_IOS(7_0) UI_APPEARANCE_SELECTOR __TVOS_PROHIBITED UITableViewCell * _Nonnull (^elk_setSeparatorInset)(UIEdgeInsets separatorInset);

/**
 show appropriate edit controls (+/- & reorder). By default -setEditing: calls setEditing:animated: with NO for animated.
 */
@property (nonatomic, copy, readonly) UITableViewCell * _Nonnull (^elk_setEditingAnimated)(BOOL editing, BOOL animated);

/**
 set focus style
 */
@property (nonatomic, copy, readonly) NS_AVAILABLE_IOS(9_0) UI_APPEARANCE_SELECTOR UITableViewCell * _Nonnull (^elk_setFocusStyle)(UITableViewCellFocusStyle focusStyle);

/**
 Controls whether the cell in the table view allows user interaction once it is part of a drag (UITableViewCellDragStateDragging).
 Default is NO.
 */
@property (nonatomic, copy, readonly) API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(tvos, watchos) UITableViewCell * _Nonnull (^elk_setUserInteractionEnabledWhileDragging)(BOOL enable);


/**
 set background color
 */
@property (nonatomic, strong, readonly) UITableViewCell * _Nonnull (^elk_setBackgroundColor)(UIColor * _Nonnull bgColor);


@end

NS_ASSUME_NONNULL_END
