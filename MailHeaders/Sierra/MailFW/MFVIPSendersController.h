//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSArray, NSMutableArray, NSOperationQueue, NSSet, NSUbiquitousKeyValueStore;

@interface MFVIPSendersController : NSObject
{
    NSMutableArray *_VIPSendersMailboxes;	// 8 = 0x8
    NSUbiquitousKeyValueStore *_store;	// 16 = 0x10
    NSOperationQueue *_operationQueue;	// 24 = 0x18
    NSSet *_VIPSendersAddresses;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000000028869c
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002885e2
+ (id)log;	// IMP=0x000000000028813c
@property(retain) NSSet *VIPSendersAddresses; // @synthesize VIPSendersAddresses=_VIPSendersAddresses;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) NSUbiquitousKeyValueStore *store; // @synthesize store=_store;
- (void).cxx_destruct;	// IMP=0x000000000028f537
- (id)_keyForVIP:(id)arg1;	// IMP=0x000000000028f4bd
- (void)_mergeVIPs;	// IMP=0x000000000028dbf1
- (void)_updateLocalWithCloud:(id)arg1 refresh:(BOOL)arg2;	// IMP=0x000000000028d12a
- (void)_storeChanged:(id)arg1;	// IMP=0x000000000028cd54
- (void)_updateCloudWithLocal:(id)arg1;	// IMP=0x000000000028c47f
- (void)_addressBookDidChange:(id)arg1;	// IMP=0x000000000028bb11
@property(readonly, copy) NSSet *addressesForVIPSenders;
- (BOOL)isVIPForPerson:(id)arg1 orAddress:(id)arg2;	// IMP=0x000000000028b6cc
- (void)removeVIPSenderWithAddress:(id)arg1;	// IMP=0x000000000028b2d6
- (void)removeVIPSenderWithMailboxes:(id)arg1;	// IMP=0x000000000028b131
- (void)addNewVIPSenderWithAddress:(id)arg1 name:(id)arg2;	// IMP=0x000000000028ad3b
@property(readonly, copy) NSArray *VIPSendersMailboxes;
- (id)_vipsPlistPath;	// IMP=0x000000000028ac85
- (void)_updateMailboxesAndPostNotificationsOnMainThread;	// IMP=0x000000000028aab5
- (void)_readVIPSenders;	// IMP=0x000000000028a4c3
- (void)_saveVIPSendersAndUpdateMailboxes:(BOOL)arg1;	// IMP=0x0000000000289c6d
- (void)save;	// IMP=0x0000000000289ba1
- (id)_addressBookRecordsForFirstName:(id)arg1 lastName:(id)arg2 withAddressBook:(id)arg3;	// IMP=0x00000000002899ee
- (id)_ABPersonForName:(id)arg1 withAddressBook:(id)arg2;	// IMP=0x00000000002898ac
- (id)_ABPersonForName:(id)arg1 emailAddresses:(id)arg2 withAddressBook:(id)arg3;	// IMP=0x00000000002890b7
- (id)_combineAddresses:(id)arg1 withAddresses:(id)arg2;	// IMP=0x0000000000288fc1
- (BOOL)_canCreateNewVIP;	// IMP=0x0000000000288de1
- (id)_mailboxWithName:(id)arg1 addresses:(id)arg2 uuid:(id)arg3;	// IMP=0x0000000000288bff
- (id)_addressesForMailboxCriteria:(id)arg1;	// IMP=0x0000000000288a4d
- (id)_mailboxCriteriaForAddresses:(id)arg1;	// IMP=0x0000000000288951
- (void)dealloc;	// IMP=0x000000000028884b
@property(nonatomic) BOOL filterByInboxOnly;
- (id)init;	// IMP=0x000000000028819b

@end

