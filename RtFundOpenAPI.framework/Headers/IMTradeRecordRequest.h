//
//  IMTradeRecordRequest.h
//  HuiFundApp
//
//  Created by jing on 15/11/23.
//  Copyright © 2015年 FLJR. All rights reserved.
//

#import <Foundation/Foundation.h>

// 交易记录
typedef void (^TradeRecordViewModelSuccessBlock) (id JSON);
typedef void (^TradeRecordViewModelFailureBlock) (id JSON);
typedef void (^TradeRecordModelErrorBlock) (NSError *error);

@interface IMTradeRecordRequest : NSObject

/**
 *  交易记录进行中
 *
 *  @param 交易记录进行中数据，需要传当前加载的页码
 *
 *  @param page 当前加载的页码
 */
- (void)sendTradeRecordRunningRequestWithUserid:(NSString *)userid
                      andSessionId:(NSString *)sessionid
                           andPage:(NSString *)page
                       ReturnBlock:(TradeRecordViewModelSuccessBlock)successBlock
                      FailureBlock:(TradeRecordViewModelFailureBlock)failureBlock
                        ErrorBlock:(TradeRecordModelErrorBlock)errorBlock;

/**
 *  交易记录全部
 *
 *  @param 交易记录全部数据，需要将当前加载页码传进去
 *
 *  @param page         当前加载页码
 *
 */
- (void)sendTradeRecordAllRequestWithUserid:(NSString *)userid
                      andSessionId:(NSString *)sessionid
                           andPage:(NSString *)page
                       ReturnBlock:(TradeRecordViewModelSuccessBlock)successBlock
                      FailureBlock:(TradeRecordViewModelFailureBlock)failureBlock
                        ErrorBlock:(TradeRecordModelErrorBlock)errorBlock;

/**
 *  交易记录分红记录
 *
 *  @param 交易记录分红记录， 需要讲当前加载页码传进去
 *
 *  @param page         当前加载的页码
 *
 */
- (void)sendTradeRecordBonusRequestWithUserid:(NSString *)userid
                      andSessionId:(NSString *)sessionid
                           andPage:(NSString *)page
                       ReturnBlock:(TradeRecordViewModelSuccessBlock)successBlock
                      FailureBlock:(TradeRecordViewModelFailureBlock)failureBlock
                        ErrorBlock:(TradeRecordModelErrorBlock)errorBlock;

/**
 *  交易记录现金宝
 *
 *  @param 交易记录现金宝记录，需要将当前加载的页码传进去
 *
 *  @param page         当前加载页
 *
 */
- (void)sendTradeRecordCaseTreasureRequestWithUserid:(NSString *)userid
                      andSessionId:(NSString *)sessionid
                           andPage:(NSString *)page
                       ReturnBlock:(TradeRecordViewModelSuccessBlock)successBlock
                      FailureBlock:(TradeRecordViewModelFailureBlock)failureBlock
                        ErrorBlock:(TradeRecordModelErrorBlock)errorBlock;


/**
 *  交易记录收益
 *
 *  @param 交易记录收益记录，需要将当前加载的页码传进去
 *
 *  @param page         当前加载页
 *
 */
- (void)sendTradeRecordProfitRequestWithUserid:(NSString *)userid
                      andSessionId:(NSString *)sessionid
                           andPage:(NSString *)page
                       ReturnBlock:(TradeRecordViewModelSuccessBlock)successBlock
                      FailureBlock:(TradeRecordViewModelFailureBlock)failureBlock
                        ErrorBlock:(TradeRecordModelErrorBlock)errorBlock;

/**
 *  交易详情
 *
 *  @param 交易详情，传交易编号
 *
 *  @param applyserial  交易编号
 *
 */
- (void)sendTradeRecordInfoRequestWithUserid:(NSString *)userid
                                andSessionId:(NSString *)sessionid
                              andApplyserial:(NSString *)applyserial
                                 ReturnBlock:(TradeRecordViewModelSuccessBlock)successBlock
                                FailureBlock:(TradeRecordViewModelFailureBlock)failureBlock
                                  ErrorBlock:(TradeRecordModelErrorBlock)errorBlock;


/**
 *  取消交易详情
 *
 *  @param 取消交易详情，需要传交易编号，密码，基金账号
 *
 *  @param applyserial  交易编号
 *  @param password     密码
 *  @param tradeacco    基金账号
 *  @param
 */
- (void)sendCancelTradeRequestWithUserid:(NSString *)userid
                            andSessionId:(NSString *)sessionid
                          andApplyserial:(NSString *)applyserial
                             andPassword:(NSString *)password
                            andTradeacco:(NSString *)tradeacco
                             ReturnBlock:(TradeRecordViewModelSuccessBlock)successBlock
                            FailureBlock:(TradeRecordViewModelFailureBlock)failureBlock
                              ErrorBlock:(TradeRecordModelErrorBlock)errorBlock;
@end
