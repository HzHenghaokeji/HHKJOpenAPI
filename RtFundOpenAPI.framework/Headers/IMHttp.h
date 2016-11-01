//
//  IMHttp.h
//  HuiFundApp
//
//  Created by fif on 15/6/17.
//  Copyright (c) 2015年 FLJR. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^HttpSuccessBlock)(id JSON);
typedef void (^HttpFailureBlock) (NSError* error);

typedef void (^HttpRequestSuccessBlock)(id JSON);
typedef void (^HttpRequestFailureBlock)(NSError* error);

@protocol IMHttpDelegate <NSObject>

-(void)autoLoginSuccessOrFailed:(NSDictionary*)json;

@end

@interface IMHttp : NSObject


+(IMHttp*)sharedInstance;

// post请求
-(void)postWithPath:(NSString *)path
         headParams:(NSDictionary *)headParams
         bodyParams:(NSDictionary *)bodyParams
            success:(HttpSuccessBlock)success failure:(HttpFailureBlock)failure;

// 取消所有请求
-(void)reset;


@property(nonatomic,assign)id<IMHttpDelegate>delegate;

@end
