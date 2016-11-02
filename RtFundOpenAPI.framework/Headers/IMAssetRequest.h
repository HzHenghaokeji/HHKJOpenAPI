//
//  IMAssetRequest.h
//  HuiFundApp
//
//  Created by jing on 15/11/23.
//  Copyright © 2015年 FLJR. All rights reserved.
//

#import <Foundation/Foundation.h>

// 资产
typedef void (^AssetViewModelSuccessBlock) (id JSON);
typedef void (^AssetViewModelFailureBlock) (id JSON);
typedef void (^AssetViewModelErrorBlock) (NSError *error);


@interface IMAssetRequest : NSObject


/**
 *  资产初始化
 *
 *  @param 资产首页数据请求
 */
- (void)sendAssetRequestWithUserid:(NSString *)userid
                        andSessionId:(NSString *)sessionid
                       ReturnBlock:(AssetViewModelSuccessBlock)successBlock
                      FailureBlock:(AssetViewModelFailureBlock)failureBlock
                        ErrorBlock:(AssetViewModelErrorBlock)errorBlock;

/**
 *  资产基金
 *
 *  @param 资产里的基金页面数据请求
 */
- (void)sendFundRequestWithUserid:(NSString *)userid
                     andSessionId:(NSString *)sessionid
                      ReturnBlock:(AssetViewModelSuccessBlock)successBlock
                     FailureBlock:(AssetViewModelFailureBlock)failureBlock
                       ErrorBlock:(AssetViewModelErrorBlock)errorBlock;

/**
 *  资产现金宝
 *
 *  @param 资产里的现金宝请求
 */
- (void)sendCaseTreasureRequestWithUserid:(NSString *)userid
                     andSessionId:(NSString *)sessionid
                      ReturnBlock:(AssetViewModelSuccessBlock)successBlock
                     FailureBlock:(AssetViewModelFailureBlock)failureBlock
                       ErrorBlock:(AssetViewModelErrorBlock)errorBlock;

/**
 *  资产单基金明细
 *
 *  @param 单基金明细数据请求，需要传fundcode进去
 *
 *  @param fundcode     基金代码
 *  @param page         当前加载页码

 */
- (void)sendSingleFundInfoRequestWithUserid:(NSString *)userid
                             andSessionId:(NSString *)sessionid
                                andFundCode:(NSString *)fundcode
                                    andPage:(NSString *)page
                              ReturnBlock:(AssetViewModelSuccessBlock)successBlock
                             FailureBlock:(AssetViewModelFailureBlock)failureBlock
                               ErrorBlock:(AssetViewModelErrorBlock)errorBlock;

/**
 *  到期日
 *
 *  @param 理财型基金到期日 需要传赎回还是转换
 *
 *  @param redeemOrConvert 赎回还是转换
 *
 */

- (void)sendEndDayRequestWithUserid:(NSString *)userid
                       andSessionId:(NSString *)sessionid
                 andRedeemOrConvert:(NSString *)redeemOrConvert
                        ReturnBlock:(AssetViewModelSuccessBlock)successBlock
                       FailureBlock:(AssetViewModelFailureBlock)failureBlock
                         ErrorBlock:(AssetViewModelErrorBlock)errorBlock;
@end
