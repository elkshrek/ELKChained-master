//
//  ELKExampleViewController.m
//  ELKChained-master
//
//  Created by wing on 2020/6/10.
//  Copyright © 2020 elk. All rights reserved.
//

#import "ELKExampleViewController.h"

@interface ELKExampleViewController ()

@end

@implementation ELKExampleViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.elk_setBackgroundColor(UIColor.whiteColor);
    
    // 创建一个view，并且设置背景色，切圆角，设置border以及frame
    UIView *view = [UIView elk_makeBlock:^(UIView * _Nonnull make) {
        make.elk_setBackgroundColor(UIColor.purpleColor)
        .elk_setCornerRadius(5.f)
        .elk_setMaskToBounds(YES)
        .elk_setBorderColor(UIColor.darkGrayColor)
        .elk_setBorderWidth(2.f)
        .elk_setFrameMake(30.f, 100.f, 100.f, 30.f);
    }];
    self.view.elk_addSubview(view);
    
    // 也可以直接使用系统方法创建，然后使用链式设置属性
    // 或者使用view1 = [UIView elk_make];方法创建UIView
    UIView *view1 = [[UIView alloc] init];
    view1.elk_setBackgroundColor(UIColor.cyanColor)
    .elk_setCornerRadius(5.f)
    .elk_setMaskToBounds(YES)
    .elk_setBorderColor(UIColor.grayColor)
    .elk_setBorderWidth(2.f)
    .elk_setFrameMake(140.f, 100.f, 100.f, 30.f);
    self.view.elk_addSubview(view1);
    
    
    UITextView *tv = [UITextView elk_makeBlock:^(UITextView * _Nonnull make) {
        make.elk_setText(@"这里是textview，我是内容我是内容~")
        .elk_setFont([UIFont systemFontOfSize:14.f])
        .elk_setTextColor(UIColor.whiteColor)
        .elk_setTextAlignment(NSTextAlignmentLeft)
        .elk_setTag(100)
        .elk_setBackgroundColor(UIColor.redColor)
        .elk_setFrame(CGRectMake(30.f, 150.f, 280.f, 70.f));
    }];
    self.view.elk_addSubview(tv);
    
    UITextField *tf = [UITextField elk_make];
    UIImageView *leftView = [UIImageView elk_makeBlock:^(UIImageView * _Nonnull make) {
        make.elk_setImageNamed(@"elk_search")
        .elk_setBackgroundColor(UIColor.clearColor)
        .elk_setFrameMake(0.f, 0.f, 30.f, 30.f);
    }];
    tf.elk_setText(@"我是textField，这里是内容")
    .elk_setPlaceholder(@"我是placeholder")
    .elk_setTextColor(UIColor.blueColor)
    .elk_setSysFont(14)
    .elk_setLeftViewMode(UITextFieldViewModeAlways)
    .elk_setLeftView(leftView)
    .elk_setClearButtonMode(UITextFieldViewModeWhileEditing)
    .elk_setFrameMake(30, 240.f, 280.f, 34.f)
    .elk_setBackgroundColor(UIColor.greenColor);
    self.view.elk_addSubview(tf);

    NSString *string = ELK_stringWithFormat(@"\nJake:%@", @"你瞅啥？").elk_stringByAppendingString(@"\nRose:瞅你咋地");
    string = string.elk_stringByAppendingString(@"\nJoke:再瞅一遍试试!")
    .elk_stringByAppendingString(@"\nRose:试试就试试");
    NSLog(@"%@", string);

    ELK_systemFontOfSize(12);

    @"字符串长度截取示例文案，截取loc2到14，截得的内容为：串长度截取示例文案，截取lo".elk_enumerateSubstrInRangeOptions(NSMakeRange(2, 14), NSStringEnumerationReverse, ^(NSString * _Nullable substring, NSRange substringRange, NSRange enclosingRange, BOOL * _Nonnull stop) {
        NSLog(@"截取结果展示： %@", substring);
    });
    
    
    
}



- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    self.view.elk_endEditing(YES);
}


@end
