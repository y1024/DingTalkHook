//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTOrganizationServiceProtocol-Protocol.h"

@class NSString;

@interface DTOrganizationServiceImpl : NSObject <DTOrganizationServiceProtocol>
{
}

+ (id)generateEmptyOrganization;
- (_Bool)searchActivityEnableForMainOrg;
- (id)createOrganizationManagerByOrg:(long long)arg1;
- (id)organizationByOrgId:(long long)arg1;
- (id)currentMainEnterpriseCard;
- (id)allOrganizations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
