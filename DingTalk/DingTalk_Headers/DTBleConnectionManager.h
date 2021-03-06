//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"

@class CBCentralManager, LWPQueue, NSMutableArray, NSString;

@interface DTBleConnectionManager : NSObject <CBCentralManagerDelegate>
{
    CBCentralManager *_centralManager;
    NSMutableArray *_disconnectingConnList;
    NSMutableArray *_idleConnList;
    NSMutableArray *_workingConnList;
    long long _lastState;
    LWPQueue *_bleWorkQueue;
}

+ (id)defaultManager;
@property(retain, nonatomic) LWPQueue *bleWorkQueue; // @synthesize bleWorkQueue=_bleWorkQueue;
@property(nonatomic) long long lastState; // @synthesize lastState=_lastState;
@property(retain, nonatomic) NSMutableArray *workingConnList; // @synthesize workingConnList=_workingConnList;
@property(retain, nonatomic) NSMutableArray *idleConnList; // @synthesize idleConnList=_idleConnList;
@property(retain, nonatomic) NSMutableArray *disconnectingConnList; // @synthesize disconnectingConnList=_disconnectingConnList;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
- (void).cxx_destruct;
- (void)disconnectConn:(id)arg1;
- (void)addConnection:(id)arg1;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)_didDiscoverPeripheral:(id)arg1;
- (id)idleConnForIdentifier:(id)arg1;
- (id)workingConnForIdentifier:(id)arg1;
- (void)_scan;
- (void)_stopScan;
- (void)checkIfNeedStop;
- (void)stop;
- (void)tryRetrive;
- (void)_run;
- (_Bool)isBleConnManagerEnabled;
- (id)identifiersForConnList:(id)arg1;
- (id)scanIdentifiers;
- (_Bool)isStarted;
- (void)start;
- (void)initManager;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

