//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCTaskHandler.h"

@class MFEWSConnection;

@interface MFEWSNetworkTaskHandler : MCTaskHandler
{
    MFEWSConnection *_connection;
}

@property(readonly, nonatomic) MFEWSConnection *connection; // @synthesize connection=_connection;
//- (void).cxx_destruct;
- (id)init;
- (id)initWithEWSConnection:(id)arg1;

@end

