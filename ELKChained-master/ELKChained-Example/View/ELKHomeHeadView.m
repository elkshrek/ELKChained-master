  //
//  ELKHomeHeadView.m
//  ELKChained-master
//
//  Created by wing on 2020/6/9.
//  Copyright © 2020 elk. All rights reserved.
//

#import "ELKHomeHeadView.h"

@implementation ELKHomeHeadView

- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        [self configSubview];
    }
    return self;
}

- (void)configSubview
{
    self.elk_setBackgroundColor(UIColor.whiteColor)
    .elk_addSubview(self.backImgView)
    .elk_addSubview(self.headImgView)
    .elk_addSubview(self.nameLabel)
    .elk_addSubview(self.signLabel)
    .elk_addSubview(self.editButton);
    
    [self.backImgView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.edges.equalTo(self);
    }];
    [self.headImgView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerX.equalTo(self);
        make.top.equalTo(self).offset(45.f);
        make.width.height.equalTo(@72.f);
    }];
    [self.editButton mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(self).offset(30.f);
        make.right.equalTo(self).offset(-15.f);
        make.width.mas_equalTo(66.f);
        make.height.equalTo(@30.f);
    }];
    [self.nameLabel mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.equalTo(self).offset(45.f);
        make.right.equalTo(self).offset(-45.f);
        make.top.equalTo(self.headImgView.mas_bottom).offset(20.f);
        make.height.equalTo(@20.f);
    }];
    [self.signLabel mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.equalTo(self).offset(45.f);
        make.right.equalTo(self).offset(-45.f);
        make.top.equalTo(self.nameLabel.mas_bottom).offset(8.f);
    }];
    
}
- (void)editBtnTouchUpInside:(UIButton *)sender
{
    NSLog(@"edit Button Touch Up Inside");
    
}

- (UIButton *)editButton
{
    return _editButton ?: ({
        _editButton = [UIButton buttonWithType:UIButtonTypeCustom];
        // 设置Normal状态的title
        _editButton.elk_setTitle(@"编辑", UIControlStateNormal)
        // 设置Highlighted状态的title
        .elk_setTitleForHighlighted(@"编辑")
        // 设置Highlighted状态的titleColor
        .elk_setTitleColor(UIColor.greenColor, UIControlStateHighlighted)
        // 设置Normal状态的titleColor
        .elk_setTitleColorForNormal(UIColor.whiteColor)
        // 设置字体
        .elk_setTitleLabelFont([UIFont systemFontOfSize:14])
        // 设置Highlighted状态的Attribute字体大小
        .elk_setAttrFont([UIFont systemFontOfSize:16], UIControlStateHighlighted)
        // 设置Highlighted状态的Attribute字体颜色
        .elk_setAttrTitleColor(UIColor.greenColor, UIControlStateHighlighted)
        // 设置Selected状态的title，字体大小，字体颜色
        .elk_setTitleFontAndColor(@"完成" ,[UIFont systemFontOfSize:14], UIColor.blueColor, UIControlStateSelected)
        // 设置Normal状态的image
        .elk_setImageForNormal([UIImage imageNamed:@"icon_setting"])
        // 设置Selected状态的image
        .elk_setImage([UIImage imageNamed:@"icon_setting"], UIControlStateSelected)
        // 设置Normal状态的背景图片
        .elk_setBackgroundImageForNormal([UIImage imageNamed:@"elk_button_back"])
        // 以SEL方式给button添加事件
        .elk_addTarget(self, @selector(editBtnTouchUpInside:), UIControlEventTouchUpInside)
        // 以Block方式给button添加事件
        .elk_addTargetBlock(UIControlEventTouchUpOutside, ^(UIButton * _Nonnull sender) {
            NSLog(@"edit Button Touch Up Outside");
            sender.elk_setSelected(!sender.isSelected);
        })
        // 设置背景颜色
        .elk_setBackgroundColor(UIColor.clearColor);
        
        _editButton;
    });
}

- (UIImageView *)backImgView
{
    return _backImgView ?: ({
        _backImgView = [[UIImageView alloc] init];
        _backImgView.elk_setImage([UIImage imageNamed:@"headbackimage"])
        .elk_setContentMode(UIViewContentModeScaleAspectFill)
        .elk_setBackgroundColor(UIColor.clearColor)
        .elk_setClipToBounds(YES);
        _backImgView;
    });
}
- (UIImageView *)headImgView
{
    return _headImgView ?: ({
        _headImgView = [[UIImageView alloc] init];
        // 设置图片
        _headImgView.elk_setImageNamed(@"headImage")
        // 内容填充方式
        .elk_setContentMode(UIViewContentModeScaleAspectFill)
        // 背景色
        .elk_setBackgroundColor(UIColor.clearColor)
        .elk_setCornerRadius(36.f)
        .elk_setMaskToBounds(YES)
        .elk_setBorderColor(UIColor.whiteColor)
        .elk_setBorderWidth(2.f);
        _headImgView;
    });
}
- (UILabel *)nameLabel
{
    return _nameLabel ?: ({
        _nameLabel = [UILabel elk_make];
        // 设置text
        _nameLabel.elk_setText(@"林夕")
        // 字体
        .elk_setFont([UIFont systemFontOfSize:16])
        // 字体颜色
        .elk_setTextColor(UIColor.whiteColor)
        // 显示行数
        .elk_setNumberOfLines(1)
        // 对齐方式
        .elk_setTextAlignment(NSTextAlignmentCenter);
        _nameLabel;
    });
}
- (UILabel *)signLabel
{
    return _signLabel ?: ({
        _signLabel = [[UILabel alloc] init];
        _signLabel.elk_setText(@"好看的皮囊千篇一律，有趣的灵魂万里挑一。")
        .elk_setSysFont(14)
        .elk_setNumberOfLines(2)
        .elk_setTextColor(UIColor.whiteColor)
        .elk_setTextAlignment(NSTextAlignmentCenter);
        _signLabel;
    });
}



@end
