//
//  UICollectionView+ELKChainedAlloy.h
//  ELKChained-master
//
//  Created by Jonathan on 2019/6/10.
//  Copyright © 2019 elk. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UICollectionView (ELKChainedAlloy)


/**
 make a UICollectionView, return a new object
 
 @return a new UICollectionView
 */
+ (UICollectionView * _Nonnull)elk_make;

/**
 make a UICollectionView, return a new object
 
 @param block block
 @return a new UICollectionView
 */
+ (UICollectionView * _Nonnull)elk_makeBlock:(void (^ _Nullable)(UICollectionView * _Nonnull make))block;

/**
 make a UICollecitonView, return a new object
 
 @param layout UICollectionViewLayout
 @return a new UICollectionView
 */
+ (UICollectionView * _Nonnull)elk_makeViewLayout:(UICollectionViewLayout * _Nonnull)layout;

/**
 make a UICollecitonView, return a new object
 
 @param layout UICollectionViewLayout
 @param block block
 @return return a new UICollectionView
 */
+ (UICollectionView * _Nonnull)elk_makeViewLayout:(UICollectionViewLayout * _Nonnull)layout block:(void (^ _Nullable)(UICollectionView * _Nonnull make))block;


/**
 set collection view layout
 */
@property (nonatomic, copy, readonly) UICollectionView * _Nonnull (^elk_setViewLayout)(UICollectionViewLayout * _Nonnull viewLayout);


@property (nonatomic, copy, readonly) UICollectionView * _Nonnull (^elk_setDelegate)(id<UICollectionViewDelegate> delegate);

@property (nonatomic, copy, readonly) UICollectionView * _Nonnull (^elk_setDataSource)(id<UICollectionViewDataSource> dataSource);

@property (nonatomic, copy, readonly) UICollectionView * _Nonnull (^elk_setPrefetchDataSource)(id<UICollectionViewDataSourcePrefetching> prefetchDataSource) NS_AVAILABLE_IOS(10_0);

@property (nonatomic, copy, readonly) UICollectionView * _Nonnull (^elk_setDragDelegate)(id<UICollectionViewDragDelegate> dragDelegate) API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(tvos, watchos);

@property (nonatomic, copy, readonly) UICollectionView * _Nonnull (^elk_setDropDelegate)(id <UICollectionViewDropDelegate> dropDelegate) API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(tvos, watchos);


/* To enable intra-app drags on iPhone, set this to YES.
 * You can also force drags to be disabled for this collection view by setting this to NO.
 * By default, For iPad this will return YES and iPhone will return NO.
 */
@property (nonatomic, copy, readonly) UICollectionView * _Nonnull (^elk_setDragInteractionEnabled)(BOOL enable) API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(tvos, watchos);

/* Reordering cadence affects how easily reordering occurs while dragging around a reorder-capable drop destination.
 * Default is UICollectionViewReorderingCadenceImmediate.
 */
@property (nonatomic, copy, readonly) UICollectionView * _Nonnull (^elk_setReorderingCadence)(UICollectionViewReorderingCadence recoderingCadence) API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(tvos, watchos);;

// will be automatically resized to track the size of the collection view and placed behind all cells and supplementary views.
@property (nonatomic, copy, readonly) UICollectionView * _Nonnull (^elk_setBackgroundView)(UIView * _Nullable backView);


// For each reuse identifier that the collection view will use, register either a class or a nib from which to instantiate a cell.
// If a nib is registered, it must contain exactly 1 top level object which is a UICollectionViewCell.
// If a class is registered, it will be instantiated via alloc/initWithFrame:
@property (nonatomic, copy, readonly) UICollectionView * _Nonnull (^elk_registerClassCell)(Class _Nullable cellClass, NSString * _Nonnull identifier);
@property (nonatomic, copy, readonly) UICollectionView * _Nonnull (^elk_registerNibCell)(UINib * _Nullable nib, NSString * _Nonnull identifier);

@property (nonatomic, copy, readonly) UICollectionView * _Nonnull (^elk_registerClassForSupplementaryView)(Class _Nullable supClass, NSString * _Nonnull elementKind, NSString * _Nonnull identifier);
@property (nonatomic, copy, readonly) UICollectionView * _Nonnull (^elk_registerNibForSupplementaryView)(UINib * _Nullable nib, NSString * _Nonnull elementKind, NSString * _Nonnull identifier);;

@property (nonatomic, copy, readonly) __kindof UICollectionViewCell * _Nonnull (^elk_dequeueReusableCell)(NSString * _Nonnull identifier, NSIndexPath * _Nonnull indexPath);
@property (nonatomic, copy, readonly) __kindof UICollectionViewCell * _Nonnull (^elk_dequeueReusableSupplementaryView)(NSString * _Nonnull elementKind, NSString * _Nonnull identifier, NSIndexPath * _Nonnull indexPath);


// These properties control whether items can be selected, and if so, whether multiple items can be simultaneously selected.
@property (nonatomic, copy, readonly) UICollectionView * _Nonnull (^elk_setAllowsSelection)(BOOL allows);// default is YES
@property (nonatomic, copy, readonly) UICollectionView * _Nonnull (^elk_setAllowsMultipleSelection)(BOOL allowsMult);// default is NO


@property (nonatomic, copy, readonly) UICollectionView * _Nonnull (^elk_selectItemAtIndexPath)(NSIndexPath * _Nullable indexPath, BOOL animated, UICollectionViewScrollPosition scrollPosition);

@property (nonatomic, copy, readonly) UICollectionView * _Nonnull (^elk_deselectItemAtIndexPath)(NSIndexPath * _Nullable indexPath, BOOL animated);



// Returns YES if the collection view is reordering or has drop placeholders.
@property (nonatomic, readonly) BOOL hasUncommittedUpdates API_AVAILABLE(ios(11.0));

// Note: -reloadData will discard any uncommitted updates (e.g. placeholders)
- (void)reloadData; // discard the dataSource and delegate data and requery as necessary

- (void)setCollectionViewLayout:(UICollectionViewLayout *)layout animated:(BOOL)animated; // transition from one layout to another
- (void)setCollectionViewLayout:(UICollectionViewLayout *)layout animated:(BOOL)animated completion:(void (^ __nullable)(BOOL finished))completion NS_AVAILABLE_IOS(7_0);

- (UICollectionViewTransitionLayout *)startInteractiveTransitionToCollectionViewLayout:(UICollectionViewLayout *)layout completion:(nullable UICollectionViewLayoutInteractiveTransitionCompletion)completion NS_AVAILABLE_IOS(7_0);
- (void)finishInteractiveTransition NS_AVAILABLE_IOS(7_0);
- (void)cancelInteractiveTransition NS_AVAILABLE_IOS(7_0);

// Information about the current state of the collection view.

#if UIKIT_DEFINE_AS_PROPERTIES
@property (nonatomic, readonly) NSInteger numberOfSections;
#else
- (NSInteger)numberOfSections;
#endif
- (NSInteger)numberOfItemsInSection:(NSInteger)section;

- (nullable UICollectionViewLayoutAttributes *)layoutAttributesForItemAtIndexPath:(NSIndexPath *)indexPath;
- (nullable UICollectionViewLayoutAttributes *)layoutAttributesForSupplementaryElementOfKind:(NSString *)kind atIndexPath:(NSIndexPath *)indexPath;

- (nullable NSIndexPath *)indexPathForItemAtPoint:(CGPoint)point;
- (nullable NSIndexPath *)indexPathForCell:(UICollectionViewCell *)cell;

- (nullable UICollectionViewCell *)cellForItemAtIndexPath:(NSIndexPath *)indexPath;
#if UIKIT_DEFINE_AS_PROPERTIES
@property (nonatomic, readonly) NSArray<__kindof UICollectionViewCell *> *visibleCells;
@property (nonatomic, readonly) NSArray<NSIndexPath *> *indexPathsForVisibleItems;
#else
- (NSArray<__kindof UICollectionViewCell *> *)visibleCells;
- (NSArray<NSIndexPath *> *)indexPathsForVisibleItems;
#endif

- (nullable UICollectionReusableView *)supplementaryViewForElementKind:(NSString *)elementKind atIndexPath:(NSIndexPath *)indexPath NS_AVAILABLE_IOS(9_0);
- (NSArray<UICollectionReusableView *> *)visibleSupplementaryViewsOfKind:(NSString *)elementKind NS_AVAILABLE_IOS(9_0);
- (NSArray<NSIndexPath *> *)indexPathsForVisibleSupplementaryElementsOfKind:(NSString *)elementKind NS_AVAILABLE_IOS(9_0);

// Interacting with the collection view.

- (void)scrollToItemAtIndexPath:(NSIndexPath *)indexPath atScrollPosition:(UICollectionViewScrollPosition)scrollPosition animated:(BOOL)animated;

// These methods allow dynamic modification of the current set of items in the collection view
- (void)insertSections:(NSIndexSet *)sections;
- (void)deleteSections:(NSIndexSet *)sections;
- (void)reloadSections:(NSIndexSet *)sections;
- (void)moveSection:(NSInteger)section toSection:(NSInteger)newSection;

- (void)insertItemsAtIndexPaths:(NSArray<NSIndexPath *> *)indexPaths;
- (void)deleteItemsAtIndexPaths:(NSArray<NSIndexPath *> *)indexPaths;
- (void)reloadItemsAtIndexPaths:(NSArray<NSIndexPath *> *)indexPaths;
- (void)moveItemAtIndexPath:(NSIndexPath *)indexPath toIndexPath:(NSIndexPath *)newIndexPath;

- (void)performBatchUpdates:(void (NS_NOESCAPE ^ _Nullable)(void))updates completion:(void (^ _Nullable)(BOOL finished))completion; // allows multiple insert/delete/reload/move calls to be animated simultaneously. Nestable.

// Support for reordering
- (BOOL)beginInteractiveMovementForItemAtIndexPath:(NSIndexPath *)indexPath NS_AVAILABLE_IOS(9_0); // returns NO if reordering was prevented from beginning - otherwise YES
- (void)updateInteractiveMovementTargetPosition:(CGPoint)targetPosition NS_AVAILABLE_IOS(9_0);
- (void)endInteractiveMovement NS_AVAILABLE_IOS(9_0);
- (void)cancelInteractiveMovement NS_AVAILABLE_IOS(9_0);

// Support for Focus
@property (nonatomic) BOOL remembersLastFocusedIndexPath NS_AVAILABLE_IOS(9_0); // defaults to NO. If YES, when focusing on a collection view the last focused index path is focused automatically. If the collection view has never been focused, then the preferred focused index path is used.

// Drag & Drop

/* YES if a drag session is currently active. A drag session begins after items are "lifted" from the collection view.
 */
@property (nonatomic, readonly) BOOL hasActiveDrag API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(tvos, watchos);

/* YES if collection view is currently tracking a drop session.
 */
@property (nonatomic, readonly) BOOL hasActiveDrop API_AVAILABLE(ios(11.0)) API_UNAVAILABLE(tvos, watchos);







@end

NS_ASSUME_NONNULL_END
