//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class NSString;

@interface DTMobileContact : OpenModel <OpenModelProtocol>
{
    _Bool _isUploaded;
    _Bool _isFriend;
    _Bool _isDeleted;
    NSString *_primaryKey;
    long long _recordID;
    NSString *_crc;
    NSString *_phoneNumber;
    NSString *_name;
    NSString *_pinyin;
    long long _modifyAt;
    long long _uid;
    NSString *_email;
    long long _version;
    NSString *_company;
    NSString *_jobTitle;
}

+ (void)upgradeVersion2:(id)arg1;
+ (unsigned long long)currentNewestVersion;
+ (_Bool)upgradeTableToVersion:(unsigned long long)arg1 MDHandler:(id)arg2;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
+ (id)primaryKeyWithRecordID:(long long)arg1 crc:(id)arg2;
+ (id)ftsTableColumnsTokenizers;
+ (id)ftsTableNewColumns;
+ (id)ftsTableColumns;
+ (void)upgradeTriggerWithMDHandler:(id)arg1;
+ (_Bool)isMatchedWithTableName:(id)arg1;
@property(copy, nonatomic) NSString *jobTitle; // @synthesize jobTitle=_jobTitle;
@property(copy, nonatomic) NSString *company; // @synthesize company=_company;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(nonatomic) _Bool isFriend; // @synthesize isFriend=_isFriend;
@property(nonatomic) _Bool isUploaded; // @synthesize isUploaded=_isUploaded;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(nonatomic) long long modifyAt; // @synthesize modifyAt=_modifyAt;
@property(copy, nonatomic) NSString *pinyin; // @synthesize pinyin=_pinyin;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *crc; // @synthesize crc=_crc;
@property(nonatomic) long long recordID; // @synthesize recordID=_recordID;
@property(copy, nonatomic) NSString *primaryKey; // @synthesize primaryKey=_primaryKey;
- (void).cxx_destruct;
- (_Bool)hasPrimaryKey;
- (id)coutryCodeOfPhone;
- (id)mobileOfPhone;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

