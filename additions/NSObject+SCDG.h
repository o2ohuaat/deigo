//
//  NSObject+SCDG.h
//  deigo
//
//  Created by SC on 16/6/15.
//  Copyright © 2016年 SC. All rights reserved.
//

#import <Foundation/Foundation.h>

//@class SCDGControlInfo;
@interface NSObject (SCDG)

@property (nonatomic, assign)uint32_t acceptorId;

@property (nonatomic, strong)NSMutableArray<MsgMessageContent *> *controlMessages;

- (NSMutableArray<MsgMessageContent *> *)getControlInfos:(SCDGControlType)type;

- (NSMutableArray<MsgMessageContent *> *)getControlInfos;

- (NSMutableArray<MsgMessageContent *> *)getAllSubControlInfos;

// should invoke in dealloc method
- (void)unsubscribeRemoteControl;

// subclass can overwrite
- (void)handleControlWith:(MsgMessageContent*)message;

@end
