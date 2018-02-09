//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface Order : NSObject
{
    NSString *_partner;
    NSString *_seller;
    NSString *_tradeNO;
    NSString *_productName;
    NSString *_productDescription;
    NSString *_amount;
    NSString *_notifyURL;
    NSString *_service;
    NSString *_paymentType;
    NSString *_inputCharset;
    NSString *_itBPay;
    NSString *_showUrl;
    NSString *_rsaDate;
    NSString *_appID;
    NSMutableDictionary *_extraParams;
}

@property(readonly, nonatomic) NSMutableDictionary *extraParams; // @synthesize extraParams=_extraParams;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSString *rsaDate; // @synthesize rsaDate=_rsaDate;
@property(copy, nonatomic) NSString *showUrl; // @synthesize showUrl=_showUrl;
@property(copy, nonatomic) NSString *itBPay; // @synthesize itBPay=_itBPay;
@property(copy, nonatomic) NSString *inputCharset; // @synthesize inputCharset=_inputCharset;
@property(copy, nonatomic) NSString *paymentType; // @synthesize paymentType=_paymentType;
@property(copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(copy, nonatomic) NSString *notifyURL; // @synthesize notifyURL=_notifyURL;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *productDescription; // @synthesize productDescription=_productDescription;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(copy, nonatomic) NSString *tradeNO; // @synthesize tradeNO=_tradeNO;
@property(copy, nonatomic) NSString *seller; // @synthesize seller=_seller;
@property(copy, nonatomic) NSString *partner; // @synthesize partner=_partner;
- (void).cxx_destruct;
- (id)description;

@end
