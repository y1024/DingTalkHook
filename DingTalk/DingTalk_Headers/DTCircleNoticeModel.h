//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class DTCircleCommentModel, DTCircleContentModel, NSString;

@interface DTCircleNoticeModel : OpenModel <OpenModelProtocol>
{
    DTCircleContentModel *_content;
    long long _postId;
    long long _commentId;
    unsigned long long _action;
    long long _authorUid;
    long long _authorTag;
    NSString *_authorNick;
    long long _createAt;
    DTCircleCommentModel *_comment;
    NSString *_contentJson;
}

+ (void)upgradeVersion3:(id)arg1;
+ (void)upgradeVersion2:(id)arg1;
+ (_Bool)upgradeTableToVersion:(unsigned long long)arg1 MDHandler:(id)arg2;
+ (unsigned long long)currentNewestVersion;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
@property(copy, nonatomic) NSString *contentJson; // @synthesize contentJson=_contentJson;
@property(retain, nonatomic) DTCircleCommentModel *comment; // @synthesize comment=_comment;
@property(nonatomic) long long createAt; // @synthesize createAt=_createAt;
@property(copy, nonatomic) NSString *authorNick; // @synthesize authorNick=_authorNick;
@property(nonatomic) long long authorTag; // @synthesize authorTag=_authorTag;
@property(nonatomic) long long authorUid; // @synthesize authorUid=_authorUid;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(nonatomic) long long commentId; // @synthesize commentId=_commentId;
@property(nonatomic) long long postId; // @synthesize postId=_postId;
- (void).cxx_destruct;
- (void)updateContentJson;
@property(retain, nonatomic) DTCircleContentModel *content; // @synthesize content=_content;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

