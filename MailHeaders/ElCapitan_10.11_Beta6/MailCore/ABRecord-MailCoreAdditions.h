/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "ABRecord.h"

@class NSArray, NSString;

@interface ABRecord (MailCoreAdditions)
@property(readonly, nonatomic) BOOL isGroup;
- (id)compoundNameAndEmailForEmail:(id)arg1;
@property(readonly, copy, nonatomic) NSString *compoundNameAndEmail;
@property(readonly, copy, nonatomic) NSString *compoundName;
@property(readonly, copy, nonatomic) NSArray *allEmailAddresses;
@property(readonly, copy, nonatomic) NSString *email;
- (long long)fullNameCompare:(id)arg1;
- (id)_fullName;
@property(readonly, copy, nonatomic) NSString *extension;
@property(readonly, copy, nonatomic) NSString *nickname;
@property(readonly, copy, nonatomic) NSString *middleName;
@property(readonly, copy, nonatomic) NSString *lastName;
@property(readonly, copy, nonatomic) NSString *firstName;
@end
