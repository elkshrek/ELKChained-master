//
//  UIButton+ELKChainedAlloy.m
//  ELKChained-master
//
//  Created by Jonathan on 2019/6/5.
//  Copyright © 2019 elk. All rights reserved.
//

#import "UIButton+ELKChainedAlloy.h"
#import <objc/runtime.h>


@interface UIButton ()

/**
 the response block of touch down event
 */
@property (nonatomic, copy) ELKControlEventBlock elk_touchDownBlock;
/**
 the response block of touch down repeat
 */
@property (nonatomic, copy) ELKControlEventBlock elk_touchDownRepeatBlock;
/**
 the response block of touch drag Inside
 */
@property (nonatomic, copy) ELKControlEventBlock elk_touchDragInsideBlock;
/**
 the response block of touch drag outside
 */
@property (nonatomic, copy) ELKControlEventBlock elk_touchDragOutsideBlock;
/**
 the response block of touch drag enter
 */
@property (nonatomic, copy) ELKControlEventBlock elk_touchDragEnterBlock;
/**
 the response block of touch drag exit
 */
@property (nonatomic, copy) ELKControlEventBlock elk_touchDragExitBlock;
/**
 the response block of touch up inside
 */
@property (nonatomic, copy) ELKControlEventBlock elk_touchUpInsideBlock;
/**
 the response block of touch up outside
 */
@property (nonatomic, copy) ELKControlEventBlock elk_touchUpOutsideBlock;
/**
 the response block of touch cancel
 */
@property (nonatomic, copy) ELKControlEventBlock elk_touchCancelBlock;
/**
 the response block of primary action triggered
 */
@property (nonatomic, copy) ELKControlEventBlock elk_primaryActionTriggeredBlock;
/**
 the response block of all touch events
 */
@property (nonatomic, copy) ELKControlEventBlock elk_allTouchEventsBlock;
/**
 the response block of application reserved
 */
@property (nonatomic, copy) ELKControlEventBlock elk_applicationReservedBlock;
/**
 the response block of all events
 */
@property (nonatomic, copy) ELKControlEventBlock elk_allEventsBlock;


@end

@implementation UIButton (ELKChainedAlloy)

#pragma mark - make a button
/**
 make a button, return a new button

 @return a new button object
 */
+ (instancetype)elk_make
{
    UIButton *button = [[UIButton alloc] init];
    return button;
}

/**
 make a button, return a new button

 @param block block
 @return a new button object
 */
+ (instancetype)elk_makeBlock:(void (^)(UIButton * _Nonnull make))block
{
    UIButton *button = [self elk_make];
    if (block) {
        block(button);
    }
    return button;
}

/**
 make a button with UIButtonType, return a new button

 @param btnType UIButtonType
 @return a new button object
 */
+ (instancetype)elk_makeWithType:(UIButtonType)btnType
{
    UIButton *button = [UIButton buttonWithType:btnType];
    return button;
}

/**
 make a button with UIButtonType, return a new button

 @param btnType UIButtonType
 @param block block
 @return a new button object
 */
+ (instancetype)elk_makeWithType:(UIButtonType)btnType block:(void (^)(UIButton * _Nonnull make))block
{
    UIButton *button = [self elk_makeWithType:btnType];
    if (block) {
        #pragma clang diagnostic push
        #pragma clang diagnostic ignored "-Wenum-conversion"
        block(button);
        #pragma clang diagnostic pop
    }
    return button;
}

#pragma mark - set button title
/**
 set button title with ELKControlState
 */
- (UIButton * _Nonnull (^)(NSString * _Nonnull, ELKControlState))elk_setTitle
{
    return ^(NSString * _Nonnull title, ELKControlState state) {
        UIControlState cState = (UIControlState)state;
        [self setTitle:title forState:cState];
        return self;
    };
}

/**
 set button title for ELKCSNormal(UIControlStateNormal)
 */
- (UIButton * _Nonnull (^)(NSString * _Nonnull))elk_setNormalTitle
{
    return ^(NSString * _Nonnull title) {
        [self setTitle:title forState:UIControlStateNormal];
        return self;
    };
}

/**
 set button title for ELKCSHighlighted(UIControlStateHighlighted)
 */
- (UIButton * _Nonnull (^)(NSString * _Nonnull))elk_setHighlightedTitle
{
    return ^(NSString * _Nonnull title) {
        [self setTitle:title forState:UIControlStateHighlighted];
        return self;
    };
}

/**
 set button title for ELKCSDisabled(UIControlStateDisabled)
 */
- (UIButton * _Nonnull (^)(NSString * _Nonnull))elk_setDisabledTitle
{
    return ^(NSString * _Nonnull title) {
        [self setTitle:title forState:UIControlStateDisabled];
        return self;
    };
}

/**
 set button title for ELKCSSelected(UIControlStateSelected)
 */
- (UIButton * _Nonnull (^)(NSString * _Nonnull))elk_setSelectedTitle
{
    return ^(NSString * _Nonnull title) {
        [self setTitle:title forState:UIControlStateSelected];
        return self;
    };
}

/**
 set button title for ELKCSFocused(UIControlStateFocused)
 */
- (UIButton * _Nonnull (^)(NSString * _Nonnull))elk_setFocusedTitle
{
    return ^(NSString * _Nonnull title) {
        [self setTitle:title forState:UIControlStateFocused];
        return self;
    };
}


#pragma mark - set button title color
/**
 set button title color with ELKControlState
 */
- (UIButton * _Nonnull (^)(UIColor * _Nonnull, ELKControlState))elk_setTitleColor
{
    return ^(UIColor * _Nonnull color, ELKControlState state) {
        UIControlState cState = (UIControlState)state;
        [self setTitleColor:color forState:cState];
        return self;
    };
}

/**
 set button title color for ELKCSNormal(UIControlStateNormal)
 */
- (UIButton * _Nonnull (^)(UIColor * _Nonnull))elk_setNormalTitleColor
{
    return ^(UIColor * _Nonnull color) {
        [self setTitleColor:color forState:UIControlStateNormal];
        return self;
    };
}

/**
 set button title color for ELKCSHighlighted(UIControlStateHighlighted)
 */
- (UIButton * _Nonnull (^)(UIColor * _Nonnull))elk_setHighlightedTitleColor
{
    return ^(UIColor * _Nonnull color) {
        [self setTitleColor:color forState:UIControlStateHighlighted];
        return self;
    };
}

/**
 set button title color for ELKCSDisabled(UIControlStateDisabled)
 */
- (UIButton * _Nonnull (^)(UIColor * _Nonnull))elk_setDisabledTitleColor
{
    return ^(UIColor * _Nonnull color) {
        [self setTitleColor:color forState:UIControlStateDisabled];
        return self;
    };
}

/**
 set button title color for ELKCSSelected(UIControlStateSelected)
 */
- (UIButton * _Nonnull (^)(UIColor * _Nonnull))elk_setSelectedTitleColor
{
    return ^(UIColor * _Nonnull color) {
        [self setTitleColor:color forState:UIControlStateSelected];
        return self;
    };
}

/**
 set button title color for ELKCSFocused(UIControlStateFocused)
 */
- (UIButton * _Nonnull (^)(UIColor * _Nonnull))elk_setFocusedTitleColor
{
    return ^(UIColor * _Nonnull color) {
        [self setTitleColor:color forState:UIControlStateFocused];
        return self;
    };
}


#pragma mark - set button background color
/**
 set button background color
 */
//- (UIButton * _Nonnull (^)(UIColor * _Nonnull))elk_setBackColor
//{
//    return ^(UIColor * _Nonnull color) {
//        [self setBackgroundColor:color];
//        return self;
//    };
//}


#pragma mark - set button background image
/**
 set button background image with ELKControlState
 */
- (UIButton * _Nonnull (^)(UIImage * _Nonnull, ELKControlState))elk_setBackImage
{
    return ^(UIImage * _Nonnull image, ELKControlState state) {
        UIControlState cState = (UIControlState)state;
        [self setBackgroundImage:image forState:cState];
        return self;
    };
}

/**
 set button background image for ELKCSNormal(UIControlStateNormal)
 */
- (UIButton * _Nonnull (^)(UIImage * _Nonnull))elk_setNormalBackImage
{
    return ^(UIImage * _Nonnull image) {
        [self setBackgroundImage:image forState:UIControlStateNormal];
        return self;
    };
}

//- (UIButton * _Nonnull (^)(CGRect))elk_setFrame
//{
//    return ^(CGRect f) {
//        self.frame = f;
//        return self;
//    };
//}

/**
 set button background image for ELKCSHighlighted(UIControlStateHighlighted)
 */
- (UIButton * _Nonnull (^)(UIImage * _Nonnull))elk_setHighlightedBackImage
{
    return ^(UIImage * _Nonnull image) {
        [self setBackgroundImage:image forState:UIControlStateHighlighted];
        return self;
    };
}

/**
 set button background image for ELKCSDisabled(UIControlStateDisabled)
 */
- (UIButton * _Nonnull (^)(UIImage * _Nonnull))elk_setDisabledBackImage
{
    return ^(UIImage * _Nonnull image) {
        [self setBackgroundImage:image forState:UIControlStateDisabled];
        return self;
    };
}

/**
 set button background image for ELKCSSelected(UIControlStateSelected)
 */
- (UIButton * _Nonnull (^)(UIImage * _Nonnull))elk_setSelectedBackImage
{
    return ^(UIImage * _Nonnull image) {
        [self setBackgroundImage:image forState:UIControlStateSelected];
        return self;
    };
}

/**
 set button background image for ELKCSFocused(UIControlStateFocused)
 */
- (UIButton * _Nonnull (^)(UIImage * _Nonnull))elk_setFocusedBackImage
{
    return ^(UIImage * _Nonnull image) {
        [self setBackgroundImage:image forState:UIControlStateFocused];
        return self;
    };
}


#pragma mark - set button image
/**
 set button image with ELKControlState
 */
- (UIButton * _Nonnull (^)(UIImage * _Nonnull, ELKControlState))elk_setImage
{
    return ^(UIImage * _Nonnull image, ELKControlState state) {
        UIControlState cState = (UIControlState)state;
        [self setImage:image forState:cState];
        return self;
    };
}

/**
 set button image for ELKCSNormal(UIControlStateNormal)
 */
- (UIButton * _Nonnull (^)(UIImage * _Nonnull))elk_setNormalImage
{
    return ^(UIImage * _Nonnull image) {
        [self setImage:image forState:UIControlStateNormal];
        return self;
    };
}

/**
 set button image for ELKCSHighlighted(UIControlStateHighlighted)
 */
- (UIButton * _Nonnull (^)(UIImage * _Nonnull))elk_setHighlightedImage
{
    return ^(UIImage * _Nonnull image) {
        [self setImage:image forState:UIControlStateHighlighted];
        return self;
    };
}

/**
 set button image for ELKCSDisabled(UIControlStateDisabled)
 */
- (UIButton * _Nonnull (^)(UIImage * _Nonnull))elk_setDisabledImage
{
    return ^(UIImage * _Nonnull image) {
        [self setImage:image forState:UIControlStateDisabled];
        return self;
    };
}

/**
 set button image for ELKCSSelected(UIControlStateSelected)
 */
- (UIButton * _Nonnull (^)(UIImage * _Nonnull))elk_setSelectedImage
{
    return ^(UIImage * _Nonnull image) {
        [self setImage:image forState:UIControlStateSelected];
        return self;
    };
}

/**
 set button image for ELKCSFocused(UIControlStateFocused)
 */
- (UIButton * _Nonnull (^)(UIImage * _Nonnull))elk_setFocusedImage
{
    return ^(UIImage * _Nonnull image) {
        [self setImage:image forState:UIControlStateFocused];
        return self;
    };
}


#pragma mark - add target
/**
 add target/action for particular event.
 */
- (UIButton * _Nonnull (^)(id _Nonnull, SEL _Nonnull, UIControlEvents))elk_addTarget
{
    return ^(id target, SEL action, UIControlEvents event) {
        [self addTarget:target action:action forControlEvents:event];
        return self;
    };
}

/**
 add target/action for particular event.
 */
- (UIButton * _Nonnull (^)(UIControlEvents, ELKControlEventBlock _Nonnull))elk_addTargetBlock
{
    return ^(UIControlEvents event, ELKControlEventBlock _Nonnull block) {
        switch (event) {
            case UIControlEventTouchDown:
                [self addTarget:self action:@selector(elk_touchDownAction:) forControlEvents:UIControlEventTouchDown];
                self.elk_touchDownBlock = block;
                break;
            case UIControlEventTouchDownRepeat:
                [self addTarget:self action:@selector(elk_touchDownRepeatAction:) forControlEvents:UIControlEventTouchDownRepeat];
                self.elk_touchDownRepeatBlock = block;
                break;
            case UIControlEventTouchDragInside:
                [self addTarget:self action:@selector(elk_touchDragInsideAction:) forControlEvents:UIControlEventTouchDragInside];
                self.elk_touchDragInsideBlock = block;
                break;
            case UIControlEventTouchDragOutside:
                [self addTarget:self action:@selector(elk_touchDragOutsideAction:) forControlEvents:UIControlEventTouchDragOutside];
                self.elk_touchDragOutsideBlock = block;
                break;
            case UIControlEventTouchDragEnter:
                [self addTarget:self action:@selector(elk_touchDragEnterAction:) forControlEvents:UIControlEventTouchDragEnter];
                self.elk_touchDragEnterBlock = block;
                break;
            case UIControlEventTouchDragExit:
                [self addTarget:self action:@selector(elk_touchDragExitAction:) forControlEvents:UIControlEventTouchDragExit];
                self.elk_touchDragExitBlock = block;
                break;
            case UIControlEventTouchUpInside:
                [self addTarget:self action:@selector(elk_touchUpInsideAction:) forControlEvents:UIControlEventTouchUpInside];
                self.elk_touchUpInsideBlock = block;
                break;
            case UIControlEventTouchUpOutside:
                [self addTarget:self action:@selector(elk_touchUpOutsideAction:) forControlEvents:UIControlEventTouchUpOutside];
                self.elk_touchUpOutsideBlock = block;
                break;
            case UIControlEventTouchCancel:
                [self addTarget:self action:@selector(elk_touchCancelAction:) forControlEvents:UIControlEventTouchCancel];
                self.elk_touchCancelBlock = block;
                break;
            case UIControlEventPrimaryActionTriggered:
                [self addTarget:self action:@selector(elk_primaryActionTriggeredAction:) forControlEvents:UIControlEventPrimaryActionTriggered];
                self.elk_primaryActionTriggeredBlock = block;
                break;
            case UIControlEventAllTouchEvents:
                [self addTarget:self action:@selector(elk_allTouchEventsAction:) forControlEvents:UIControlEventAllTouchEvents];
                self.elk_allTouchEventsBlock = block;
                break;
            case UIControlEventApplicationReserved:
                [self addTarget:self action:@selector(elk_applicationReservedAction:) forControlEvents:UIControlEventApplicationReserved];
                self.elk_applicationReservedBlock = block;
                break;
            case UIControlEventAllEvents:
                [self addTarget:self action:@selector(elk_allEventsAction:) forControlEvents:UIControlEventAllEvents];
                self.elk_allEventsBlock = block;
                break;
                
            default:
                [self addTarget:self action:@selector(elk_touchUpInsideAction:) forControlEvents:UIControlEventTouchUpInside];
                self.elk_touchUpInsideBlock = block;
                break;
        }
        
        return self;
    };
}

/**
 touch event of touch down

 @param sender UIButton object
 */
- (void)elk_touchDownAction:(UIButton *)sender
{
    if (self.elk_touchDownBlock) {
        self.elk_touchDownBlock(sender);
    }
}
/**
 touch event of touch down repeat

 @param sender UIButton object
 */
- (void)elk_touchDownRepeatAction:(UIButton *)sender
{
    if (self.elk_touchDownRepeatBlock) {
        self.elk_touchDownRepeatBlock(sender);
    }
}
/**
 touch event of touch drag inside repeat

 @param sender UIButton object
 */
- (void)elk_touchDragInsideAction:(UIButton *)sender
{
    if (self.elk_touchDragInsideBlock) {
        self.elk_touchDragInsideBlock(sender);
    }
}
/**
 touch event of touch drag outside

 @param sender UIButton object
 */
- (void)elk_touchDragOutsideAction:(UIButton *)sender
{
    if (self.elk_touchDragOutsideBlock) {
        self.elk_touchDragOutsideBlock(sender);
    }
}
/**
 touch event of touch drag enter

 @param sender UIButton object
 */
- (void)elk_touchDragEnterAction:(UIButton *)sender
{
    if (self.elk_touchDragEnterBlock) {
        self.elk_touchDragEnterBlock(sender);
    }
}
/**
 touch event of touch drag exit

 @param sender UIButton object
 */
- (void)elk_touchDragExitAction:(UIButton *)sender
{
    if (self.elk_touchDragExitBlock) {
        self.elk_touchDragExitBlock(sender);
    }
}
/**
 touch event of touch up inside

 @param sender UIButton object
 */
- (void)elk_touchUpInsideAction:(UIButton *)sender
{
    if (self.elk_touchUpInsideBlock) {
        self.elk_touchUpInsideBlock(sender);
    }
}
/**
 touch event of touch up outside

 @param sender UIButton object
 */
- (void)elk_touchUpOutsideAction:(UIButton *)sender
{
    if (self.elk_touchUpOutsideBlock) {
        self.elk_touchUpOutsideBlock(sender);
    }
}
/**
 touch event of touch cancel

 @param sender UIButton object
 */
- (void)elk_touchCancelAction:(UIButton *)sender
{
    if (self.elk_touchCancelBlock) {
        self.elk_touchCancelBlock(sender);
    }
}
/**
 touch event of primary action triggered

 @param sender UIButton object
 */
- (void)elk_primaryActionTriggeredAction:(UIButton *)sender
{
    if (self.elk_primaryActionTriggeredBlock) {
        self.elk_primaryActionTriggeredBlock(sender);
    }
}
/**
 touch event of touch events

 @param sender UIButton object
 */
- (void)elk_allTouchEventsAction:(UIButton *)sender
{
    if (self.elk_allTouchEventsBlock) {
        self.elk_allTouchEventsBlock(sender);
    }
}
/**
 touch event of application reserved

 @param sender UIButton object
 */
- (void)elk_applicationReservedAction:(UIButton *)sender
{
    if (self.elk_applicationReservedBlock) {
        self.elk_applicationReservedBlock(sender);
    }
}
- (void)elk_allEventsAction:(UIButton *)sender
{
    if (self.elk_allEventsBlock) {
        self.elk_allEventsBlock(sender);
    }
}


@end


@implementation UIButton (ELKControlEvent)

#pragma mark - set and get
/**
 get the block who was use to add target for button
 
 @return get the event touch down block
 */
- (ELKControlEventBlock)elk_touchDownBlock
{
    return objc_getAssociatedObject(self, @selector(elk_touchDownBlock));
}
/**
 set the block to button, the block is use to response the button's touch event

 @param elk_touchDownBlock event touch down block
 */
- (void)setElk_touchDownBlock:(ELKControlEventBlock)elk_touchDownBlock
{
    objc_setAssociatedObject(self, @selector(elk_touchDownBlock), elk_touchDownBlock, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

/**
 get the block who was use to add target for button

 @return get the event touch down repeat block
 */
- (ELKControlEventBlock)elk_touchDownRepeatBlock
{
    return objc_getAssociatedObject(self, @selector(elk_touchDownRepeatBlock));
}
/**
 set the block to button, the block is use to response the button's touch event

 @param elk_touchDownRepeatBlock event touch down repeat block
 */
- (void)setElk_touchDownRepeatBlock:(ELKControlEventBlock)elk_touchDownRepeatBlock
{
    objc_setAssociatedObject(self, @selector(elk_touchDownRepeatBlock), elk_touchDownRepeatBlock, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

/**
 get the block who was use to add target for button
 
 @return get the event touch drag inside block
 */
- (ELKControlEventBlock)elk_touchDragInsideBlock
{
    return objc_getAssociatedObject(self, @selector(elk_touchDragInsideBlock));
}
/**
 set the block to button, the block is use to response the button's touch event
 
 @param elk_touchDragInsideBlock event touch drag inside block
 */
- (void)setElk_touchDragInsideBlock:(ELKControlEventBlock)elk_touchDragInsideBlock
{
    objc_setAssociatedObject(self, @selector(elk_touchDragInsideBlock), elk_touchDragInsideBlock, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

/**
 get the block who was use to add target for button
 
 @return get the event touch drag inside block
 */
- (ELKControlEventBlock)elk_touchDragOutsideBlock
{
    return objc_getAssociatedObject(self, @selector(elk_touchDragOutsideBlock));
}
/**
 set the block to button, the block is use to response the button's touch event
 
 @param elk_touchDragOutsideBlock event touch drag outside block
 */
- (void)setElk_touchDragOutsideBlock:(ELKControlEventBlock)elk_touchDragOutsideBlock
{
    objc_setAssociatedObject(self, @selector(elk_touchDragOutsideBlock), elk_touchDragOutsideBlock, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

/**
 get the block who was use to add target for button

 @return get the event touch drag enter block
 */
- (ELKControlEventBlock)elk_touchDragEnterBlock
{
    return objc_getAssociatedObject(self, @selector(elk_touchDragEnterBlock));
}
/**
 set the block to button, the block is use to response the button's touch event

 @param elk_touchDragEnterBlock event touch drag enter block
 */
- (void)setElk_touchDragEnterBlock:(ELKControlEventBlock)elk_touchDragEnterBlock
{
    objc_setAssociatedObject(self, @selector(elk_touchDragEnterBlock), elk_touchDragEnterBlock, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

/**
 get the block who was use to add target for button

 @return get the event touch drag exit block
 */
- (ELKControlEventBlock)elk_touchDragExitBlock
{
    return objc_getAssociatedObject(self, @selector(elk_touchDragExitBlock));
}
/**
 set the block to button, the block is use to response the button's touch event

 @param elk_touchDragExitBlock event touch drag exit block
 */
- (void)setElk_touchDragExitBlock:(ELKControlEventBlock)elk_touchDragExitBlock
{
    objc_setAssociatedObject(self, @selector(elk_touchDragExitBlock), elk_touchDragExitBlock, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

/**
 get the block who was use to add target for button

 @return get the event touch up inside block
 */
- (ELKControlEventBlock)elk_touchUpInsideBlock
{
    return objc_getAssociatedObject(self, @selector(elk_touchUpInsideBlock));
}
/**
 set the block to button, the block is use to response the button's touch event

 @param elk_touchUpInsideBlock event touch up inside block
 */
- (void)setElk_touchUpInsideBlock:(ELKControlEventBlock)elk_touchUpInsideBlock
{
    objc_setAssociatedObject(self, @selector(elk_touchUpInsideBlock), elk_touchUpInsideBlock, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

/**
 get the block who was use to add target for button
 
 @return get the event touch up outside block
 */
- (ELKControlEventBlock)elk_touchUpOutsideBlock
{
    return objc_getAssociatedObject(self, @selector(elk_touchUpOutsideBlock));
}
/**
 set the block to button, the block is use to response the button's touch event
 
 @param elk_touchUpOutsideBlock event touch up outside block
 */
- (void)setElk_touchUpOutsideBlock:(ELKControlEventBlock)elk_touchUpOutsideBlock
{
    objc_setAssociatedObject(self, @selector(elk_touchUpOutsideBlock), elk_touchUpOutsideBlock, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

/**
 get the block who was use to add target for button
 
 @return get the event touch cancel block
 */
- (ELKControlEventBlock)elk_touchCancelBlock
{
    return objc_getAssociatedObject(self, @selector(elk_touchCancelBlock));
}
/**
 set the block to button, the block is use to response the button's touch event
 
 @param elk_touchCancelBlock event touch cancel block
 */
- (void)setElk_touchCancelBlock:(ELKControlEventBlock)elk_touchCancelBlock
{
    objc_setAssociatedObject(self, @selector(elk_touchCancelBlock), elk_touchCancelBlock, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

/**
 get the block who was use to add target for button
 
 @return get the event primary action triggered block
 */
- (ELKControlEventBlock)elk_primaryActionTriggeredBlock
{
    return objc_getAssociatedObject(self, @selector(elk_primaryActionTriggeredBlock));
}
/**
 set the block to button, the block is use to response the button's touch event
 
 @param elk_primaryActionTriggeredBlock event primary action triggered block
 */
- (void)setElk_primaryActionTriggeredBlock:(ELKControlEventBlock)elk_primaryActionTriggeredBlock
{
    objc_setAssociatedObject(self, @selector(elk_primaryActionTriggeredBlock), elk_primaryActionTriggeredBlock, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

/**
 get the block who was use to add target for button
 
 @return get the event all touch event block
 */
- (ELKControlEventBlock)elk_allTouchEventsBlock
{
    return objc_getAssociatedObject(self, @selector(elk_allTouchEventsBlock));
}
/**
 set the block to button, the block is use to response the button's touch event
 
 @param elk_allTouchEventsBlock event all touch events block
 */
- (void)setElk_allTouchEventsBlock:(ELKControlEventBlock)elk_allTouchEventsBlock
{
    objc_setAssociatedObject(self, @selector(elk_allTouchEventsBlock), elk_allTouchEventsBlock, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

/**
 get the block who was use to add target for button
 
 @return get the event application reserved block
 */
- (ELKControlEventBlock)elk_applicationReservedBlock
{
    return objc_getAssociatedObject(self, @selector(elk_applicationReservedBlock));
}
/**
 set the block to button, the block is use to response the button's touch event
 
 @param elk_applicationReservedBlock event application reserved block
 */
- (void)setElk_applicationReservedBlock:(ELKControlEventBlock)elk_applicationReservedBlock
{
    objc_setAssociatedObject(self, @selector(elk_applicationReservedBlock), elk_applicationReservedBlock, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

/**
 get the block who was use to add target for button
 
 @return get the event all events block
 */
- (ELKControlEventBlock)elk_allEventsBlock
{
    return objc_getAssociatedObject(self, @selector(elk_allEventsBlock));
}
/**
 set the block to button, the block is use to response the button's touch event
 
 @param elk_allEventsBlock event all events block
 */
- (void)setElk_allEventsBlock:(ELKControlEventBlock)elk_allEventsBlock
{
    objc_setAssociatedObject(self, @selector(elk_allEventsBlock), elk_allEventsBlock, OBJC_ASSOCIATION_COPY_NONATOMIC);
}


@end
