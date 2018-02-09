//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTCSpaceCoFolderRPCService : NSObject
{
}

+ (void)listHomeworkFolderbyOrder:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)closeShareLink:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)createShareLink:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)removeMembers:(id)arg1 memberIds:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)modifyMemberRole:(id)arg1 role:(unsigned long long)arg2 memberIds:(id)arg3;
+ (void)listMembersWithCid:(id)arg1 withRoles:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)modifyCoFolderName:(id)arg1 withName:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)dismissFolder:(id)arg1 disMissConv:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)quitFolder:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)addCoFolderMember:(id)arg1 withMembers:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)listMembers:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
+ (void)infoFolderModel:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)listFoldersWithOrgID:(long long)arg1 byOrder:(long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)createCoFolderWithOrgID:(long long)arg1 withName:(id)arg2 withMembers:(id)arg3 createConversation:(_Bool)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
+ (void)createCoFolderWithSpaceId:(long long)arg1 itemIds:(id)arg2 openShare:(_Bool)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;

@end
