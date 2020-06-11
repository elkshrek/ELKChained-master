//
//  ELKHomeViewController.m
//  ELKChained-master
//
//  Created by Jonathan on 2019/6/4.
//  Copyright © 2019 elk. All rights reserved.
//

#import "ELKHomeViewController.h"
#import "ELKHomeHeadView.h"
#import "ELKHomeTableViewCell.h"
#import "ELKExampleViewController.h"

@interface ELKHomeViewController ()<UITableViewDelegate,UITableViewDataSource>

@property (nonatomic, strong) ELKHomeHeadView *headView;
@property (nonatomic, strong) UITableView *tableView;

@property (nonatomic, strong) UILabel *dLabel;

@property (nonatomic, strong) NSArray *dataArray;

@end

@implementation ELKHomeViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.title = @"链式编程示例";
    
    self.view.elk_setBackgroundColor(UIColor.whiteColor)
    .elk_addSubview(self.tableView);
    self.tableView.elk_setTableHeaderView(self.headView);
    
    [self.tableView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.edges.equalTo(self.view);
    }];
    
}

#pragma mark - TableViewDelegate
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}
- (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section
{
    return 0.02f;
}
- (UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section
{
    return nil;
}
- (CGFloat)tableView:(UITableView *)tableView heightForFooterInSection:(NSInteger)section
{
    return 0.02f;
}
- (UIView *)tableView:(UITableView *)tableView viewForFooterInSection:(NSInteger)section
{
    return nil;
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return self.dataArray.count;
}
- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 50.f;
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    ELKHomeTableViewCell *cell = tableView.elk_dequeueReusableCellForIndexPath(@"ELKHomeTableViewCell", indexPath);
    cell.titLabel.elk_setText([NSString stringWithFormat:@"row-%ld", (long)indexPath.row]);
    
    return cell;
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    ELKExampleViewController *example = [[ELKExampleViewController alloc] init];
    [self.navigationController pushViewController:example animated:YES];
}

- (ELKHomeHeadView *)headView
{
    return _headView ?: ({
        _headView = [[ELKHomeHeadView alloc] initWithFrame:CGRectMake(0.f, 0.f, [UIScreen mainScreen].bounds.size.width, 280.f)];
        _headView;
    });
}

- (UITableView *)tableView
{
    return _tableView ?: ({
        _tableView = [[UITableView alloc] initWithFrame:CGRectZero style:UITableViewStylePlain];
        _tableView.elk_setDelegate(self)
        .elk_setDataSource(self)
        .elk_setSeparatorStyle(UITableViewCellSeparatorStyleSingleLine)
        .elk_setSeparatorColor(UIColor.grayColor)
        .elk_setSeparatInset(UIEdgeInsetsMake(0.f, 15.f, 0.f, 15.f))
        .elk_registerClassForCell(ELKHomeTableViewCell.class, @"ELKHomeTableViewCell");
        
        _tableView;
    });
}

- (NSArray *)dataArray
{
    return _dataArray ?: ({
        _dataArray = @[@"", @"", @"", @"", @"", @"", @"", @"", @"", @"", @"", @""];
        
        _dataArray;
    });
}

@end


