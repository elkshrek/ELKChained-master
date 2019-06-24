//
//  UICollectionView+ELKChainedAlloy.m
//  ELKChained-master
//
//  Created by Jonathan on 2019/6/10.
//  Copyright © 2019 elk. All rights reserved.
//

#import "UICollectionView+ELKChainedAlloy.h"

@implementation UICollectionView (ELKChainedAlloy)


/**
 make a UICollectionView, return a new object

 @return a new UICollectionView
 */
+ (UICollectionView *)elk_make
{
    return [[UICollectionView alloc] init];
}

/**
 make a UICollectionView, return a new object
 
 @param block block
 @return a new UICollectionView
 */
+ (UICollectionView *)elk_makeBlock:(void (^)(UICollectionView * _Nonnull))block
{
    UICollectionView *make = [[UICollectionView alloc] init];
    if (block) {
        block(make);
    }
    return make;
}

/**
 make a UICollecitonView, return a new object

 @param layout UICollectionViewLayout
 @return a new UICollectionView
 */
+ (UICollectionView *)elk_makeViewLayout:(UICollectionViewLayout *)layout
{
    UICollectionView *make = [[UICollectionView alloc] initWithFrame:CGRectZero collectionViewLayout:layout];
    return make;
}

/**
 make a UICollecitonView, return a new object

 @param layout UICollectionViewLayout
 @param block block
 @return return a new UICollectionView
 */
+ (UICollectionView *)elk_makeViewLayout:(UICollectionViewLayout *)layout block:(void (^)(UICollectionView * _Nonnull))block
{
    UICollectionView *make = [[UICollectionView alloc] initWithFrame:CGRectZero collectionViewLayout:layout];
    if (block) {
        block(make);
    }
    return make;
}





























@end
