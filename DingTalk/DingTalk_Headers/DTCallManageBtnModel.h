//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTCallManageAlertModel, DTCallManageJumpModel, DTCallManageReddotModel, NSString;

@interface DTCallManageBtnModel : Marshal
{
    NSString *_btnTitle;
    DTCallManageJumpModel *_jumpModel;
    DTCallManageAlertModel *_alertModel;
    DTCallManageReddotModel *_reddotModel;
}

@property(retain, nonatomic) DTCallManageReddotModel *reddotModel; // @synthesize reddotModel=_reddotModel;
@property(retain, nonatomic) DTCallManageAlertModel *alertModel; // @synthesize alertModel=_alertModel;
@property(retain, nonatomic) DTCallManageJumpModel *jumpModel; // @synthesize jumpModel=_jumpModel;
@property(copy, nonatomic) NSString *btnTitle; // @synthesize btnTitle=_btnTitle;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
