# ELKChainedAlloy链式编程框架

基于```Objective-C```的简单易用的链式编程框架，通过``` . ```调用方法，实现快速编程。  

提供常用系统控件的链式编程方法，提升开发效率，持续更新中。。。

### 什么是链式编程？    
----

链式编程就是将多个方法用点语法链接起来，让代码更加简洁，可读性更强。例如我们常用的``` Masonry ```，例如下面这段添加约束的代码:

```
// 设置控件的宽和高都为100
make.width.height.equalTo(@100);
```

这句代码相当于调用了如下三个方法：

```
- (MASConstraint *)width {
    return [self addConstraintWithLayoutAttribute:NSLayoutAttributeWidth];
}

- (MASConstraint *)height {
    return [self addConstraintWithLayoutAttribute:NSLayoutAttributeHeight];
}

- (MASConstraint * (^)(id))equalTo {
    return ^id(id attribute) {
        return self.equalToWithRelation(attribute, NSLayoutRelationEqual);
    };
}
```

链式编程的原理就是调用的属性或者方法的返回值是调用者本身，``` Masonry ```中的链式编程的特点是方法或者属性的返回值是block，block的返回值是调用者本身，block的参数是需要处理的参数。    

``` ELKChainedAlloy ```链式编程框架的方式和``` Masonry ```相同，方法和属性的返回值是block，通过block的形参传递需要处理的参数，block的返回值为调用者本身，从而实现了通过点语法链式调用方法。

### ``` ELKChainedAlloy  ```使用    
----

* ``` UIView ```

```
// 创建一个view，并且设置背景色，切圆角，设置border以及frame
UIView *view = [UIView elk_makeBlock:^(UIView * _Nonnull make) {
    make.elk_setBackgroundColor(UIColor.purpleColor)
    .elk_setCornerRadius(5.f)
    .elk_setMaskToBounds(YES)
    .elk_setBorderColor(UIColor.darkGrayColor)
    .elk_setBorderWidth(2.f)
    .elk_setFrameMake(30.f, 100.f, 230.f, 30.f);
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
```

* ``` UIButton ```

```
UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
// 设置Normal状态的title
button.elk_setTitle(@"编辑", UIControlStateNormal)
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
```

* ``` UILabel ```

```
UILabel *label = [UILabel elk_make];
// 设置text
label.elk_setText(@"林夕")
// 字体
.elk_setFont([UIFont systemFontOfSize:16])
// 字体颜色
.elk_setTextColor(UIColor.whiteColor)
// 显示行数
.elk_setNumberOfLines(1)
// 对齐方式
.elk_setTextAlignment(NSTextAlignmentCenter);
```

* ``` UIImageView ```

```
UIImageView *imgView = [[UIImageView alloc] init];
// 设置图片
imgView.elk_setImageNamed(@"imageName")
// 内容填充方式
.elk_setContentMode(UIViewContentModeScaleAspectFill)
// 背景色
.elk_setBackgroundColor(UIColor.clearColor)
.elk_setCornerRadius(36.f)
.elk_setMaskToBounds(YES)
.elk_setBorderColor(UIColor.whiteColor)
.elk_setBorderWidth(2.f);
```

* ``` UITableView ```（```UIScrollView```、``` UICollectionView``` 用法相似）

```
UITableView *tableView = [[UITableView alloc] initWithFrame:CGRectZero style:UITableViewStylePlain];
tableView.elk_setDelegate(self)
.elk_setDataSource(self)
.elk_setSeparatorStyle(UITableViewCellSeparatorStyleSingleLine)
.elk_setSeparatorColor(UIColor.grayColor)
.elk_setSeparatInset(UIEdgeInsetsMake(0.f, 15.f, 0.f, 15.f))
.elk_registerClassForCell(ELKTableViewCell.class, @"ELKTableViewCell");
```

* ``` UITextView ```

```
UITextView *tv = [UITextView elk_makeBlock:^(UITextView * _Nonnull make) {
    make.elk_setText(@"这里是textview，我是内容我是内容~")
    .elk_setFont([UIFont systemFontOfSize:14.f])
    .elk_setTextColor(UIColor.whiteColor)
    .elk_setTextAlignment(NSTextAlignmentLeft)
    .elk_setTag(100)
    .elk_setBackgroundColor(UIColor.redColor)
    .elk_setFrame(CGRectMake(30.f, 150.f, 280.f, 70.f));
}];
```

* ``` UITextField ```

```
UITextField *tf = [UITextField elk_makeBlock:^(UITextField * _Nonnull make) {
    UIImageView *leftView = [UIImageView elk_makeBlock:^(UIImageView * _Nonnull make) {
        make.elk_setImageNamed(@"elk_search")
        .elk_setBackgroundColor(UIColor.clearColor)
        .elk_setFrameMake(0.f, 0.f, 30.f, 30.f);
    }];
    make.elk_setText(@"我是textField，这里是内容")
    .elk_setPlaceholder(@"我是placeholder")
    .elk_setTextColor(UIColor.blueColor)
    .elk_setSysFont(14)
    .elk_setLeftViewMode(UITextFieldViewModeAlways)
    .elk_setLeftView(leftView)
    .elk_setClearButtonMode(UITextFieldViewModeWhileEditing)
    .elk_setFrameMake(30, 240.f, 280.f, 34.f)
    .elk_setBackgroundColor(UIColor.greenColor);
}];
```