//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "AMapSearchDelegate-Protocol.h"
#import "DTMapViewControllerProtocol-Protocol.h"
#import "MAMapViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AMapPOI, CLLocation, DTBizConversation, DTMapPOI, DTSearchBar, DTTableView, MAMapView, NSError, NSMutableArray, NSString, UIButton, UIImageView, UISearchDisplayController, YYThreadSafeArray;
@protocol DTLocationSearchServiceProtocol, DTMapViewControllerDelegate;

@interface DTMapViewController : DTViewController <MAMapViewDelegate, AMapSearchDelegate, UISearchDisplayDelegate, UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, DTMapViewControllerProtocol>
{
    MAMapView *_mapView;
    NSString *_locationAddress;
    NSString *_cityCode;
    AMapPOI *_selectedPOI;
    AMapPOI *_selectedKeywordPOI;
    long long _nearByPOIRequestPage;
    _Bool _nearByHasMorePOIs;
    UISearchDisplayController *_SDController;
    NSMutableArray *_keywordPOIs;
    long long _keywordPOIRequestPage;
    _Bool _keywordHasMorePOIs;
    _Bool _mapDraged;
    _Bool _needRefreshMapWithMapCenter;
    NSString *_nearbyPOIKeyword;
    DTMapPOI *_locationPOI;
    _Bool _updateLocationDenied;
    NSError *_updateLocationError;
    _Bool _needSearchShowLocationNeabyPOI;
    CLLocation *_lastReGeoLoation;
    _Bool _sendingMsg;
    _Bool _needBlockSendLocation;
    _Bool _userLocationUpdated;
    _Bool _userLocationUpdatedDelayTime;
    long long _poiSource;
    id <DTMapViewControllerDelegate> _delegate;
    long long _sendSence;
    DTBizConversation *_conversation;
    CLLocation *_showLocation;
    id <DTLocationSearchServiceProtocol> _search;
    DTSearchBar *_searchBar;
    DTTableView *_nearByPOITableView;
    UIButton *_updateUserLoactionButton;
    UIImageView *_pinImageView;
    YYThreadSafeArray *_nearByPOIs;
    NSMutableArray *_keywordsPOIs;
}

@property(nonatomic) _Bool userLocationUpdatedDelayTime; // @synthesize userLocationUpdatedDelayTime=_userLocationUpdatedDelayTime;
@property(nonatomic) _Bool userLocationUpdated; // @synthesize userLocationUpdated=_userLocationUpdated;
@property(nonatomic) _Bool needBlockSendLocation; // @synthesize needBlockSendLocation=_needBlockSendLocation;
@property(nonatomic) _Bool sendingMsg; // @synthesize sendingMsg=_sendingMsg;
@property(retain, nonatomic) NSMutableArray *keywordsPOIs; // @synthesize keywordsPOIs=_keywordsPOIs;
@property(retain, nonatomic) YYThreadSafeArray *nearByPOIs; // @synthesize nearByPOIs=_nearByPOIs;
@property(retain, nonatomic) UIImageView *pinImageView; // @synthesize pinImageView=_pinImageView;
@property(retain, nonatomic) UIButton *updateUserLoactionButton; // @synthesize updateUserLoactionButton=_updateUserLoactionButton;
@property(retain, nonatomic) DTTableView *nearByPOITableView; // @synthesize nearByPOITableView=_nearByPOITableView;
@property(retain, nonatomic) DTSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) id <DTLocationSearchServiceProtocol> search; // @synthesize search=_search;
@property(retain, nonatomic) CLLocation *showLocation; // @synthesize showLocation=_showLocation;
@property(retain, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) long long sendSence; // @synthesize sendSence=_sendSence;
@property(nonatomic) __weak id <DTMapViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long poiSource; // @synthesize poiSource=_poiSource;
- (void).cxx_destruct;
- (void)mapView:(id)arg1 mapDidMoveByUser:(_Bool)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)animatePinImageView;
- (id)generateScreenShotImageWithImage1:(id)arg1 image2:(id)arg2;
- (void)generateMapImageCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)startSearch;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onReGeocodeSearchDone:(id)arg1 response:(id)arg2;
- (void)onPOISearchDone:(id)arg1 response:(id)arg2;
- (void)updateUserLocaitonInMapView:(id)arg1;
- (void)updateUserLocaitonInMapViewIfNeed:(id)arg1;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 updatingLocation:(_Bool)arg3;
- (void)updateUserLocation:(id)arg1;
- (void)searchPOIWithKeywords:(id)arg1 city:(id)arg2;
- (void)searchPOIWithLatitude:(double)arg1 longitude:(double)arg2 keywords:(id)arg3 radius:(double)arg4;
- (void)searchUserLocationWithLatitude:(double)arg1 longitude:(double)arg2;
- (void)didMapDragEnd:(id)arg1;
- (void)showShowLocation;
- (_Bool)hasGetPOI;
- (void)rightNavigationItemClicked:(id)arg1;
- (void)leftNavigationItemClicked:(id)arg1;
- (void)loadSearchService;
- (_Bool)showForeignMapView;
- (void)loadMapView;
- (void)layoutViewComponents;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
