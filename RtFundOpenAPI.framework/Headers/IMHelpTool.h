//
//  IMHelpTool.h
//  HuiFundOpenAPI
//
//  Created by fif on 15/11/19.
//  Copyright © 2015年 fif. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>

#define IsLoginKey      @"IsLoginKey"
#define LastDoTradeTime       @"LastDoTradeTime"
#define UserIdKey       @"UserIdKey"
#define UserNameKey     @"UserNameKey"
#define UserTypeKey     @"UserTypeKey"
#define IdentityNoKey   @"IdentityNoKey"
#define IdentityTypeKey @"IdentityTypeKey"
#define RiskendureKey   @"RiskendureKey"
#define RCToken         @"RCToken"
#define LastDoTradeTime       @"LastDoTradeTime"
#define CustNo       @"CustNoKey"
#define SessionIDKey    @"SessionIDKey"
#define ErrorTime       @"ErrorTime"

@interface IMHelpTool : NSObject

// 获取客户端版本
+ (NSString*)getVersion;

// 空字符串处理
+ (NSString*)stringOfValue:(NSString*)value;

// 是否登录
+ (BOOL)isLogined;

// NSDate转NSString
+(NSString*)getStringFromDate:(NSDate*)date;

// 记录上一次dotreade的时间
+ (void)setLastDoTradeTime:(NSString *)time;

// 获取保持登录的状态
+ (NSString*)getKeepAlive;

// 获取用户id
+ (NSString*)getUserId;

// 获取用户no
+ (NSString*)getCustNo;

// md5加密
+(NSString*) md5:(NSString*)str;

+ (NSString*)getLastDoTradeTime;

// NSString转NSDate
+ (NSDate *) getDateFromString:(NSString *)str;

+ (NSDictionary *)readPlistWithFileName:(NSString*)fileName;
@end
