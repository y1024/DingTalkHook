//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class DTContentBoardView, DTExternalOrgContactDetailsViewController, DTExternalOrgContactsViewController, NSString;

@interface DTExternalOrgSearchDetailViewController : DTViewController
{
    DTContentBoardView *_switchBtn;
    long long _orgId;
    NSString *_extOrgName;
    DTExternalOrgContactsViewController *_orgContactsVC;
    DTExternalOrgContactDetailsViewController *_orgContactsDetailVC;
}

@property(retain, nonatomic) DTExternalOrgContactDetailsViewController *orgContactsDetailVC; // @synthesize orgContactsDetailVC=_orgContactsDetailVC;
@property(retain, nonatomic) DTExternalOrgContactsViewController *orgContactsVC; // @synthesize orgContactsVC=_orgContactsVC;
@property(copy, nonatomic) NSString *extOrgName; // @synthesize extOrgName=_extOrgName;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
@property(retain, nonatomic) DTContentBoardView *switchBtn; // @synthesize switchBtn=_switchBtn;
- (void).cxx_destruct;
- (void)loadUI;
- (void)viewDidLoad;
- (id)initWithOrgId:(long long)arg1 externalOrgName:(id)arg2;

@end

