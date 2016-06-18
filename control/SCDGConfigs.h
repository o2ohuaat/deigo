//
//  SCDGConfigs.h
//  deigo
//
//  Created by SC on 16/6/16.
//  Copyright © 2016年 SC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SCDGConfigs : NSObject

SCDG_DECLARE_SINGLETON()

- (void)addOrUpdateControlInfo:(MsgMessageContent*)message callback:(void(^)())callback;

- (NSMutableArray<MsgMessageContent *> *)getControlInfos:(uint32_t)acceptorId type:(uint8_t)type;

- (NSMutableArray<MsgMessageContent *> *)getControlInfos:(uint32_t)acceptorId;

- (NSMutableArray<MsgMessageContent *> *)getAllSubControlInfos:(uint32_t)acceptorId;

@end
