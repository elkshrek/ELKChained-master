//
//  UITableView+ELKChainedAlloy.h
//  ELKChained-master
//
//  Created by Jonathan on 2019/6/10.
//  Copyright © 2019 elk. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^ELKTableViewMakeBlock)(UITableView * _Nonnull make);

@interface UITableView (ELKChainedAlloy)


/**
 make a UITableView, return a new object
 
 @return a new UITableView
 */
+ (UITableView * _Nonnull)elk_make;

/**
 make a UITableView, return a new object
 
 @param block block
 @return a new UITableView
 */
+ (UITableView * _Nonnull)elk_makeBlock:(void (^ _Nullable)(UITableView * _Nonnull make))block;

/**
 make a UITableView, return a new object

 @param style UITableViewStyle
 @return a new UITableView
 */
+ (UITableView * _Nonnull)elk_makeStyle:(UITableViewStyle)style;

/**
 make a UITableView, return a new object

 @param style UITableViewStyle
 @param block block
 @return a new UITableView
 */
+ (UITableView * _Nonnull)elk_makeStyle:(UITableViewStyle)style block:(void (^ _Nullable)(UITableView * _Nonnull make))block;


/**
 Make A UITableView, return a new object

 @param style UITableViewStyle
 @return Object Of UITableView
 */
UITableView * _Nonnull ELK_makeTableView(UITableViewStyle style);

/**
 Make A UITableView, return a new object

 @param style UITableViewStyle
 @param block block
 @return Object Of UITableView
 */
UITableView * _Nonnull ELK_makeTableViewBlock(UITableViewStyle style, ELKTableViewMakeBlock _Nullable block);


/**
 set dataSource
 */
@property (nonatomic, copy, readonly) UITableView * _Nonnull (^elk_setDataSource)(id<UITableViewDataSource> _Nullable dataSource);

/**
 set delegate
 */
@property (nonatomic, copy, readonly) UITableView * _Nonnull (^elk_setDelegate)(id<UITableViewDelegate> _Nullable delegate);

/// set prefetchDataSource
@property (nonatomic, copy, readonly) API_AVAILABLE(ios(10.0)) UITableView * _Nonnull (^elk_setPrefetchDataSource)(id<UITableViewDataSourcePrefetching> _Nullable prefetchDataSource);

/// set dragDelegate
@property (nonatomic, copy, readonly) API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(tvos, watchos) UITableView * _Nonnull (^elk_setDragDelegate)(id<UITableViewDragDelegate> _Nullable dragDelegate);

/// set dropDelegate
@property (nonatomic, copy, readonly) API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(tvos, watchos) UITableView * _Nonnull (^elk_setDropDelegate)(id<UITableViewDropDelegate> _Nullable dropDelegate);

/**
 set table header view
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setTableHeaderView)(UIView * _Nullable tableHeaderView);

/**
 set table footer view
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setTableFooterView)(UIView * _Nullable tableFooterView);

/**
 set row height
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setRowHeight)(CGFloat rowHeight);

/**
 set section header height
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setSectionHeadHeight)(CGFloat headHeight);

/**
 set section footer height
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setSectionFootHeight)(CGFloat footHeight);

/**
 set estimated row height
 */
@property (nonatomic, strong, readonly) NS_AVAILABLE_IOS(7_0) UITableView * _Nonnull (^elk_setEstimatedRowHeight)(CGFloat estRowHeight);

/// default is UITableViewAutomaticDimension, set to 0 to disable
/// setEstimatedSectionHeaderHeight:
@property (nonatomic, copy, readonly) API_AVAILABLE(ios(7.0)) UITableView * _Nonnull (^elk_setEstimatedSectionHeaderHeight)(CGFloat estHeaderHeight);

/// default is UITableViewAutomaticDimension, set to 0 to disable
/// setEstimatedSectionFooterHeight:
@property (nonatomic, copy, readonly) API_AVAILABLE(ios(7.0)) UITableView * _Nonnull (^elk_setEstimatedSectionFooterHeight)(CGFloat estFooterHeight);

/**
 set section index color
 */
@property (nonatomic, strong, readonly) NS_AVAILABLE_IOS(6_0) UITableView * _Nonnull (^elk_setSectionIndexColor)(UIColor * _Nullable color);

/**
 set section index backgroud color
 */
@property (nonatomic, strong, readonly) NS_AVAILABLE_IOS(7_0) UITableView * _Nonnull (^elk_setSectionIndexBgColor)(UIColor * _Nullable color);

/**
 set section index tracking background color
 */
@property (nonatomic, strong, readonly) NS_AVAILABLE_IOS(6_0) UITableView * _Nonnull (^elk_setSectionIndexTrackBgColor)(UIColor * _Nullable color);

/**
 set separator style
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setSeparatorStyle)(UITableViewCellSeparatorStyle sepStyle);

/**
 set separator color
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setSeparatorColor)(UIColor * _Nullable color);

/**
 set separator inset
 */
@property (nonatomic, strong, readonly) NS_AVAILABLE_IOS(7_0) UITableView * _Nonnull (^elk_setSeparatInset)(UIEdgeInsets inset);

// Changes how custom separatorInset values are interpreted. The default value is UITableViewSeparatorInsetFromCellEdges
@property (nonatomic, copy, readonly) API_AVAILABLE(ios(11.0), tvos(11.0)) UITableView * _Nonnull (^elk_setSeparatorInsetReference)(UITableViewSeparatorInsetReference reference);

/**
 register class for cell reuse identifier
 */
@property (nonatomic, strong, readonly) NS_AVAILABLE_IOS(6_0) UITableView * _Nonnull (^elk_registerClassForCell)(Class cellClass, NSString * _Nonnull identifier);

/**
 register nib for cell reuse identifier
 */
@property (nonatomic, strong, readonly) NS_AVAILABLE_IOS(5_0) UITableView * _Nonnull (^elk_registerNibForCell)(UINib * _Nonnull nib, NSString * _Nonnull identifier);

/**
 dequeue Reusable Cell With Identifier
 */
@property (nonatomic, copy, readonly) __kindof UITableViewCell * _Nonnull (^elk_dequeueReusableCell)(NSString * _Nonnull identifier);

/**
 dequeue Reusable Cell With Identifier For IndexPath
 */
@property (nonatomic, copy, readonly) NS_AVAILABLE_IOS(6_0) __kindof UITableViewCell * _Nonnull (^elk_dequeueReusableCellForIndexPath)(NSString * _Nonnull identifier, NSIndexPath *_Nonnull indexPath) ;

/**
 register nib for header footer view reuse identifier
 */
@property (nonatomic, strong, readonly) NS_AVAILABLE_IOS(6_0) UITableView * _Nonnull (^elk_registerNibForHeadFootView)(UINib * _Nonnull nib, NSString * _Nonnull identifier);

/**
 register class for header footer view reuse identifier
 */
@property (nonatomic, strong, readonly) NS_AVAILABLE_IOS(6_0) UITableView * _Nonnull (^elk_registerClassForHeadFootView)(Class hfClass, NSString * _Nonnull identifier);

/**
 like dequeueReusableCellWithIdentifier:, but for headers/footers
 */
@property (nonatomic, copy, readonly) NS_AVAILABLE_IOS(6_0) __kindof UITableViewHeaderFooterView * _Nonnull (^elk_dequeueReusableHeaderFooterView)(NSString *identifier);

/**
 set background view
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setBackgroundView)(UIView * _Nullable backView);

/**
 set editing
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setEditing)(BOOL editing);

/**
 set editing animated
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setEditingAnimated)(BOOL editing, BOOL animate);

/**
 set allows selection
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setAllowsSelection)(BOOL allowSel);

/**
 set allows multiple selection
 */
@property (nonatomic, strong, readonly) NS_AVAILABLE_IOS(5_0) UITableView * _Nonnull (^elk_setAllowsMultSelect)(BOOL AllowMult);

/**
 set allows selection during editing
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setAllowsSelectDuringEdit)(BOOL allowDuringEdit);

/**
 set allows multiple selection during editing
 */
@property (nonatomic, strong, readonly) NS_AVAILABLE_IOS(5_0) UITableView * _Nonnull (^elk_setAllowsMultSelectDuringEdit)(BOOL allowMult);

// When enabled, the table view ensures that selection is automatically triggered when focus moves to a cell.
@property (nonatomic, copy, readonly) API_AVAILABLE(ios(14.0)) API_UNAVAILABLE(watchos, tvos) UITableView * _Nonnull (^elk_setSelectionFollowsFocus)(BOOL focus);

// Drag & Drop
// To enable intra-app drags on iPhone, set this to YES.
// You can also force drags to be disabled for this table view by setting this to NO.
// By default, this will return YES on iPad and NO on iPhone.
@property (nonatomic, copy, readonly) API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(tvos, watchos) UITableView * _Nonnull (^elk_setDragInteractionEnabled)(BOOL enable);

/**
 set frame
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setFrame)(CGRect frame);
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setFrameMake)(CGFloat x, CGFloat y, CGFloat width, CGFloat height);

/**
 set background color
 */
@property (nonatomic, strong, readonly) UITableView * _Nonnull (^elk_setBackgroundColor)(UIColor * _Nonnull bgColor);


@end

NS_ASSUME_NONNULL_END
