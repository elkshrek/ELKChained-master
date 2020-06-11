//
//  ELKHomeTableViewCell.m
//  ELKChained-master
//
//  Created by wing on 2020/6/9.
//  Copyright © 2020 elk. All rights reserved.
//

#import "ELKHomeTableViewCell.h"

@implementation ELKHomeTableViewCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    if (self = [super initWithStyle:style reuseIdentifier:reuseIdentifier]) {
        [self configSubview];
    }
    return self;
}

- (void)awakeFromNib {
    [super awakeFromNib];
    [self configSubview];
}

- (void)configSubview
{
    self.elk_setSelectionStyle(UITableViewCellSelectionStyleNone)
    .elk_setEditingAccessoryType(UITableViewCellAccessoryDetailDisclosureButton)
    .elk_setBackgroundColor(UIColor.whiteColor);
    self.contentView.elk_addSubview(self.titLabel);
    
    [self.titLabel mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerY.equalTo(self.contentView);
        make.left.equalTo(self.contentView).offset(15.f);
    }];
    
}

- (UILabel *)titLabel
{
    return _titLabel ?: ({
        _titLabel = [[UILabel alloc] init];
        _titLabel.elk_setSysFont(14)
        .elk_setTextColor(UIColor.blackColor);
        _titLabel;
    });
}

@end
