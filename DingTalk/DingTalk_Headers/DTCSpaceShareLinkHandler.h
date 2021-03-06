//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MFMessageComposeViewControllerDelegate-Protocol.h"

@class DTBizConversation, DTViewController, NSString, UTShareContent;

@interface DTCSpaceShareLinkHandler : NSObject <MFMessageComposeViewControllerDelegate>
{
    DTViewController *_baseVC;
    UTShareContent *_shareContent;
    DTBizConversation *_conversation;
}

@property(retain, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) UTShareContent *shareContent; // @synthesize shareContent=_shareContent;
@property(nonatomic) __weak DTViewController *baseVC; // @synthesize baseVC=_baseVC;
- (void).cxx_destruct;
- (void)statisticsEventWithArg:(id)arg1;
- (void)showMessageViewWithReceivers:(id)arg1 body:(id)arg2;
- (void)shareToDingTalk;
- (void)shareToSMSWithShareContent:(id)arg1;
- (id)shareData;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)handleShareLinkEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

