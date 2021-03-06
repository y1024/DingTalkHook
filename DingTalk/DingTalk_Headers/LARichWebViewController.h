//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "LAContainerHandler-Protocol.h"
#import "LAContainerNavigationBarDelegate-Protocol.h"
#import "LAPageSliderViewDelegate-Protocol.h"
#import "LAPluginInstanceCollectorDelegate-Protocol.h"
#import "LAWebViewContainerDelegate-Protocol.h"
#import "LAWebViewControllerProtocol-Protocol.h"
#import "LAWebViewDelegate-Protocol.h"

@class DTTitleView, LAActionQueue, LANJKWebViewProgressView, LANaviBarModel, LAPageSliderView, LAWebViewContainer, LAWebViewNavigationManager, LAWebViewSetting, NSNumber, NSString, NSURL, UILabel, UIRefreshControl;
@protocol LAContainerNavigationBarProtocol, LAWebViewControllerDelegate;

@interface LARichWebViewController : DTViewController <LAContainerNavigationBarDelegate, LAWebViewDelegate, LAPluginInstanceCollectorDelegate, LAWebViewControllerProtocol, LAPageSliderViewDelegate, LAContainerHandler, LAWebViewContainerDelegate>
{
    _Bool _isFirstPage;
    _Bool _shouldNotKeepAlive;
    _Bool _statusBarOrientationChanged;
    _Bool _showingVideo;
    NSString *_instanceId;
    NSString *_presetCorpId;
    NSNumber *_presetAppId;
    NSNumber *_presetAgentId;
    long long _containerStatus;
    long long _reactiveSource;
    LAWebViewContainer *_webContainer;
    id <LAWebViewControllerDelegate> _delegate;
    LANaviBarModel *_naviBarModel;
    LAWebViewSetting *_webSetting;
    LAActionQueue *_viewLoadedActQueue;
    LAActionQueue *_viewAppearActQueue;
    LAWebViewNavigationManager *_navigationManager;
    LAPageSliderView *_webWrapView;
    CDUnknownBlockType _webViewClosedBlock;
    CDUnknownBlockType _webViewRefreshBlock;
    NSURL *_initialURL;
    LANJKWebViewProgressView *_progressView;
    UIRefreshControl *_refreshControl;
    UILabel *_sourceLabel;
    DTTitleView *_pageTitleView;
    id <LAContainerNavigationBarProtocol> _navigationIMP;
    struct UIEdgeInsets _lastInset;
}

@property(nonatomic) _Bool showingVideo; // @synthesize showingVideo=_showingVideo;
@property(retain, nonatomic) id <LAContainerNavigationBarProtocol> navigationIMP; // @synthesize navigationIMP=_navigationIMP;
@property(nonatomic) struct UIEdgeInsets lastInset; // @synthesize lastInset=_lastInset;
@property(retain, nonatomic) DTTitleView *pageTitleView; // @synthesize pageTitleView=_pageTitleView;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) LANJKWebViewProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSURL *initialURL; // @synthesize initialURL=_initialURL;
@property(nonatomic) _Bool statusBarOrientationChanged; // @synthesize statusBarOrientationChanged=_statusBarOrientationChanged;
@property(copy, nonatomic) CDUnknownBlockType webViewRefreshBlock; // @synthesize webViewRefreshBlock=_webViewRefreshBlock;
@property(copy, nonatomic) CDUnknownBlockType webViewClosedBlock; // @synthesize webViewClosedBlock=_webViewClosedBlock;
@property(retain, nonatomic) LAPageSliderView *webWrapView; // @synthesize webWrapView=_webWrapView;
@property(retain, nonatomic) LAWebViewNavigationManager *navigationManager; // @synthesize navigationManager=_navigationManager;
@property(retain, nonatomic) LAActionQueue *viewAppearActQueue; // @synthesize viewAppearActQueue=_viewAppearActQueue;
@property(retain, nonatomic) LAActionQueue *viewLoadedActQueue; // @synthesize viewLoadedActQueue=_viewLoadedActQueue;
@property(retain, nonatomic) LAWebViewSetting *webSetting; // @synthesize webSetting=_webSetting;
@property(retain, nonatomic) LANaviBarModel *naviBarModel; // @synthesize naviBarModel=_naviBarModel;
@property(nonatomic) __weak id <LAWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) LAWebViewContainer *webContainer; // @synthesize webContainer=_webContainer;
@property(nonatomic) _Bool shouldNotKeepAlive; // @synthesize shouldNotKeepAlive=_shouldNotKeepAlive;
@property(nonatomic) long long reactiveSource; // @synthesize reactiveSource=_reactiveSource;
@property(nonatomic) long long containerStatus; // @synthesize containerStatus=_containerStatus;
@property(retain, nonatomic) NSNumber *presetAgentId; // @synthesize presetAgentId=_presetAgentId;
@property(retain, nonatomic) NSNumber *presetAppId; // @synthesize presetAppId=_presetAppId;
@property(copy, nonatomic) NSString *presetCorpId; // @synthesize presetCorpId=_presetCorpId;
@property(nonatomic) _Bool isFirstPage; // @synthesize isFirstPage=_isFirstPage;
@property(copy, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
- (void).cxx_destruct;
- (id)currentAgentId;
- (id)currentAppId;
- (id)currentCorpId;
- (void)didColseFullScreenVedioPlayer;
- (void)didOpenFullScreenVedioPlayer;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)outVedioFullScreenView:(id)arg1;
- (void)enterVedioFullScreenView:(id)arg1;
@property(readonly, nonatomic) NSURL *pageURL;
@property(readonly, nonatomic) NSURL *curRequestMainDocURL;
- (void)configWebJsBridge;
- (_Bool)isJsBridgeLoaded;
- (id)documentTitle;
- (void)reloadCurrentRequest;
- (void)loadInitialRequest;
- (void)setupWebViewBackgroudColor:(id)arg1;
- (void)containerWillBeDestroyed;
- (void)containerDidPrepareToReactive;
- (void)containerDidToKeepAlive;
- (void)containerDidEnterBackgroud;
- (void)containerDidBecomeActive;
- (id)containerContentCapture;
- (void)resetWebViewContentInsetAfterResetRotate:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)setupWebViewContentInsetAfterRotate;
- (void)retateBaseViewController:(long long)arg1 showStatusBar:(_Bool)arg2 showNavigationBar:(_Bool)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)resetViewAndNavigationBar:(CDUnknownBlockType)arg1;
- (_Bool)rotateViewAndHideNavigationBar:(long long)arg1 showStatusBar:(_Bool)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setBackForwardNavigationGesturesEnable:(_Bool)arg1;
- (void)utCtrlClicked:(id)arg1 args:(id)arg2;
- (void)containerBizReady:(id)arg1 corpId:(id)arg2 agentId:(id)arg3;
- (void)enableContainerBizReadyCheck;
- (void)setContainerPullRefreshLoadingEnable:(_Bool)arg1;
- (void)setContainerPullRefreshEnable:(_Bool)arg1 refreshBlock:(CDUnknownBlockType)arg2;
- (id)containerScrollView;
- (id)containerAgentId;
- (_Bool)containerCerifyRequestParam:(id)arg1 value:(id)arg2;
- (void)containerCorpId:(id)arg1 agentId:(id)arg2 updatedWithJsApis:(id)arg3;
- (id)containerViewAppearActQueue;
- (id)containerViewLoadedActQueue;
- (void)containerBack;
- (void)containerQuit;
- (void)containerSetupTitleView:(id)arg1;
- (id)containerTitleView;
- (_Bool)containerShowRightNavigationItem;
- (id)containerNaviComponent;
- (unsigned long long)containerSupportedInterfaceOrientations;
- (id)containerDependViewController;
- (id)containerCurrentPageURL;
- (id)containerCurrentRequestURL;
- (id)v340FixedCurRequestMainDocURL;
- (_Bool)isNonscenFragment:(id)arg1;
- (_Bool)shouldCheckWebViewPageSlide:(id)arg1;
- (void)webViewContainer:(id)arg1 unableHandleRequest:(id)arg2;
- (void)pageSliderViewDidGoback:(id)arg1;
- (void)pageSliderViewWillGoBack:(id)arg1;
- (_Bool)pageSliderViewShouldGoback:(id)arg1;
- (id)pageSliderBackMirrorView;
- (id)pageSliderContentView;
- (void)setWebWrapEnable:(_Bool)arg1;
- (void)endRefreshingActivityIndicator;
- (void)beginRefreshingActivityIndicator;
- (void)setRefreshControlEnabled:(_Bool)arg1;
- (void)handleRefresh:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)configSourceLabelText:(id)arg1;
- (void)setupSourceLabelWithTextColor:(id)arg1 font:(id)arg2;
- (void)setupWebScrollViewDelegate:(id)arg1;
- (void)navigationBarColorDidChanged:(id)arg1;
- (_Bool)isLoadingMainDocumentURL;
- (void)webViewGoBack;
- (_Bool)webViewCanGoBack;
- (void)mainDocumentRequestError:(id)arg1 error:(id)arg2;
- (void)mainDocumentRequestFinished:(id)arg1;
- (void)mainDocumentRequestStarted:(id)arg1;
- (void)initialURLRequestWillStart:(id)arg1;
- (_Bool)pluginInstance:(id)arg1 jsapiShouldCall:(id)arg2;
- (void)webView:(id)arg1 progress:(double)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)containerNavigationBar:(id)arg1 didChangeColorWithInnerEvent:(id)arg2;
- (void)resetStatausBarIfNeed;
- (void)resetNavigationBarColor;
- (void)setNavigationBarColor;
- (void)handleColorParamWithURL:(id)arg1;
- (void)initUIWebViewWrapView;
- (void)setupWebViewTitle;
- (void)initComponets;
- (void)initNavitgationComponents;
- (void)setTitle:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)addNotifyObservers;
- (void)initPrivate;
- (id)initWithInitialURL:(id)arg1 webSetting:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

