//
//  ConfigModel.h
//  BarreForestGuide
//
//  Created by Craig B. Agricola on 11/17/14.
//  Copyright (c) 2014 Town of Barre. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GoogleMaps/GoogleMaps.h>

@interface ConfigModel : NSObject <NSCoding>

typedef enum { summer_map_season, winter_map_season, auto_map_season } map_season_t;

@property BOOL                  mapTracksGPS;
@property GMSMapViewType        mapType;
@property map_season_t          mapSeason;
@property BOOL                  sharingEnabled;
@property NSMutableDictionary  *trailTypeEnabled;
@property NSMutableDictionary  *poiTypeEnabled;
@property BOOL                  discGolfEnabled;
@property BOOL                  discGolfIconsEnabled;
@property NSString             *emailAddress;

+ (ConfigModel*)getConfigModel;
- (id) initFromDefaults;
- (void) saveToDefaults;

- (BOOL) isSummerMapSeason;

- (void) updateEmailAddress:(NSString*)address;

@end

/* vim: set ai si sw=2 ts=80 ru: */
