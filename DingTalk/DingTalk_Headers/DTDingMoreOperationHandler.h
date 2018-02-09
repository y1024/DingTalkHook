//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTBizDingMinutesModel, DTBizDingModel, UIView, UIViewController;
@protocol DTDingMoreOperationHandlerDelegate;

@interface DTDingMoreOperationHandler : NSObject
{
    _Bool _deleteDingNeedPopVC;
    _Bool _showAddReceiver;
    _Bool _showFavorite;
    _Bool _showModifyDeadline;
    _Bool _showModifyTask;
    _Bool _showModifyNotify;
    _Bool _showModifyConference;
    _Bool _showCancelConference;
    _Bool _showConferenceCheckIn;
    _Bool _showDingRecall;
    DTBizDingModel *_dingModel;
    DTBizDingMinutesModel *_dingMinutesModel;
    UIViewController *_currentVC;
    id <DTDingMoreOperationHandlerDelegate> _delegate;
    CDUnknownBlockType _addtionMenuItemsBlock;
    CDUnknownBlockType _pinStateDidChangeBlock;
    UIView *_showView;
}

+ (id)conferenceDingMenuBlockItemWithTitle:(id)arg1 clickedBlock:(CDUnknownBlockType)arg2;
+ (id)dingContentWithDingModel:(id)arg1;
+ (id)commentContentWithModel:(id)arg1;
+ (id)attachContentWithDingModel:(id)arg1;
+ (id)unSupportLinkModel;
+ (id)attachItemWithAattachmentExtra:(id)arg1;
+ (id)avatarCircleImageWithIndex:(long long)arg1 size:(struct CGSize)arg2;
+ (id)avatarCircleColorWithIndex:(long long)arg1;
+ (id)decorateImageWithIndex:(long long)arg1;
@property(nonatomic) __weak UIView *showView; // @synthesize showView=_showView;
@property(copy, nonatomic) CDUnknownBlockType pinStateDidChangeBlock; // @synthesize pinStateDidChangeBlock=_pinStateDidChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType addtionMenuItemsBlock; // @synthesize addtionMenuItemsBlock=_addtionMenuItemsBlock;
@property(nonatomic) _Bool showDingRecall; // @synthesize showDingRecall=_showDingRecall;
@property(nonatomic) _Bool showConferenceCheckIn; // @synthesize showConferenceCheckIn=_showConferenceCheckIn;
@property(nonatomic) _Bool showCancelConference; // @synthesize showCancelConference=_showCancelConference;
@property(nonatomic) _Bool showModifyConference; // @synthesize showModifyConference=_showModifyConference;
@property(nonatomic) _Bool showModifyNotify; // @synthesize showModifyNotify=_showModifyNotify;
@property(nonatomic) _Bool showModifyTask; // @synthesize showModifyTask=_showModifyTask;
@property(nonatomic) _Bool showModifyDeadline; // @synthesize showModifyDeadline=_showModifyDeadline;
@property(nonatomic) _Bool showFavorite; // @synthesize showFavorite=_showFavorite;
@property(nonatomic) _Bool showAddReceiver; // @synthesize showAddReceiver=_showAddReceiver;
@property(nonatomic) __weak id <DTDingMoreOperationHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool deleteDingNeedPopVC; // @synthesize deleteDingNeedPopVC=_deleteDingNeedPopVC;
@property(nonatomic) __weak UIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(retain, nonatomic) DTBizDingMinutesModel *dingMinutesModel; // @synthesize dingMinutesModel=_dingMinutesModel;
@property(retain, nonatomic) DTBizDingModel *dingModel; // @synthesize dingModel=_dingModel;
- (void).cxx_destruct;
- (void)dingRecallOperation;
- (void)dingRecallAction;
- (id)dingRecallItem;
- (id)reportItem;
- (id)recoveryItem;
- (id)delegateItem;
- (id)focusItem;
- (id)favoriteItem;
- (id)modifyNotifyItem;
- (id)motifyTaskItem;
- (id)addReceiverItem;
- (id)modifiedDeadlineItem;
- (id)conferenceCheckInItem;
- (id)cancelConferenceItem;
- (id)modifyConferenceItem;
- (id)openNoticeItem;
- (id)closeNoticeItem;
- (void)cancelConference;
- (void)modifyConference;
- (void)changeDingStatusWithDingModel:(id)arg1 showStatus:(long long)arg2;
- (void)handleDeleteTask:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)motifyTask;
- (id)dingCreateInputParam;
- (void)openModifyViewControllerWithInputParam:(id)arg1;
- (void)motifyNotify;
- (void)confirmDing:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)changeDing:(id)arg1 focusStatus:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3;
- (void)changeDing:(id)arg1 focusStatus:(_Bool)arg2;
- (void)finishDeadlineWithDing:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)moreOperationDingFocus;
- (void)moreOperationDingReport;
- (void)moreOperationCommentNotifyTurnOn:(_Bool)arg1;
- (void)moreOperationFavoriteDing;
- (void)openSelectWithRequireUids:(id)arg1;
- (void)addReceiver;
- (void)modifiedDeadline;
- (void)gotoDingSourcePage;
- (void)gotoMessageWithConversationId:(id)arg1;
- (void)deadlineDingFinishClickWihtSuccessBlock:(CDUnknownBlockType)arg1;
- (void)showMoreOperation;
- (id)initWithDingModel:(id)arg1 currentVC:(id)arg2;
- (id)init;

@end
