//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTRpcConfigManager, NSMutableArray, NSOperationQueue, NSString, NSURL;
@protocol DTRpcInterceptor;

@interface DTRpcClient : NSObject
{
    _Bool _enableDebug;
    id <DTRpcInterceptor> _interceptor;
    NSString *_appKey;
    NSString *_authKey;
    NSString *_authCode;
    CDUnknownBlockType _myLogBlock;
    NSOperationQueue *_requestQueue;
    NSMutableArray *_lockedOperations;
    NSURL *_gatewayURL;
    DTRpcConfigManager *_configManager;
}

+ (id)RPCRequestThread;
+ (void)RPCThreadProc:(id)arg1;
+ (id)defaultClient;
@property(retain, nonatomic) DTRpcConfigManager *configManager; // @synthesize configManager=_configManager;
@property(retain, nonatomic) NSURL *gatewayURL; // @synthesize gatewayURL=_gatewayURL;
@property(retain, nonatomic) NSMutableArray *lockedOperations; // @synthesize lockedOperations=_lockedOperations;
@property(retain, nonatomic) NSOperationQueue *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(nonatomic) _Bool enableDebug; // @synthesize enableDebug=_enableDebug;
@property(copy, nonatomic) CDUnknownBlockType myLogBlock; // @synthesize myLogBlock=_myLogBlock;
@property(retain, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(retain, nonatomic) NSString *authKey; // @synthesize authKey=_authKey;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) id <DTRpcInterceptor> interceptor; // @synthesize interceptor=_interceptor;
- (void).cxx_destruct;
- (id)preferredConfig;
- (id)preferredConfig:(id)arg1;
- (void)setConfig:(id)arg1 forScope:(int)arg2;
- (id)configForScope:(int)arg1;
- (void)cancelAllOperations;
- (void)cancelAllOperationsInThread:(id)arg1;
- (id)executeOperation:(id)arg1 responseHeaderFields:(CDUnknownBlockType)arg2;
- (id)executeOperation:(id)arg1;
- (id)executeMethod:(id)arg1 params:(id)arg2;
- (id)executeMethod:(id)arg1 params:(id)arg2 requestHeaderField:(id)arg3 responseHeaderFields:(CDUnknownBlockType)arg4;
- (id)executeRpc:(id)arg1 params:(id)arg2 options:(id)arg3;
- (id)executeMethodAsync:(id)arg1 params:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
