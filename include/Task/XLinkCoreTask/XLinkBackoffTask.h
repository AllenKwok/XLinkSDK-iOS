//
//  XLinkBackoffTask.h
//  TestTaskQueue
//
//  Created by AllenKwok on 2017/4/21.
//  Copyright © 2017年 www.xlink.cn. All rights reserved.
//

#import "XLinkMaxRetryTask.h"

#pragma mark - XLinkBackoffTaskDataSource

@protocol XLinkBackoffTaskDataSource <NSObject>

- (NSUInteger)onNextInterval:(NSUInteger)curInterval;

@end

@interface XLinkBackoffTask : XLinkMaxRetryTask <XLinkBackoffTaskDataSource>

//task重试间隔值,默认1s
@property(assign, nonatomic) NSUInteger initInterval;

@end