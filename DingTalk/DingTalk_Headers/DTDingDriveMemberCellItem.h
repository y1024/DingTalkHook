//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTDingDriveSelectableCellItem.h"

@class DTContact, NSArray;

@interface DTDingDriveMemberCellItem : DTDingDriveSelectableCellItem
{
    _Bool _showLockIcon;
    DTContact *_contact;
    long long _orgId;
    NSArray *_creatorIds;
}

@property(nonatomic, getter=isShowLockIcon) _Bool showLockIcon; // @synthesize showLockIcon=_showLockIcon;
@property(copy, nonatomic) NSArray *creatorIds; // @synthesize creatorIds=_creatorIds;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
@property(retain, nonatomic) DTContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (_Bool)cellCanEdit;
- (id)reuseIdentifier;
- (id)cellForItem;

@end

