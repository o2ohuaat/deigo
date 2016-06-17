//
//  SCDGButton.m
//  deigo
//
//  Created by SC on 16/6/16.
//  Copyright © 2016年 SC. All rights reserved.
//

#import "SCDGButton.h"

@implementation SCDGButton

- (instancetype)init{
    
    if (self = [super init]) {
        ;
    }
    
    return self;
}

-(instancetype)initWithFrame:(CGRect)frame{
    
    if (self = [super initWithFrame:frame]) {
        ;
    }
    
    return self;
}

-(instancetype)initWithCoder:(NSCoder *)aDecoder{
    
    if (self = [super initWithCoder:aDecoder]) {
        
        self.acceptorId = (uint32_t)self.tag;
        
    }
    
    return self;
}

- (void)setTag:(NSInteger)tag{
    
    [super setTag:tag];
    
    self.acceptorId = (uint32_t)tag;
    
}

-(void)layoutSubviews{
    
    [super layoutSubviews];
    
    if (self.acceptorId) {
        
        [self layoutByControlInfo];
        
    }
    
}

- (void)layoutByControlInfo{
    
    NSArray<MsgMessageContent *> * puppies = [self getControlInfos];
    
    for (MsgMessageContent *controlInfo in puppies) {
        
        [self changeByControlInfo:controlInfo];
        
    }
    
}

- (void)changeByControlInfo:(MsgMessageContent*)controlInfo{
    
    if (controlInfo.type == SCDGControlTypeChangeUI) {
        
        switch (controlInfo.action) {
            case SCDGActionTypeContent:
                
                [self setTitle:controlInfo.payload forState:UIControlStateNormal];
                break;
                
            case SCDGActionTypeTextColor:
                
                if (controlInfo.payload && [SCDGUtils isValidStr:controlInfo.payload] && controlInfo.payload.length == 6) {
                    [self setTitleColor:[SCDGUtils getColor:controlInfo.payload] forState:UIControlStateNormal];
                }
                break;
                
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
    
    [self changeByControlInfo:message];
    
}

- (void)dealloc{
    
    [self unsubscribeRemoteControl];
    
}

@end
