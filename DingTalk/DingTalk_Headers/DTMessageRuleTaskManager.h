//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTMessageChatRecordGuideRuleTask, DTMessageConversationTipsGuideRuleTask, DTMessageGetMoreGIFRuleTask, DTMessageRemindGuideRuleTask, DTMessageRuleTaskContext, DTMessageToDingGuideRuleTask, DTMessageTranslationGuideRuleTask;

@interface DTMessageRuleTaskManager : NSObject
{
    DTMessageRuleTaskContext *_context;
    DTMessageToDingGuideRuleTask *_toDingTask;
    DTMessageTranslationGuideRuleTask *_translationTask;
    DTMessageConversationTipsGuideRuleTask *_videoConferenceTask;
    DTMessageChatRecordGuideRuleTask *_chatRecordTask;
    DTMessageRemindGuideRuleTask *_remindGuideRuleTask;
    DTMessageGetMoreGIFRuleTask *_getMoreGIFRuleTask;
}

@property(retain, nonatomic) DTMessageGetMoreGIFRuleTask *getMoreGIFRuleTask; // @synthesize getMoreGIFRuleTask=_getMoreGIFRuleTask;
@property(retain, nonatomic) DTMessageRemindGuideRuleTask *remindGuideRuleTask; // @synthesize remindGuideRuleTask=_remindGuideRuleTask;
@property(retain, nonatomic) DTMessageChatRecordGuideRuleTask *chatRecordTask; // @synthesize chatRecordTask=_chatRecordTask;
@property(retain, nonatomic) DTMessageConversationTipsGuideRuleTask *videoConferenceTask; // @synthesize videoConferenceTask=_videoConferenceTask;
@property(retain, nonatomic) DTMessageTranslationGuideRuleTask *translationTask; // @synthesize translationTask=_translationTask;
@property(retain, nonatomic) DTMessageToDingGuideRuleTask *toDingTask; // @synthesize toDingTask=_toDingTask;
@property(retain, nonatomic) DTMessageRuleTaskContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didCreatedScheduleFromMessage:(id)arg1;
- (void)didChangeTipMobileAds:(id)arg1;
- (void)notifyEmotionDidAddToFavorite;
- (void)notifyMessageDidLoad;
- (void)setup;
- (id)initWithContext:(id)arg1;

@end

