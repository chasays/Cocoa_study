//
//  CheckHwyX15Function.h
//  qt_simulator
//
//  Created by QTeam on 3/23/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "testItemParse.h"
#import "scriptParse.h"

#import <als_frame/ALS_Sequencer_API.h>

@interface TestItemParse(ALSFunction)

//@property (retain) ALS_Sequencer_API	*sequencer; 

+(void)ALSParser:(NSDictionary*)dictKeyDefined;
+(void)ALSCsvFileDataParser:(NSDictionary*)dictKeyDefined;
+(void)ReadALSCsvFileData:(NSDictionary*)dictKeyDefined;
+(void)ALSCloseOpenAllPort:(NSDictionary*)dictKeyDefined;
+(void)ALSDataRatioParser:(NSDictionary*)dictKeyDefined;
+(void)ALSDataLuxParser:(NSDictionary*)dictKeyDefined;
/*SCRID-7:Add FixtureNuber Parser and CsvFileDataParser.*/
/*Joko Modify,2010-10-21*/
+(void)CsvFileDataParser:(NSDictionary*)dictKeyDefined;
+(void)FixtureNumber:(NSDictionary*)dictKeyDefined;
/*SCRID-7:Modify end*/

+(id) initALS;
+(void) deallocALS;
+(void) RunSOP;
+(void) Abort;
//-(void) RunCal;
+(NSString *)getNowTime;

@end
