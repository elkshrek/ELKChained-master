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

@property (nonatomic, strong) UILabel *dLabel;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    UITextView *tv = [UITextView elk_makeBlock:^(UITextView * _Nonnull make) {
        make.elk_setText(@"h哈哈哈")
        .elk_setFont([UIFont systemFontOfSize:14.f]);
        make.elk_setTag(100)
        .elk_setBackgroundColor(UIColor.redColor)
        .elk_setFrame(CGRectMake(100.f, 100.f, 100, 40.f));
    }];
    
    self.view.elk_addSubview(tv);
    
    UITextView *textV = [UITextView elk_makeBlock:^(UITextView * _Nonnull make) {
        make.elk_setText(@"")
        .elk_setFont([UIFont systemFontOfSize:12])
        .elk_setTextColor(UIColor.redColor)
        .elk_setTextAlignment(NSTextAlignmentCenter)
        .elk_setBackgroundColor(UIColor.blackColor);
    }];
    
    
    
    
    
}



@end

