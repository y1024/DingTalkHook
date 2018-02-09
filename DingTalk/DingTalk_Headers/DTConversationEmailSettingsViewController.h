//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTBizConversation, DTTableView, NSMutableArray, NSString;

@interface DTConversationEmailSettingsViewController : DTViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_tableDataSource;
    DTTableView *_tableView;
    DTBizConversation *_conversation;
}

@property(retain, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) DTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)generateTableDataSource;
- (void)createTableView;
- (void)customizeTitle;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithConversationId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
