//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLSession.h>

@interface NSURLSession (DVTMainThreadLatencyCheckerAdditions)
+ (id)__DVTMainThreadLatencyChecker__sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)__DVTMainThreadLatencyChecker__getAllTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)__DVTMainThreadLatencyChecker__getTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)__DVTMainThreadLatencyChecker__flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)__DVTMainThreadLatencyChecker__resetWithCompletionHandler:(CDUnknownBlockType)arg1;
@end

