//
//  IMJSON.h
//  FundApp
//
//  Created by huogh on 14-6-14.
//  Copyright (c) 2014年 InfoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IMJSON : NSObject

- (void)addHeaderWithKey:(NSString*)key value:(id)value;
- (void)addBodyWithKey:(NSString*)key value:(id)value;

- (NSString*)toJSONString;
@end
