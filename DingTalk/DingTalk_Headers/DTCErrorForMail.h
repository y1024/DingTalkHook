//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class BLAccount, NSString;

@interface DTCErrorForMail : OpenModel <OpenModelProtocol>
{
    BLAccount *_account;
    unsigned long long _primaryKey;
    NSString *_mailUUID;
    NSString *_sendFailError;
    long long _code;
}

+ (unsigned long long)currentNewestVersion;
+ (_Bool)upgradeTableToVersion:(unsigned long long)arg1 MDHandler:(id)arg2;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
+ (void)syncSaveObject:(id)arg1 account:(id)arg2;
+ (id)findFirstErrorForMailUUID:(id)arg1 account:(id)arg2;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *sendFailError; // @synthesize sendFailError=_sendFailError;
@property(copy, nonatomic) NSString *mailUUID; // @synthesize mailUUID=_mailUUID;
@property(nonatomic) unsigned long long primaryKey; // @synthesize primaryKey=_primaryKey;
@property(retain, nonatomic) BLAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)initWithAccount:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

