//
//  IMNetwork.h
//  FundApp
//
//  Created by huogh on 14-6-14.
//  Copyright (c) 2014年 InfoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>

@class IMJSON;
@interface IMNetwork : NSObject

+ (instancetype)manager;

- (void)requestWithURL:(NSString*)url JSON:(IMJSON*)json success:(void(^)(id responseObject))success failure:(void(^)(NSError *error))failure;

-(void)reset;

@end
