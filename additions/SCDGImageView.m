//
//  SCDGImageView.m
//  deigo
//
//  Created by SC on 16/6/17.
//  Copyright © 2016年 SC. All rights reserved.
//

#import "SCDGImageView.h"

@implementation SCDGImageView

- (instancetype)init{
    
    if (self = [super init]) {
        
    }
    
    return self;
}

-(instancetype)initWithFrame:(CGRect)frame{
    
    if (self = [super initWithFrame:frame]) {
        
    }
    
    return self;
}

-(instancetype)initWithCoder:(NSCoder *)aDecoder{
    
    if (self = [super initWithCoder:aDecoder]) {
        
        self.acceptorId = (uint32_t)self.tag;
        
    }
    
    return self;
}

- (void)customInit{
    
    self.controlMessages = [self getControlInfos];
    
}

- (void)setTag:(NSInteger)tag{
    
    [super setTag:tag];
    
    self.acceptorId = (uint32_t)tag;
    
}

- (void)setAcceptorId:(uint32_t)acceptorId{
    
    [super setAcceptorId:acceptorId];
    
    [self customInit];
    
}

- (void)drawRect:(CGRect)rect{
    
    
    if (self.acceptorId) {
        
        [self drawByControlInfo];
        
    }
    
    [super drawRect:rect];
    
    
}

-(void)layoutSubviews{
    
    [super layoutSubviews];
    
    if (self.acceptorId) {
        
        [self layoutByControlInfo];
        
    }
    
}

- (void)drawByControlInfo{
    
    NSMutableArray<MsgMessageContent *> * puppies = self.controlMessages;
    
    for (MsgMessageContent *controlInfo in puppies) {
        
        [self changeByControlInfo:controlInfo];
        
    }
    
}

- (void)layoutByControlInfo{
    
    NSMutableArray<MsgMessageContent *> * puppies = self.controlMessages;
    
    for (MsgMessageContent *controlInfo in puppies) {
        
        [self changeLayoutByControlInfo:controlInfo];
        
    }
    
}

- (void)changeByControlInfo:(MsgMessageContent*)controlInfo{
    
    if (controlInfo.type == SCDGControlTypeChangeUI) {
        
        switch (controlInfo.action) {
            case SCDGActionTypeBackgroundColor:
                
                if (controlInfo.payload && [SCDGUtils isValidStr:controlInfo.payload] && controlInfo.payload.length == 6) {
                    self.backgroundColor = [SCDGUtils getColor:controlInfo.payload];
                }
                break;
                
            default:
                break;
        }
        
    }else if (controlInfo.type == SCDGControlTypeEnable){
        
        self.userInteractionEnabled = controlInfo.action;
        
    }
}

- (void)changeLayoutByControlInfo:(MsgMessageContent*)controlInfo{
    
    if (controlInfo.type == SCDGControlTypeChangeUI) {
        
        switch (controlInfo.action) {
            case SCDGActionTypeBackgroundColor:
                
                if (controlInfo.payload && [SCDGUtils isValidStr:controlInfo.payload] && controlInfo.payload.length == 6) {
                    self.backgroundColor = [SCDGUtils getColor:controlInfo.payload];
                }
                break;
                
            default:
                break;
        }
        
    }else if (controlInfo.type == SCDGControlTypeEnable){
        
        self.userInteractionEnabled = controlInfo.action;
        
    }
}

- (void)handleControlWith:(MsgMessageContent *)message{
    
    __weak SCDGImageView *wself = self;
    
    dispatch_async(dispatch_get_main_queue(), ^{
        
        [wself.controlMessages addObject:message];
        
        [wself changeByControlInfo:message];
        
    });
    
}

- (void)dealloc{
    
    [self unsubscribeRemoteControl];
    
}

@end
