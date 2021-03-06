//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

#import "DTLoadMoreDelegate-Protocol.h"

@class DTAdvancedEmptyResultView, DTChatAtMeNoticeListener, DTLoadMoreController, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface DTChatAtMeMessageListController : DTTableViewController <DTLoadMoreDelegate>
{
    DTChatAtMeNoticeListener *_listener;
    NSMutableDictionary *_messageIndexTable;
    NSMutableDictionary *_nameTable;
    NSDictionary *_messageTable;
    NSArray *_latestMessageRowItems;
    NSArray *_recentlyMessageRowItems;
    DTAdvancedEmptyResultView *_emptyView;
    DTLoadMoreController *_loadMoreController;
    NSString *_openedCid;
    long long _currentCursor;
    long long _nextCursor;
    long long _pageSize;
    _Bool _loading;
    _Bool _failsLoadData;
    _Bool _forceProcessIncomingAtMessage;
}

- (void).cxx_destruct;
- (void)tableViewDidScroll:(id)arg1;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (void)removeMessages:(id)arg1 inList:(id)arg2 rows:(id)arg3 section:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handleDeleteMessages:(id)arg1;
- (void)didReceiveDeleteMessageNotice:(id)arg1;
- (void)didReceiveMessageNotice:(id)arg1;
- (void)notifyDidFinishLoad;
- (void)disableLoadMoreController;
- (void)setupLoadMoreController;
- (void)openUserProfileWithUid:(long long)arg1;
- (void)openConversation:(id)arg1 message:(id)arg2;
- (void)didTapOnCellWithMessage:(id)arg1;
- (id)cellItemWithMessage:(id)arg1;
- (id)buildCellItemsFromMessages:(id)arg1;
- (void)updateMessageReadStatusWithCid:(id)arg1;
- (void)loadConversationWithCids:(id)arg1;
- (void)updateCellItemWithCid:(id)arg1 title:(id)arg2;
- (void)didLoadConversation:(id)arg1;
- (void)updateEmptyViewIfNeeds;
- (void)updateAtMeWithLastestCursor:(long long)arg1;
- (void)fetchNextPage;
- (void)loadMessagesWithCursor:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startListenIncomingAtMeMessages;
- (void)didReceiveLatestMessages:(id)arg1 reloadData:(_Bool)arg2 shouldUpdateCursor:(_Bool)arg3;
- (void)didReceiveRecentlyMessages:(id)arg1 reloadData:(_Bool)arg2;
- (void)handleIncomingMessages:(id)arg1;
- (void)updateAtMeMessageCursorByMessage:(id)arg1;
- (void)didFinishFetchMessages:(id)arg1 succeed:(_Bool)arg2;
- (void)fetchAtMeMessages;
- (_Bool)hasAtMeMessages;
- (void)reloadTableDataSource;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithListener:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

