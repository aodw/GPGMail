/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MCBodyTracker.h"
#import "MCNetworkTracker.h"

@class NSOperationQueue;

@protocol MCActivityDelegate <MCBodyTracker, MCNetworkTracker>
@property(readonly, nonatomic) NSOperationQueue *serializationQueue;
- (void)activity:(id)arg1 didEncounterError:(id)arg2;
- (void)addActivity:(id)arg1;
@end
