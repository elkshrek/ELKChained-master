//
//  ViewController.m
//  ELKChained-master
//
//  Created by Jonathan on 2019/6/4.
//  Copyright © 2019 elk. All rights reserved.
//

#import "ViewController.h"
#import "ELKChainedAlloy.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    
    
    UIButton *btn = [UIButton elk_makeBlock:^(UIButton * _Nonnull make) {
        
        make.elk_setTitle(@"ddd", UIControlStateNormal);
        
    }];
    btn.elk_setTitle(@"dis", UIControlStateDisabled)
    .elk_setTitleForNormal(@"normal")
    .elk_setTitleForHighlighted(@"high")
    .elk_setTitleForSelected(@"select");
    
//    [btn addTarget:self action:@selector(btnAction:) forControlEvents:UIControlEventTouchUpInside];
    btn.elk_setTitleForNormal(@"哈哈哈哈");
    btn.elk_addTargetBlock(UIControlEventTouchUpOutside, ^(UIButton * _Nonnull sender) {
        NSLog(@"11111 UIControlEventTouchUpOutside");
    }).elk_addTargetBlock(UIControlEventTouchDragEnter, ^(UIButton * _Nonnull sender) {
        NSLog(@"11111 UIControlEventTouchDragEnter");
    }).elk_addTargetBlock(UIControlEventTouchDragExit, ^(UIButton * _Nonnull sender) {
        NSLog(@"11111 UIControlEventTouchDragExit");
    }).elk_addTargetBlock(UIControlEventTouchUpInside, ^(UIButton * _Nonnull sender) {
        NSLog(@"11111 UIControlEventTouchUpInside");
    });
    
    UIImageView *imgView = [[UIImageView alloc] init];
    [imgView setImage:[UIImage imageNamed:@""]];
    
    [UIFont systemFontOfSize:14];
    
    btn.elk_setFrame(CGRectZero);
    btn.backgroundColor = [UIColor redColor];
    [self.view addSubview:btn];
//    btn.elk_setBackgroundColor([UIColor blackColor]).elk;
    
    UIView *view = [[UIView alloc] init];
    view.elk_setFrame(CGRectMake(1, 1, 1, 1));
    
    UIButton *bbb = [UIButton elk_make];
    bbb.elk_setFrame(CGRectMake(0.1, 22, 22, 22)).elk_setBackgroundColor([UIColor redColor]);
    bbb.elk_setImage([UIImage imageNamed:@""], UIControlStateNormal);
    
    
    [UILabel elk_makeBlock:^(UILabel * _Nonnull make) {
        make.elk_setText(@"tt")
        .elk_setFont([UIFont systemFontOfSize:12])
        .elk_setEnable(YES)
        .elk_setNumberOfLines(0)
        .elk_setTextColor(UIColor.blackColor);
    }];
    [UILabel elk_makeBlock:nil].elk_setTextColor(UIColor.whiteColor).elk_setText(@"ddd");
    
    [UIButton elk_makeWithType:UIButtonTypeCustom block:^(UIButton * _Nonnull make) {
        
    }];
    
    
    UICollectionView *collView = [UICollectionView elk_make];
    UICollectionViewFlowLayout *fLayout = [[UICollectionViewFlowLayout alloc] init];
    collView.elk_setCollectionViewLayoutCompletion(fLayout, YES, ^(BOOL finished) {
        // todo
        NSLog(@"---------");
    });
    [collView setCollectionViewLayout:fLayout animated:YES completion:^(BOOL finished) {
        NSLog(@"---------");
    }];
    
    UIColor
    
}


//- (void)btnAction:(UIButton *)sender
//{
////    [sender setEnabled:NO];
//}



@end


