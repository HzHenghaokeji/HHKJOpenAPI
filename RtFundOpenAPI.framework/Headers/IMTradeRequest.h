//
//  IMTradeRequest.h
//  HuiFundApp
//
//  Created by fif on 15/10/19.
//  Copyright (c) 2015年 FLJR. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark -支付方式
typedef enum {
    PayWayBank,// 银行卡支付
    PayWayMoneyFund,// 现金宝支付
}PayWay;// 支付方式

#pragma mark -取现方式
typedef enum {
    CashWayFast,// 快速取现
    CashWayNormal,// 正常取现
}CashWay;// 取现方式

#pragma mark -修改分红方式
typedef enum {
    DividendWayCash,// 现金分红
    DividendWayInvestment,// 红利再投
}DividendWay;// 取现方式

#pragma mark -默认赎回方式
typedef enum {
    DefaultRedeemWayBank,// 默认赎回到银行卡
    DefaultRedeemWayFund,// 默认赎回到现金宝
}DefaultRedeemWay;// 赎回方式

typedef void (^BuyViewModelSuccessBlock) (id JSON);
typedef void (^BuyViewModelFailureBlock) (id JSON);
typedef void (^BuyViewModelErrorBlock) (NSError* error);


typedef void (^QuaryApplyserialSuccessBlock) (NSString* kkstate);
typedef void (^QuaryApplyserialFailureBlock) (id JSON);
typedef void (^QuaryApplyserialErrorBlock) (NSError* error);



@interface IMTradeRequest : NSObject

// 交易工具类初始化
-(id)initWithFundcode:(NSString*)fundcode;



/*-------------------------登录---------------------------*/
/**
 *  登录
 *
 *  @param userid       userid
 *  @param password     密码
 *  @param successBlock 成功回调
 *  @param failureBlock 失败回调
 *  @param errorBlock   网络失败
 */
+(void)sendLoginRequestWithUserid:(NSString*)userid
                         Password:(NSString*)password
                      ReturnBlock:(BuyViewModelSuccessBlock) successBlock
                     FailureBlock:(BuyViewModelFailureBlock) failureBlock
                       ErrorBlock:(BuyViewModelErrorBlock) errorBlock;




/*----------------------认购、申购部分----------------------*/

/**
 *  购买初始化
 *
 *  @param userid       userid
 *  @param sessionid    sessionid
 *  @param successBlock 成功回调
 *  @param failureBlock 失败回调
 *  @param errorBlock   网络失败
 */
-(void)sendBuyInitWithUserid:(NSString*)userid
                   Sessionid:(NSString*)sessionid
                 ReturnBlock:(BuyViewModelSuccessBlock) successBlock
                FailureBlock:(BuyViewModelFailureBlock) failureBlock
                  ErrorBlock:(BuyViewModelErrorBlock) errorBlock;


/**
 *  正式购买
 *
 *  @param userid       userid
 *  @param sessionid    sessionid
 *  @param password     密码
 *  @param paymentWay   支付方式
 *  @param parPara      银行卡或者现金宝入参
 *  @param applysum     购买金额
 *  @param successBlock 成功回调
 *  @param failureBlock 失败回调
 *  @param errorBlock   网络失败
 */
-(void)sendBuyRequestWithUserid:(NSString*)userid
                      Sessionid:(NSString*)sessionid
                       Password:(NSString*)password
                     paymentWay:(PayWay)paymentWay
                selectedPayPara:(NSDictionary*)parPara
                       applysum:(NSString*)applysum
                    ReturnBlock:(BuyViewModelSuccessBlock)successBlock
                   FailureBlock:(BuyViewModelFailureBlock)failureBlock
                     ErrorBlock:(BuyViewModelErrorBlock)errorBlock;


/**
 *  查询交易费率
 *
 *  @param buyNum       购买金额
 *  @param userid       userid
 *  @param sessionid    sessionid
 *  @param successBlock 成功回调
 *  @param failureBlock 失败回调
 *  @param errorBlock   网络失败
 */
-(void)requestForDiscountRate:(NSString*)buyNum
                       Userid:(NSString*)userid
                    Sessionid:(NSString*)sessionid
                  ReturnBlock:(BuyViewModelSuccessBlock)successBlock
                 FailureBlock:(BuyViewModelFailureBlock)failureBlock
                   ErrorBlock:(BuyViewModelErrorBlock)errorBlock;

/**
 *  查询交易记录
 *
 *  @param applyserial  交易记录申请编号
 *  @param userid       userid
 *  @param sessionid    sessionid
 *  @param successBlock 成功回调
 *  @param failureBlock 失败回调
 *  @param errorBlock   网络失败
 */
-(void)requestForApplyserial:(NSString*)applyserial
                      Userid:(NSString*)userid
                   Sessionid:(NSString*)sessionid
                 ReturnBlock:(QuaryApplyserialSuccessBlock)successBlock
                FailureBlock:(QuaryApplyserialFailureBlock)failureBlock
                  ErrorBlock:(QuaryApplyserialErrorBlock)errorBlock;



/*----------------------取现----------------------*/
/**
 *  取现初始化
 *
 *  @param userid       userid
 *  @param sessionid    sessionid
 *  @param successBlock 成功回调
 *  @param failureBlock 失败回调
 *  @param errorBlock   网络失败
 */
-(void)sendCashInitWithUserid:(NSString*)userid
                    Sessionid:(NSString*)sessionid
                  ReturnBlock:(BuyViewModelSuccessBlock) successBlock
                 FailureBlock:(BuyViewModelFailureBlock) failureBlock
                   ErrorBlock:(BuyViewModelErrorBlock) errorBlock;


/**
 *  正式取现
 *
 *  @param userid       userid
 *  @param sessionid    sessionid
 *  @param password     密码
 *  @param cashWay      取现方式
 *  @param applysum     取现金额
 *  @param successBlock 成功回调
 *  @param failureBlock 失败回调
 *  @param errorBlock   网络失败
 */
-(void)sendCashRequestWithUserid:(NSString*)userid
                       Sessionid:(NSString*)sessionid
                        Password:(NSString*)password
                         cashWay:(CashWay)cashWay  
                        applysum:(NSString*)applysum
                     ReturnBlock:(BuyViewModelSuccessBlock)successBlock
                    FailureBlock:(BuyViewModelFailureBlock)failureBlock
                      ErrorBlock:(BuyViewModelErrorBlock)errorBlock;


/*----------------------赎回----------------------*/
/**
 *  赎回初始化
 *
 *  @param userid       userid
 *  @param sessionid    sessionid
 *  @param successBlock 成功回调
 *  @param failureBlock 失败回调
 *  @param errorBlock   网络失败
 */
-(void)sendRedeemInitWithUserid:(NSString*)userid
                      Sessionid:(NSString*)sessionid
                    ReturnBlock:(BuyViewModelSuccessBlock) successBlock
                   FailureBlock:(BuyViewModelFailureBlock) failureBlock
                     ErrorBlock:(BuyViewModelErrorBlock) errorBlock;


/**
 *  正式赎回
 *
 *  @param userid       userid
 *  @param sessionid    sessionid
 *  @param password     密码
 *  @param paymentWay   赎回方式
 *  @param parPara      赎回参数
 *  @param applysum     赎回份额
 *  @param successBlock 成功回调
 *  @param failureBlock 失败回调
 *  @param errorBlock   网络失败
 */
-(void)sendRedeemRequestWithUserid:(NSString*)userid
                         Sessionid:(NSString*)sessionid
                          Password:(NSString*)password
                        paymentWay:(PayWay)paymentWay
                   selectedPayPara:(NSDictionary*)parPara
                          applysum:(NSString*)applysum
                       ReturnBlock:(BuyViewModelSuccessBlock)successBlock
                      FailureBlock:(BuyViewModelFailureBlock)failureBlock
                        ErrorBlock:(BuyViewModelErrorBlock)errorBlock;



/*----------------------转换----------------------*/
/**
 *  转换初始化
 *
 *  @param userid       userid
 *  @param sessionid    sessionid
 *  @param successBlock 成功回调
 *  @param failureBlock 失败回调
 *  @param errorBlock   网络失败
 */
-(void)sendConvertInitWithUserid:(NSString*)userid
                       Sessionid:(NSString*)sessionid
                     ReturnBlock:(BuyViewModelSuccessBlock) successBlock
                    FailureBlock:(BuyViewModelFailureBlock) failureBlock
                      ErrorBlock:(BuyViewModelErrorBlock) errorBlock;


/**
 *  正式转换
 *
 *  @param userid       userid
 *  @param sessionid    sessionid
 *  @param password     密码
 *  @param applysum     转换份额
 *  @param parPara      转换参数
 *  @param successBlock 成功回调
 *  @param failureBlock 失败回调
 *  @param errorBlock   网络失败
 */
-(void)sendConvertRequestWithUserid:(NSString*)userid
                          Sessionid:(NSString*)sessionid
                           Password:(NSString*)password
                           applysum:(NSString*)applysum
                    selectedPayPara:(NSDictionary*)parPara
                        ReturnBlock:(BuyViewModelSuccessBlock)successBlock
                       FailureBlock:(BuyViewModelFailureBlock)failureBlock
                         ErrorBlock:(BuyViewModelErrorBlock)errorBlock;



/*----------------------修改分红方式----------------------*/
/**
 *  修改分红方式始化
 *
 *  @param userid       userid
 *  @param sessionid    sessionid
 *  @param successBlock 成功回调
 *  @param failureBlock 失败回调
 *  @param errorBlock   网络失败
 */
-(void)sendDividendInitWithUserid:(NSString*)userid
                       Sessionid:(NSString*)sessionid
                     ReturnBlock:(BuyViewModelSuccessBlock) successBlock
                    FailureBlock:(BuyViewModelFailureBlock) failureBlock
                      ErrorBlock:(BuyViewModelErrorBlock) errorBlock;

/**
 *  正式修改
 *
 *  @param userid       userid
 *  @param sessionid    sessionid
 *  @param password     密码
 *  @param dividendWay  分红方式
 *  @param successBlock 成功回调
 *  @param failureBlock 失败回调
 *  @param errorBlock   网络失败
 */
-(void)sendDividendRequestWithUserid:(NSString*)userid
                           Sessionid:(NSString*)sessionid
                            Password:(NSString*)password
                         dividendWay:(DividendWay)dividendWay
                         ReturnBlock:(BuyViewModelSuccessBlock)successBlock
                        FailureBlock:(BuyViewModelFailureBlock)failureBlock
                          ErrorBlock:(BuyViewModelErrorBlock)errorBlock;


/**
 *  获取现金宝列表
 *
 *  @param userid       userid
 *  @param sessionid    sessionid
 *  @param successBlock 成功回调
 *  @param failureBlock 失败回调
 *  @param errorBlock   网络失败
 */
-(void)getMoneyFundListWithUserid:(NSString*)userid
                        Sessionid:(NSString*)sessionid
                      ReturnBlock:(BuyViewModelSuccessBlock)successBlock
                     FailureBlock:(BuyViewModelFailureBlock)failureBlock
                       ErrorBlock:(BuyViewModelErrorBlock)errorBlock;
/**
 *  获取全部现金宝列表
 *
 *  @param userid       userid
 *  @param sessionid    sessionid
 *  @param successBlock 成功回调
 *  @param failureBlock 失败回调
 *  @param errorBlock   网络失败
 */
-(void)getAllMoneyFundListWithUserid:(NSString*)userid
                           Sessionid:(NSString*)sessionid
                                page:(NSString*)page
                            pageSize:(NSString*)pageSize
                         ReturnBlock:(BuyViewModelSuccessBlock)successBlock
                        FailureBlock:(BuyViewModelFailureBlock)failureBlock
                          ErrorBlock:(BuyViewModelErrorBlock)errorBlock;



/**
 *  设置默认赎回方式
 *
 *  @param userid       userid
 *  @param sessionid    sessionid
*  @param redeemWay    默认赎回方式
 *  @param successBlock 成功回调
 *  @param failureBlock 失败回调
 *  @param errorBlock   网络失败
 */
+(void)setDefaultRedeemFundWithUserid:(NSString*)userid
                            Sessionid:(NSString*)sessionid
                            redeemWay:(DefaultRedeemWay)redeemWay
                          ReturnBlock:(BuyViewModelSuccessBlock)successBlock
                         FailureBlock:(BuyViewModelFailureBlock)failureBlock
                           ErrorBlock:(BuyViewModelErrorBlock)errorBlock;






@end
