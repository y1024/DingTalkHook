//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTEnterpriseCard, NSArray;

@interface DTAuthEngine : NSObject
{
    _Bool _shouldAutoSaveLastUser;
    NSArray *_currentCards;
    NSArray *_currentOrgnizations;
    DTEnterpriseCard *_mainEnterpriseCard;
}

+ (id)wkAppKey;
+ (_Bool)isAlibaba;
+ (id)shareInstance;
+ (void)sethasShowedFriendSuggest:(_Bool)arg1;
+ (_Bool)hasShowedFriendSuggest;
+ (void)setAllDingSyncByCreateAt:(long long)arg1;
+ (long long)allDingSyncByCreateAt;
+ (void)setCleanedAllCalendarVersion:(_Bool)arg1;
+ (_Bool)hasCleanedAllCalendarVersion;
+ (void)setAllowedMailCalendarNotice:(_Bool)arg1;
+ (_Bool)isAllowedMailCalendarNotice;
+ (void)setSmartDeviceRedDotHasClicked:(long long)arg1;
+ (_Bool)isSmartDeviceRedDotHasClickedWithOrgId:(long long)arg1;
+ (void)setIsWorkTipsViewHasClicked:(_Bool)arg1;
+ (_Bool)isWorkTipsViewHasClicked;
+ (void)setAtMeMessageListOpened:(_Bool)arg1;
+ (_Bool)isOpenedAtMeMessageList;
+ (void)setEnabledExpandingGroupInStreamMode:(_Bool)arg1;
+ (_Bool)isEnabledExpandingGroupInStreamMode;
+ (void)setDidShowStreamModeGuide;
+ (_Bool)hasShowStreamModeGuide;
+ (_Bool)firstShowGuideAlert;
+ (void)setFirstShowGuideAlert:(_Bool)arg1;
+ (id)latestSelectedDeviceIds;
+ (void)setLatestSelectedDeviceIds:(id)arg1;
+ (id)projectorConnectionModel;
+ (void)setProjectorConnectionModel:(id)arg1;
+ (void)setClickedChatMicroAppIdList:(id)arg1;
+ (id)clickedChatMicroAppIdList;
+ (_Bool)hasShowTaskDingRemindGuide;
+ (void)setHasShowTaskDingRemindGuide:(_Bool)arg1;
+ (void)setExtContactStatHasClicked:(_Bool)arg1;
+ (_Bool)isExtContactStatHasClicked;
+ (void)setExternalOrgRedDotHasShow:(_Bool)arg1;
+ (_Bool)isExternalOrgRedDotHasShow;
+ (void)setCalendarMailSettingRedDotHasShow:(_Bool)arg1;
+ (_Bool)isCalendarMailSettingRedDotHasShow;
+ (void)setDingHomeShowDinglist:(_Bool)arg1;
+ (_Bool)isDingHomeShowDinglist;
+ (void)setCalendarTodayTipsHasShow:(_Bool)arg1;
+ (_Bool)isCalendarTodayTipsHasShow;
+ (id)dingFilterSelectedStatusDic;
+ (void)setDingFilterSelectedStatusDic:(id)arg1;
+ (_Bool)dingConferenceUpdateEndTimeFinished;
+ (void)setDingConferenceUpdateEndTimeFinished:(_Bool)arg1;
+ (double)repeatCalendarCreateAt;
+ (void)setRepeatCalendarCreateAt:(double)arg1;
+ (double)calendarCursorTime;
+ (void)setCalendarCursorTime:(double)arg1;
+ (long long)calendarMaxVersion;
+ (void)setCalendarMaxVersion:(long long)arg1;
+ (_Bool)isSyncAliMailCalendar;
+ (void)setSyncAliMailCalendar:(_Bool)arg1;
+ (_Bool)needReportedTokenAndWua;
+ (void)setReportedTokenAndWuaTime;
+ (_Bool)hasClickedDingInMeesageInput;
+ (void)setClickedDingInMeesageInput;
+ (void)setDingConferenceGuideRedDotHasShow:(_Bool)arg1;
+ (_Bool)isDingConferenceGuideRedDotHasShow;
+ (void)setIsDingDetailMoreReceiveAndRejectTipsHasShow:(_Bool)arg1;
+ (_Bool)isDingDetailMoreReceiveAndRejectTipsHasShow;
+ (void)setIsDingDetailMoreTipsHasShow:(_Bool)arg1;
+ (_Bool)isDingDetailMoreTipsHasShow;
+ (void)setLastActiveTimeForEffectiveMode:(double)arg1;
+ (double)lastActiveTimeForEffectiveMode;
+ (void)setEffectiveModeClicked:(_Bool)arg1;
+ (_Bool)hasEffectiveModeClicked;
+ (void)setEffectiveModeIsOpened:(_Bool)arg1;
+ (_Bool)isOpenedEffectiveMode;
+ (void)setIsAllowedShowEffectiveMode:(_Bool)arg1;
+ (_Bool)isAllowedShowEffectiveMode;
+ (void)setDeleteDingAlertHasShow:(_Bool)arg1;
+ (_Bool)isDeleteDingAlertHasShow;
+ (void)setGroupSportsDotShown:(_Bool)arg1;
+ (_Bool)hasGroupSportsDotShown;
+ (void)setTaskNewGuideHasShow:(_Bool)arg1;
+ (_Bool)isTaskNewGuideHasShow;
+ (long long)dingCalendarHolidaysVersion;
+ (void)setDingCalendarHolidaysVersion:(long long)arg1;
+ (id)dingCalendarHolidaysJson;
+ (void)setCalendarHolidays:(id)arg1;
+ (void)setHasUpgradeCustomNotificationSound;
+ (_Bool)hasUpgradeCustomNotificationSound;
+ (void)setHasDeleteAllOldDing:(_Bool)arg1;
+ (_Bool)hasDeleteAllDing;
+ (void)setDomainStorageDirtyDataCleared;
+ (_Bool)hasDiscardDomainStorageDirtyData;
+ (id)dingIndustryGuideId;
+ (void)setDingIndustryGuide:(id)arg1;
+ (_Bool)autoSaveExternalContactEnable;
+ (void)setAutoSaveExternalContactEnable:(_Bool)arg1;
+ (_Bool)hasClickedRedEnvelop;
+ (void)setClickedRedEnvelop;
+ (void)setShowDingCardTip:(_Bool)arg1;
+ (_Bool)hasShowDingCardTip;
+ (void)setShowGroupSearchableTips:(_Bool)arg1;
+ (_Bool)shouldShowGroupSearchableTips;
+ (void)setHasShowedTaskTeachGuide:(_Bool)arg1;
+ (_Bool)hasShowedTaskTeachGuide;
+ (void)setTaskGuideHasShow:(_Bool)arg1;
+ (_Bool)isTaskGuideHasShow;
+ (_Bool)hasClickedFestivalRedEnvelop:(id)arg1;
+ (void)setClickedFestivalRedEnvelop:(id)arg1;
+ (void)setLastAccelerateCleanMsgTime:(long long)arg1;
+ (long long)lastAccelerateCleanMsgTime;
+ (void)setHasShowTaskFinishPopView:(_Bool)arg1;
+ (_Bool)hasShowTaskFinishPopView;
+ (void)cleanCachedCreateTaskText;
+ (id)createTaskCachedText;
+ (void)cacheCreateTaskText:(id)arg1;
+ (void)setShowFinishedTaskList:(_Bool)arg1;
+ (_Bool)showFinishedTaskList;
+ (void)setShowBatchAddExtContactInMobileVC:(_Bool)arg1;
+ (_Bool)hasShowBatchAddExtContactInMobileVC;
+ (void)setShowCSpaceTip:(_Bool)arg1;
+ (_Bool)hasShowCSpaceTip;
+ (void)setShowNameCardNewTip:(_Bool)arg1;
+ (_Bool)hasShowNameCardNewTip;
+ (void)setIsRemindUserActived:(_Bool)arg1;
+ (_Bool)isRemindUserActived;
+ (void)setNoMoreTipsForBeaconAuth:(_Bool)arg1;
+ (_Bool)hasSetNoMoreTipsForBeaconAuth;
+ (void)setHasSyncDingSenders:(_Bool)arg1;
+ (_Bool)hasSyncDingSenders;
+ (void)setHasShowConfirmHint:(_Bool)arg1;
+ (_Bool)hasShowConfirmHint;
+ (void)setShowDeadlineDingTip:(_Bool)arg1;
+ (_Bool)hasShowDeadlineDingTip;
+ (void)setShareMobileSwitchOn:(_Bool)arg1;
+ (_Bool)isShareMobileSwitchOn;
+ (void)setPinGuideHasShow:(_Bool)arg1;
+ (_Bool)isPinGuideHasShow;
+ (void)setDingGuideHasShow:(_Bool)arg1;
+ (_Bool)isDingGuideHasShow;
+ (void)setDingCreateNoReceiverPromptedShow:(_Bool)arg1;
+ (_Bool)isDingCreateNoReceiverPromptedShow;
+ (void)setChannelMainViewHasShowGuidePage:(_Bool)arg1;
+ (_Bool)channelMainViewHasShowGuidePage;
+ (void)setShowExternalContactScopesTip:(_Bool)arg1;
+ (_Bool)hasShowExternalContactScopesTip;
+ (void)setOpenExternalChannelService:(_Bool)arg1;
+ (_Bool)isOpenExternalChannelService;
+ (void)setHasShowExternalContactSlide:(_Bool)arg1;
+ (_Bool)hasShowExternalContactSlide;
+ (_Bool)safeCenterHasShowRedDot;
+ (void)setSafeCenterHasShowRedDot:(_Bool)arg1;
+ (_Bool)hasClearedHpmHistoryFiles;
+ (void)setHasClearedHpmHistoryFiles:(_Bool)arg1;
+ (_Bool)hasShowBizCallOpenAnimation;
+ (void)setHasShowBizCallOpenAnimation:(_Bool)arg1;
+ (_Bool)hasShowSafeAnimation;
+ (void)setHasShowSafeAnimation:(_Bool)arg1;
+ (_Bool)hasInvitedColleaguesToDepartment;
+ (void)setHasInvitedColleaguesToDepartment:(_Bool)arg1;
+ (_Bool)hasClickedSecretChat;
+ (void)setHasClickedSecretChat:(_Bool)arg1;
+ (_Bool)hasClickedFaceBtn;
+ (void)setHasClickedFaceBtn:(_Bool)arg1;
+ (_Bool)hasTrySearchEmotion;
+ (void)setHasTrySearchEmotion:(_Bool)arg1;
+ (_Bool)hasClickedAddEmotion;
+ (void)setHasClickedAddEmotion:(_Bool)arg1;
+ (id)sectionFoldableStatusDic;
+ (void)setSectionFoldableStatusDic:(id)arg1;
+ (void)setURLCacheEnable:(_Bool)arg1;
+ (_Bool)urlCacheEnabled;
+ (void)setHasShowContactInviteTip:(_Bool)arg1;
+ (_Bool)hasShowContactInviteTip;
+ (void)setHasClosedOrConfirmedDingGuide:(_Bool)arg1;
+ (_Bool)hasClosedOrConfirmedDingGuide;
+ (void)setSenderFinishedDeadLineDing:(_Bool)arg1;
+ (_Bool)hasSenderFinishedDeadLineDing;
+ (void)setReceiverFinishedDeadLineDing:(_Bool)arg1;
+ (_Bool)hasReceiverFinishedDeadLineDing;
+ (void)setNoMoreLoadDeleteDing:(_Bool)arg1;
+ (_Bool)noMoreLoadDeleteDing;
+ (void)setNoMoreLoadNormalDing:(_Bool)arg1;
+ (_Bool)noMoreLoadNormalDing;
+ (void)setHasShowPickDepartGuide:(_Bool)arg1;
+ (_Bool)hasShowPickDepartGuide;
+ (_Bool)isSplashOn;
+ (void)setSplashOn:(_Bool)arg1;
+ (void)setAllEmployeeGroupShown:(_Bool)arg1;
+ (_Bool)hasAllEmployeeGroupShown;
+ (void)setCreateTeamShown:(_Bool)arg1;
+ (_Bool)hasCreateTeamShown;
+ (void)updateCreateOrgMenuClicked:(_Bool)arg1;
+ (_Bool)hasClickedCreateOrgMenu;
+ (void)removeLoadScoreJsonString;
+ (void)setLastLoadOrgScoreJson:(id)arg1;
+ (id)lastLoadOrgScoreJsonString;
+ (void)setLastLoadOrgScoreDataTime:(id)arg1;
+ (void)removeLoadScoreDataTime;
+ (id)lastLoadOrgScoreDataTime;
+ (_Bool)isOrgScoreButtonHasClicked;
+ (void)setOrgScoreButtonHasClicked:(_Bool)arg1;
+ (_Bool)isImproveButtonHasClicked;
+ (void)setImproveButtonHasClicked:(_Bool)arg1;
+ (_Bool)hasNewTaskWithOrgId:(long long)arg1;
+ (void)removeNewTaskWithOrgId:(long long)arg1;
+ (void)setNewTaskWithOrgId:(long long)arg1;
+ (void)setConversationListCustomSort:(_Bool)arg1;
+ (_Bool)isConversationListCustomSort;
+ (void)setSplashDataHasClear:(_Bool)arg1;
+ (_Bool)isSplashDataHasClear;
+ (_Bool)hasConfirmedNewVersionFeature;
+ (void)updateNewVersionFeatureConfirmed:(_Bool)arg1;
+ (void)setAccelerateClicked:(_Bool)arg1;
+ (_Bool)hasAccelerateClicked;
+ (_Bool)isCustomSortHasClicked;
+ (void)setCustomSortHasClicked:(_Bool)arg1;
+ (_Bool)isFontSizeHasClicked;
+ (void)setFontSizeHasClicked:(_Bool)arg1;
+ (void)setFavoritesHasClicked:(_Bool)arg1;
+ (_Bool)isFavoritesHasClicked;
+ (void)setSettingHelpHasShow:(_Bool)arg1;
+ (_Bool)isSettingHelpHasShow;
+ (void)setConferenceFavOpen:(_Bool)arg1;
+ (_Bool)isConferenceFavOpen;
+ (void)setVideoConferenceConfigSwipeLeftToDeleteHashShown:(_Bool)arg1;
+ (_Bool)isVideoConferenceConfigSwipeLeftToDeleteHashShown;
+ (void)setVideoConferenceDoubleClickToExitFullScreenTipHasShown:(_Bool)arg1;
+ (_Bool)isVideoConferenceDoubleClickToExitFullScreenTipHasShown;
+ (void)setVideoConferenceDoubleClickToFullScreenTipHasShown:(_Bool)arg1;
+ (_Bool)isVideoConferenceDoubleClickToFullScreenTipHasShown;
+ (void)setVideoConferenceHasShow:(_Bool)arg1;
+ (_Bool)isVideoConferenceHasShown;
+ (void)setPeerCaseHasShowed:(_Bool)arg1;
+ (_Bool)isPeerCaseHasShowed;
+ (void)setDingCardHasShow:(_Bool)arg1;
+ (_Bool)isDingCardHasShow;
+ (void)setVideoMicroAppHasShow:(_Bool)arg1;
+ (_Bool)isVideoMicroAppShow;
+ (void)setConferenceMicroAppHasShow:(_Bool)arg1;
+ (_Bool)isConferenceMicroAppShow;
+ (void)setConferenceHistoryDialHasShow:(_Bool)arg1;
+ (_Bool)isConferenceHistoryDialShow;
+ (void)setHasConferenceHistoryRegMicAuth:(_Bool)arg1;
+ (_Bool)isHasConferenceHistoryRegMicAuth;
+ (void)setWarnChangeBizCallOrgHasShow:(_Bool)arg1;
+ (_Bool)isShowWarnChangeBizCallOrg;
+ (void)setConferenceHistoryOneBoxHasShow:(_Bool)arg1;
+ (_Bool)isConferenceHistoryOneBoxShow;
+ (void)setMicroConferenceHasShowManage:(_Bool)arg1;
+ (_Bool)isMicroConferenceHasShowManage;
+ (void)setMicroConferenceHasShowTip:(_Bool)arg1;
+ (_Bool)isMicroConferenceHasShowTip;
+ (void)setVideoConferenceHasShowTip:(_Bool)arg1;
+ (_Bool)isVideoConferenceHasShowTip;
+ (void)setConferenceNewHasShow:(_Bool)arg1;
+ (_Bool)isConferenceNewHasShow;
+ (void)setConferenceSetHasShow:(_Bool)arg1;
+ (_Bool)isConferenceSetHasShow;
+ (void)setPromotionHasShow:(_Bool)arg1;
+ (_Bool)isPromotionHasShow;
+ (void)setPromotionSetingOpen:(_Bool)arg1;
+ (_Bool)isPromotionSetingOpen;
+ (void)setConferenceTipHasShow:(_Bool)arg1;
+ (_Bool)isConferenceTipHasShow;
+ (void)setConferenceHistoryInfoHasShow:(_Bool)arg1;
+ (_Bool)isConferenceHistoryInfoHasShow;
+ (void)setConferenceFavInfo:(id)arg1;
+ (id)conferenceFavInfo;
+ (void)setPromotionSetingInfo:(id)arg1;
+ (id)promotionSetingInfo;
+ (void)removeLoadPromotionInfoTime;
+ (void)setLastLoadPromotionInfoTime:(id)arg1;
+ (id)lastLoadPromotionInfoTime;
+ (void)removeShowAuthFailKeyWithOrgId:(long long)arg1;
+ (_Bool)needShowAuthFailWithOrgId:(long long)arg1;
+ (void)setMobileAuthFailWithOrgId:(long long)arg1;
+ (void)setMobileAuthHasClicked:(_Bool)arg1;
+ (_Bool)isMobileAuthHasClicked;
+ (void)setHasLoadHighestOrgLevel:(_Bool)arg1;
+ (_Bool)hasLoadHighestOrgLevel;
+ (void)setUserHighestOrgLevel:(long long)arg1;
+ (long long)userHighestOrgLevel;
+ (void)setSettingBossClicked:(_Bool)arg1;
+ (_Bool)isSettingBossClicked;
+ (void)setAIGuide:(id)arg1;
+ (id)aiGuide;
+ (void)setMultiDepartmentTipsHasShow:(_Bool)arg1;
+ (_Bool)isMultiDepartmentTipsHasShow;
+ (void)setTrialOrgnizationTipsHasShow:(_Bool)arg1;
+ (_Bool)isTrialOrgnizationTipsHasShow;
+ (void)setOAGuideViewHasShow:(_Bool)arg1;
+ (_Bool)isOAGuideViewHasShow;
+ (void)setMessageGuideViewHasShow:(_Bool)arg1;
+ (_Bool)isMessageGuideViewHasShow;
+ (void)setUnreadGuideViewHasShow:(_Bool)arg1;
+ (_Bool)isUnreadGuideViewHasShow;
+ (void)setDingGuideViewHasShow:(_Bool)arg1;
+ (_Bool)isDingGuideViewHasShow;
+ (void)setContactGuideViewHasShow:(_Bool)arg1;
+ (_Bool)isContactGuideViewHasShow;
+ (void)setConversationGuidVieweHasShow:(_Bool)arg1;
+ (_Bool)isConversationGuideViewHasShow;
+ (unsigned long long)teamMembersLimit;
+ (void)setCursorForFetchingMobileContact:(long long)arg1;
+ (long long)cursorForFetchingMobileContact;
+ (void)setMobileContactMatchingOn:(_Bool)arg1;
+ (_Bool)isMobileContactMatchingOn;
+ (_Bool)hasLocalMatchSwitch;
+ (void)setRedDotShownInSettingListForSubscribe:(_Bool)arg1;
+ (_Bool)hasRedDotShownInSettingListForSubscribe;
+ (void)setShowReddotInMailDetailMoreActon:(_Bool)arg1;
+ (_Bool)hasShowReddotInMailDetailMoreActon;
+ (void)setSyncedMailSignatureForEmail:(id)arg1 flag:(_Bool)arg2;
+ (_Bool)hasSyncedMailSignatureForEmail:(id)arg1;
+ (void)setShowGuideForCreateChatInMailReader:(_Bool)arg1;
+ (_Bool)isShowGuideForCreateChatInMailReader;
+ (void)setLogoutCauseForMail:(id)arg1 cause:(id)arg2;
+ (id)logoutStausForMail:(id)arg1;
+ (void)setLoginBindMailBefore:(_Bool)arg1;
+ (_Bool)isLoginBindMailBefore;
+ (void)setUserLoginBindMail:(_Bool)arg1;
+ (_Bool)isUserLoginBindMail;
+ (void)setRedDotShownInSettingListForOrgOrgDomain:(_Bool)arg1;
+ (_Bool)hasRedDotShownInSettingListForOrgDomain;
+ (void)setRedDotShowInMaillistSettingButtonForDomainManager:(_Bool)arg1;
+ (_Bool)isRedDotShowInMaillistSettingButtonForDomainManger;
+ (void)setRedDotInMaillistHeader:(_Bool)arg1;
+ (_Bool)isRedDotShowInMaillistHeader;
+ (_Bool)hasNewMail;
+ (void)setHasNewMail:(_Bool)arg1;
+ (_Bool)isMailTokenExpired;
+ (void)setMailTokenExpired:(_Bool)arg1;
+ (_Bool)isMailLoginModeChanged;
+ (void)setMailLoginModeChanged:(_Bool)arg1;
+ (long long)mailLoginMode;
+ (void)setMailLoginMode:(long long)arg1;
+ (id)lastLoginMailEmail;
+ (void)setLastLoginMailEmail:(id)arg1;
+ (void)setRedDotShownInSettingListForOrgSignature:(_Bool)arg1;
+ (_Bool)isRedDotShownInSettingListForOrgSignature;
+ (void)setRedDotShownInMailListSettingButtonForOrgSignature:(_Bool)arg1;
+ (_Bool)isRedDotShownInMailListSettingButtonForOrgSignature;
+ (_Bool)isAllowModifyDingtalkAlias;
+ (void)setAllowModifyDingtalkAlias:(_Bool)arg1;
+ (id)dingtalkMailAddress;
+ (void)setDingtalkMailAddress:(id)arg1;
+ (id)loginBindMailAddress;
+ (void)setLoginBindMailAddress:(id)arg1;
+ (void)setNoticeServiceWhenAPPUpgrade:(_Bool)arg1;
+ (_Bool)isNoticeServiceWhenAPPUpgrade;
+ (void)setLoginDingtalkMail:(_Bool)arg1;
+ (_Bool)isLoginDingtalkMail;
+ (void)setMailImportantGuideHasShow:(_Bool)arg1;
+ (_Bool)isMailImportantGuideHasShow;
+ (void)setMailAtListGuideHasShow:(_Bool)arg1;
+ (_Bool)isMailAtListGuideHasShow;
+ (void)setMailComposeSetTop:(_Bool)arg1;
+ (_Bool)isMailComposeSetTopShow;
@property(retain) DTEnterpriseCard *mainEnterpriseCard; // @synthesize mainEnterpriseCard=_mainEnterpriseCard;
@property(copy) NSArray *currentOrgnizations; // @synthesize currentOrgnizations=_currentOrgnizations;
@property(copy) NSArray *currentCards; // @synthesize currentCards=_currentCards;
@property(nonatomic) _Bool shouldAutoSaveLastUser; // @synthesize shouldAutoSaveLastUser=_shouldAutoSaveLastUser;
- (void).cxx_destruct;
- (void)checkVerifyCode:(id)arg1 smsCode:(id)arg2 bizType:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)printLogWith:(id)arg1 name:(id)arg2;
- (void)removeUserValueForKey:(id)arg1;
- (id)userValueForKey:(id)arg1;
- (void)setUserValue:(id)arg1 forKey:(id)arg2;
- (id)lastUser;
- (void)autoSaveLastUserEnable:(_Bool)arg1;
- (void)cleanLastUser;
- (void)setLastUser:(id)arg1;
- (void)currentUserProfileSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)preloadCurrentUserInfo;
- (void)saveOrgHrmInfos:(id)arg1;
- (void)saveEnterpriseCard:(id)arg1;
- (_Bool)isTeamUser;
- (_Bool)isPersonalUser;
- (_Bool)checkHaveQuitOrganizationWithOrgId:(long long)arg1;
- (id)organizationWithOrgId:(long long)arg1;
- (void)updateAladdinMainOrgId;
- (_Bool)haveSuperManagerOrgnaization;
- (id)allOrganizations;
- (id)getEnterpriseCardByOrgID:(long long)arg1;
- (id)currentEnterpriseCards:(_Bool)arg1 supportSort:(_Bool)arg2;
- (id)currentMainEnterpriseCard;
- (id)currentEnterpriseCards;
- (id)currentEnterpriseCard;
- (id)userProfile;
- (id)currentUIDMD5;
- (long long)currentUID;
- (void)becomeActive;
- (void)setNotBizSignUp:(_Bool)arg1;
- (_Bool)isNotBizSignUp;
- (_Bool)isLogin;
- (void)logoutCompletion:(CDUnknownBlockType)arg1;
- (void)logoutCompletion:(CDUnknownBlockType)arg1 accord:(_Bool)arg2 notify:(id)arg3;
- (void)changePassword:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)activeOrgCertificationWithOrgId:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)engineLoginSuccess;
- (void)handleLoginSuccess:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)loginThirdPartyWithUserID:(id)arg1 mobile:(id)arg2 smsCode:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)thirdPartyAuthWithType:(unsigned long long)arg1 context:(unsigned long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)loginWithThirdPartyAuth:(unsigned long long)arg1 context:(unsigned long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)loginWithQRCode:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)loginWithUserName:(id)arg1 password:(id)arg2 token:(id)arg3 loginType:(id)arg4 userInfo:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)loginWithUserName:(id)arg1 password:(id)arg2 loginType:(id)arg3 userInfo:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)checkIfUserNeedInitPassword:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)smsCodeVerifyWithCountryCode:(id)arg1 mobile:(id)arg2 bizType:(unsigned long long)arg3 viaType:(unsigned long long)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)sendLoginVerifyCode:(id)arg1 via:(unsigned long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)auth;
- (void)tokenInvalidNotify:(id)arg1;
- (void)dealloc;
- (void)currentEnterpriseInfoDidChange:(id)arg1;
- (void)startEngine;
- (void)checkLastLoginState;
- (id)init;
- (_Bool)hasSendDing;
- (void)setHasSendDing:(_Bool)arg1;
- (id)dingRightsCountJson;
- (void)saveDingRightsCountJson:(id)arg1;
- (id)telRightsCountJson;
- (void)saveTelRightsCountJson:(id)arg1;
- (_Bool)hasBespeakShownRedDot;
- (void)setHasBespeakShownRedDot:(_Bool)arg1;
- (long long)searchChatStartTime;
- (void)setSearchChatStartTime:(long long)arg1;
- (void)setHasCustomDingAccount:(_Bool)arg1;
- (_Bool)hasCustomDingAccount;
- (void)setSelectRoleHasShow:(_Bool)arg1;
- (_Bool)isSelectRolePopViewHasShow;

@end

