//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WKModelConvertor : NSObject
{
}

+ (id)convertBizConversationExtModel:(id)arg1;
+ (id)categoryIDLModelFromGroup:(id)arg1;
+ (id)groupsFromIDLCategoryModelList:(id)arg1;
+ (id)groupFromIDLCategoryModel:(id)arg1;
+ (id)userBanWordsFromModels:(id)arg1;
+ (id)coverMembersToReadReceivers:(id)arg1 messageID:(long long)arg2 conversationID:(id)arg3;
+ (id)coverMemberToReadReceiver:(id)arg1 messageID:(long long)arg2 conversationID:(id)arg3;
+ (id)dictionaryToJSONString:(id)arg1;
+ (id)convertStringTypeOpenIdListToLongTypeOpenIdList:(id)arg1;
+ (id)convertToMemberGroupNickList:(id)arg1 cId:(id)arg2;
+ (id)convertToMemberRoles:(id)arg1 cId:(id)arg2;
+ (id)convertToMemberGroupNick:(id)arg1 cid:(id)arg2 uid:(long long)arg3;
+ (id)convertToMemberGroupNickWithChangeModel:(id)arg1;
+ (id)convertToMemberGroupNick:(id)arg1 cId:(id)arg2;
+ (id)convertToMemberRole:(id)arg1 cId:(id)arg2;
+ (id)convertToOpenIds:(id)arg1;
+ (id)convertToOpenId:(id)arg1;
+ (id)attachmentsFromWKContentModel:(id)arg1 wkBizMessage:(id)arg2;
+ (id)convertToBizMessage:(id)arg1 withConversationId:(id)arg2;
+ (id)customAttachmentWithAttachmentModel:(id)arg1;
+ (id)linkAttachmentWithAttachmentModel:(id)arg1;
+ (id)geoAttachmentWithAttachmentModel:(id)arg1;
+ (id)videoAttachmentWithAttachmentModel:(id)arg1 message:(id)arg2;
+ (id)fileAttachmentWithAttachmentModel:(id)arg1;
+ (id)audioAttachmentWithAttachmentModel:(id)arg1;
+ (id)imageAttachmentWithAttachmentModel:(id)arg1;
+ (id)textAttachmentWithAttachmentModel:(id)arg1;
+ (id)fileAttachmentWithFileContentModel:(id)arg1;
+ (id)audioAttachmentWithAudioContentModel:(id)arg1 message:(id)arg2;
+ (id)imageAttachmentWithPhotoContentModel:(id)arg1 message:(id)arg2;
+ (id)textAttachmentWithTextContentModel:(id)arg1;
+ (id)convertToBizProfile:(id)arg1;
+ (id)dateFromLongLong:(long long)arg1;
+ (id)convertToBizMessages:(id)arg1;
+ (id)convertToBizConversation:(id)arg1;
+ (id)memberModel2MessageReceivers:(id)arg1 msgId:(long long)arg2;
+ (id)unReadMemberModel2MessageReceivers:(id)arg1 msgId:(long long)arg2;
+ (id)convertToBizConversations:(id)arg1;
+ (id)uidsFromMembers:(id)arg1;
+ (long long)convertDateToMSSeconds:(id)arg1;
+ (id)membersJsonFromMembers:(id)arg1;

@end
