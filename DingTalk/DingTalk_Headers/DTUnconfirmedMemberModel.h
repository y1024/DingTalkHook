//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTUserProfileModel, NSString;

@interface DTUnconfirmedMemberModel : Marshal
{
    DTUserProfileModel *_userProfile;
    NSString *_exInfo;
}

@property(copy, nonatomic) NSString *exInfo; // @synthesize exInfo=_exInfo;
@property(retain, nonatomic) DTUserProfileModel *userProfile; // @synthesize userProfile=_userProfile;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
