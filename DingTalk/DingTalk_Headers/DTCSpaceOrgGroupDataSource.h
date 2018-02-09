//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTEnterpriseGroupSpacesInterfaceModule-Protocol.h"

@class DTOrganization, DTOrganizationSpaceInfo, NSMutableArray, NSString;

@interface DTCSpaceOrgGroupDataSource : NSObject <DTEnterpriseGroupSpacesInterfaceModule>
{
    _Bool _hasMore;
    DTOrganization *_currentOrgnization;
    DTOrganizationSpaceInfo *_spaceInfo;
    CDUnknownBlockType _sucessBlock;
    CDUnknownBlockType _failedBlock;
    CDUnknownBlockType _loadMoreFailedBlock;
    long long _cursor;
    NSMutableArray *_spaces;
}

@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSMutableArray *spaces; // @synthesize spaces=_spaces;
@property(nonatomic) long long cursor; // @synthesize cursor=_cursor;
@property(copy, nonatomic) CDUnknownBlockType loadMoreFailedBlock; // @synthesize loadMoreFailedBlock=_loadMoreFailedBlock;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType sucessBlock; // @synthesize sucessBlock=_sucessBlock;
@property(nonatomic) __weak DTOrganizationSpaceInfo *spaceInfo; // @synthesize spaceInfo=_spaceInfo;
@property(retain, nonatomic) DTOrganization *currentOrgnization; // @synthesize currentOrgnization=_currentOrgnization;
- (void).cxx_destruct;
- (void)setEnableSort:(_Bool)arg1;
- (void)sortByType:(unsigned long long)arg1;
- (void)loadMoreSpaces;
- (void)loadSpacesForOrgnization:(id)arg1;
- (unsigned long long)sortType;
- (id)spaceAtRow:(unsigned long long)arg1;
- (unsigned long long)spaceCount;
- (void)getOrgConversationList:(long long)arg1 start:(long long)arg2 size:(long long)arg3 byOrder:(long long)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)loadSpacesFrom:(long long)arg1 pageSize:(int)arg2 byOrder:(long long)arg3;
- (long long)orgSortType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
