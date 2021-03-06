//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

#import "DTTableViewHandlerDelegate-Protocol.h"

@class DTCellItem, DTTableViewHandler, NSString;

@interface DTCalendarSettingViewController : DTTableViewController <DTTableViewHandlerDelegate>
{
    DTTableViewHandler *_tableViewHandler;
    DTCellItem *_malCalAlertItem;
    DTCellItem *_shareCalItem;
}

@property(retain, nonatomic) DTCellItem *shareCalItem; // @synthesize shareCalItem=_shareCalItem;
@property(retain, nonatomic) DTCellItem *malCalAlertItem; // @synthesize malCalAlertItem=_malCalAlertItem;
@property(retain, nonatomic) DTTableViewHandler *tableViewHandler; // @synthesize tableViewHandler=_tableViewHandler;
- (void).cxx_destruct;
- (void)calendarSettingChanged;
- (void)tidyDataSource;
- (void)cloudSettingChanged:(id)arg1;
- (void)addObservers;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

