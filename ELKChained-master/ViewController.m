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
        
        make.elk_setTitle(@"ddd", ELKCSNormal);
//#pragma clang diagnostic push
//#pragma clang diagnostic ignored "-Wenum-conversion"
//        make.elk_setTitle(@"title", UIControlStateNormal).elk_setTitle(@"lighted", ELKCSHighlighted);
//#pragma clang diagnostic pop
    }];
    btn.elk_setTitle(@"dis", ELKCSDisabled).elk_setTitle(@"normal", ELKCSNormal).elk_setTitle(@"high", ELKCSHighlighted).elk_setNormalTitle(@"");
    
//    [btn addTarget:self action:@selector(btnAction:) forControlEvents:UIControlEventTouchUpInside];
    btn.elk_setNormalTitle(@"哈哈哈哈");
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
    
    
    btn.elk_setFrame(CGRectZero);
    btn.backgroundColor = [UIColor redColor];
    [self.view addSubview:btn];
//    btn.elk_setBackgroundColor([UIColor blackColor]).elk;
    
    UIView *view = [[UIView alloc] init];
    view.elk_setFrame(CGRectMake(1, 1, 1, 1));
    
    UIButton *bbb = [UIButton elk_make];
    bbb.elk_setFrame(CGRectMake(0.1, 22, 22, 22)).elk_setBackgroundColor([UIColor redColor]);
    bbb.elk_setImage([UIImage imageNamed:@""], ELKCSNormal);
    
//    ELKKKView *kView = ELKKKView.alloc.init;
//    kView.elk_tttttry.elk_aaaa;
//    
//    ELKTTTTView *tView = [ELKTTTTView new];
//    tView.elk_tttttry.elk_bbbb;
    
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
    
    
    [UICollectionView elk_make].collectionViewLayout = [[UICollectionViewFlowLayout alloc] init];
    
}


//- (void)btnAction:(UIButton *)sender
//{
////    [sender setEnabled:NO];
//}



@end


