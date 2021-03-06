//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTCustomGroupActionHandler, DTCustomGroupChatListDataLoader, DTSingleLineShowingCellItem, NSArray, UILabel, UIView, WKBizConversationGroup;

@interface DTCustomGroupChatListController : DTTableViewController
{
    WKBizConversationGroup *_group;
    NSArray *_chatList;
    DTSingleLineShowingCellItem *_createGroupItem;
    UIView *_sectionView;
    UILabel *_sectionLabel;
    DTCustomGroupChatListDataLoader *_dataLoader;
    DTCustomGroupActionHandler *_groupActionHandler;
}

+ (void)showWithController:(id)arg1 group:(id)arg2;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)disband;
- (void)showMoreAction:(id)arg1;
- (void)didiFinishUpdateWithGroup:(id)arg1;
- (void)edit;
- (id)cellItemWithTitle:(id)arg1 comment:(id)arg2 didSelectBlock:(CDUnknownBlockType)arg3;
- (id)groupInfoSectionItem;
- (void)fetchGroupInfo;
- (id)tableSectionView;
- (void)addConversations;
- (id)createGroupRowItem;
- (void)didMoveConversation:(id)arg1 toGroupId:(long long)arg2;
- (void)moveConversationWithCell:(id)arg1;
- (void)didSelectItem:(id)arg1 withCell:(id)arg2;
- (id)cellItemWithConversation:(id)arg1;
- (id)sectionWithChatList:(id)arg1;
- (void)setupTableDataSource;
- (void)setChatList:(id)arg1;
- (id)groupActionHandler;
- (void)handleNewIncomingConversationList:(id)arg1;
- (void)appendConversations:(id)arg1;
- (void)updateDataListWithRowItems:(id)arg1;
- (void)setupGroupChatListContext;
- (void)viewDidLoad;
- (id)initWithConversationGroup:(id)arg1;

@end

