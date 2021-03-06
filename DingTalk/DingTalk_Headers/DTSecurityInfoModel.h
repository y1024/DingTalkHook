//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTAMapLocationModel, DTWuaModel, NSArray;

@interface DTSecurityInfoModel : Marshal
{
    _Bool _root;
    _Bool _simulator;
    NSArray *_riskApp;
    DTAMapLocationModel *_gpsLocInfo;
    DTAMapLocationModel *_netLocInfo;
    NSArray *_wifiList;
    DTWuaModel *_wua;
}

@property(retain, nonatomic) DTWuaModel *wua; // @synthesize wua=_wua;
@property(copy, nonatomic) NSArray *wifiList; // @synthesize wifiList=_wifiList;
@property(retain, nonatomic) DTAMapLocationModel *netLocInfo; // @synthesize netLocInfo=_netLocInfo;
@property(retain, nonatomic) DTAMapLocationModel *gpsLocInfo; // @synthesize gpsLocInfo=_gpsLocInfo;
@property(nonatomic) _Bool simulator; // @synthesize simulator=_simulator;
@property(copy, nonatomic) NSArray *riskApp; // @synthesize riskApp=_riskApp;
@property(nonatomic) _Bool root; // @synthesize root=_root;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

