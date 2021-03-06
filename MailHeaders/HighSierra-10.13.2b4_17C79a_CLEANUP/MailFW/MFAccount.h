//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MCAccount-Protocol.h"

@class ACAccount, MCAuthScheme, NSArray, NSDate, NSImage, NSNumber, NSString;

@interface MFAccount : NSObject <MCAccount>
{
    BOOL _primitiveIsOffline;
    BOOL _primitiveIsWillingToGoOnline;
    BOOL _autosynchronizingEnabled;
    ACAccount *_systemAccount;
    NSDate *_lastConnectionValidationTime;
}

+ (BOOL)defaultsToSSL;
+ (id)standardSSLPorts;
+ (id)standardPorts;
+ (id)keyPathsForValuesAffectingOfflineDisplayName;
+ (BOOL)allObjectsInArrayAreOffline:(id)arg1;
+ (void)resetConfigureDynamically;
+ (id)sharedAccountStore;
+ (id)genericAccountLargeImage;
+ (id)accountTypeString;
+ (void)saveAccountInfoToDefaults;
+ (void)saveAccounts:(id)arg1;
+ (BOOL)haveAccountsBeenConfigured;
@property(retain) NSDate *lastConnectionValidationTime; // @synthesize lastConnectionValidationTime=_lastConnectionValidationTime;
@property(nonatomic) BOOL autosynchronizingEnabled; // @synthesize autosynchronizingEnabled=_autosynchronizingEnabled;
@property BOOL primitiveIsWillingToGoOnline; // @synthesize primitiveIsWillingToGoOnline=_primitiveIsWillingToGoOnline;
@property BOOL primitiveIsOffline; // @synthesize primitiveIsOffline=_primitiveIsOffline;
@property(copy) ACAccount *systemAccount; // @synthesize systemAccount=_systemAccount;
//- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)respondToHostBecomingReachable;
- (BOOL)canAuthenticateWithScheme:(id)arg1;
@property(readonly) NSImage *squareIcon;
@property(readonly, copy) NSString *accountTypeString;
- (BOOL)_matchesEmailAddress:(id)arg1;
- (BOOL)_matchesDiscoveredSystemAccount:(id)arg1 fromEmailAddress:(id)arg2;
- (BOOL)_systemAccountChangedHostname:(BOOL)arg1 portNumber:(BOOL)arg2 usesSSL:(BOOL)arg3;
- (BOOL)_systemAccountDidUpdateProperties:(id)arg1 fromPropertyDiscovery:(BOOL)arg2;
- (BOOL)_parentSystemAccountDidUpdateProperties:(id)arg1 changedSystemAccount:(char *)arg2;
//- (void)_discoverConnectionPropertiesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)discoverConnectionPropertiesAndWait;
- (void)discoverConnectionProperties;
- (id)nameForMailbox:(id)arg1;
@property(readonly, copy) NSString *identifier;
- (id)localizedRecoverySuggestionWithServerError:(id)arg1 genericDescription:(id)arg2;
- (BOOL)connectAndAuthenticate:(id)arg1;
- (id)authenticatedConnection;
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;
@property BOOL allowInsecureAuthentication;
@property BOOL shouldUseAuthentication;
@property(readonly, nonatomic) BOOL requiresAuthentication;
@property(readonly, copy, nonatomic) NSString *saslProfileName;
@property(retain) MCAuthScheme *preferredAuthScheme;
@property(copy) NSString *authenticationScheme;
- (void)accountInfoDidChange;
- (void)updateFromSuccessfulConnectionPortNumber:(long long)arg1 securityLayerType:(long long)arg2;
- (void)_setSecurityLayerType:(long long)arg1 releasingConnections:(BOOL)arg2;
@property long long securityLayerType;
@property(readonly) NSNumber *usesSSLObject;
- (void)_setUsesSSL:(BOOL)arg1 releasingConnections:(BOOL)arg2;
@property BOOL usesSSL;
- (void)validateConnectionsIfNeeded;
- (void)validateConnections;
- (void)releaseAllConnections;
- (void)invalidateAllStores;
@property(readonly, nonatomic) long long defaultSecurePortNumber;
@property(readonly, nonatomic) long long defaultPortNumber;
@property(readonly, copy, nonatomic) NSArray *standardSSLPorts;
@property(readonly, copy, nonatomic) NSArray *standardPorts;
@property(readonly) NSNumber *portNumberObject;
- (void)_setPortNumber:(long long)arg1 releasingConnections:(BOOL)arg2;
@property long long portNumber;
- (void)setTLSIdentity:(struct OpaqueSecIdentityRef *)arg1;
- (struct OpaqueSecIdentityRef *)copyTLSIdentity;
@property(readonly, copy) NSString *oauthToken;
@property(readonly, copy) NSString *clientInfo;
- (id)_anisetteData;
@property(readonly, copy) NSString *oneTimePassword;
@property(readonly, copy) NSString *machineID;
@property(readonly, copy) NSString *appleAuthenticationToken;
@property(readonly, copy) NSString *applePersonID;
//- (void)displayCredentialPromptInWindow:(id)arg1 completion:(CDUnknownBlockType)arg2;
//- (void)renewCredentialsWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly) BOOL hasPasswordCredential;
@property(readonly) BOOL usesParentAuthentication;
@property(copy) NSString *password;
@property(readonly) BOOL hostnameOriginatesFromParentAccount;
- (id)_hostnameFromParentAccount:(id)arg1;
@property(copy) NSString *hostname;
@property(copy) NSString *username;
@property(readonly, copy) NSString *offlineDisplayName;
@property(copy) NSString *displayName;
@property(copy) NSString *storedDisplayName;
@property(copy) NSString *canonicalEmailAddress;
@property BOOL isWillingToGoOnline;
@property BOOL isOffline;
@property(readonly, nonatomic) BOOL canGoOffline;
@property BOOL configureDynamically;
@property BOOL isActive;
@property(readonly) BOOL isYahooAccount;
@property(readonly) BOOL isAOSAccount;
@property(readonly, copy) NSString *accountTypeIdentifier;
@property(readonly, copy) NSString *parentAccountIdentifier;
- (BOOL)refreshParentAccountProperties;
- (BOOL)refreshAccountProperties;
- (void)_queueAccountInfoDidChange;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)initWithSystemAccount:(id)arg1;
- (void)save;
- (void)setCustomAuthentication:(unsigned int)arg1;
- (unsigned int)customAuthentication;
- (id)accountName;
- (void)setAccountName:(id)arg1;
- (id)loginName;
- (void)setLoginName:(id)arg1;
- (id)serverName;
- (void)setServerName:(id)arg1;
- (id)accountPassword;
- (void)setAccountPassword:(id)arg1;
- (unsigned int)accountType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(copy) NSString *externalHostname;
@property(readonly) Class superclass;

@end

