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
    self.view.elk_addSubview(textV);
    
    
    NSString *string = ELK_stringWithFormat(@"aaa %@", @"nishuosha").elk_stringByAppendingString(@"balabalabal");
    string.elk_stringByAppendingString(@"9090");
    
//    string = string.elk_stringByAppendingFormat(@"d %@", @"121212");
    NSLog(@"%@", string);
    
    ELK_systemFontOfSize(12);
    
    @"aasdfshgwdds".elk_enumerateSubstrInRangeOptions(NSMakeRange(1, 10), NSStringEnumerationReverse, ^(NSString * _Nullable substring, NSRange substringRange, NSRange enclosingRange, BOOL * _Nonnull stop) {
        NSLog(@"ddddd  %@", substring);
    });
    
    @"aasdfshgwdds".elk_enumerateLinesUsingBlock(^(NSString * _Nonnull line, BOOL * _Nonnull stop) {
        NSLog(@"----- %@", line);
    });
    
    
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.elk_setTitleForNormal(@"哈哈哈")
    .elk_setTitleForHighlighted([NSString stringWithFormat:@"-%@-", btn.elk_titleForState(UIControlStateNormal)])
    .elk_setImageForNormal(UIImage.new)
    .elk_setFrameMake(100.f, 220.f, 80.f, 40.f)
    .elk_setBackgroundColor(UIColor.orangeColor);
    self.view.elk_addSubview(btn);
    
    UIView *view = [[UIView alloc] init];
    view.elk_setFrame(btn.elk_imageRectForContentRect(btn.elk_contentRectForBounds(btn.bounds)))
    .elk_setBackgroundColor(UIColor.greenColor);
    self.view.elk_addSubview(view);
    
    
    
}



@end


