//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class DTBizConversation;

@interface DTBossChatTipsViewController : DTViewController
{
    DTBizConversation *_conversation;
}

@property(retain, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (void)gotoBossChat:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithConversationId:(id)arg1;

@end

