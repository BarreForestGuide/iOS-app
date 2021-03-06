//
//  TrailColorUtil.h
//  BarreForestGuide
//
//  Created by Craig B. Agricola on 11/23/14.
//  Copyright (c) 2014 Town of Barre. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ConfigModel.h"

@interface TrailColorUtil : NSObject

@property ConfigModel          *configModel;
@property NSMutableDictionary  *trailTypeColor;
@property NSMutableDictionary  *trailTypeWidth;
@property UIColor              *discGolfPathColor;
@property NSNumber             *discGolfPathWidth;

+ (TrailColorUtil*)getTrailColorUtil;
- (void)invalidateColorCache;

- (UIColor*)getTrailTypeColor:(int)trailTypeID;
- (CGFloat )getTrailTypeWidth:(int)trailTypeID;
- (UIColor*)getDiscGolfPathColor;
- (CGFloat )getDiscGolfPathWidth;

- (int)getTrailTypeSortOrder:(int)trailTypeId;
- (int)getTrailTypeOtherId;
- (BOOL)isTrailTypeIdSpan:(int)trailTypeId;
- (BOOL)isTrailTypeIdOther:(int)trailTypeId;
- (void)setTrailTypeIdEnable:(int)trailTypeId enable:(BOOL)enable;
- (void)toggleTrailTypeIdEnable:(int)trailTypeId;
- (NSString*)getTrailTypeRename:(int)trailTypeId;

- (int)getPoiTypeSortOrder:(int)poiTypeId;
- (void)setPoiTypeIdEnable:(int)poiTypeId enable:(BOOL)enable;
- (void)togglePoiTypeIdEnable:(int)poiTypeId;

@end

/* vim: set ai si sw=2 ts=80 ru: */
