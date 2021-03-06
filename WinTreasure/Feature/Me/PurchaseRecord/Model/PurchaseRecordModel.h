//
//  PurchaseRecordModel.h
//  WinTreasure
//
//  Created by Apple on 16/6/27.
//  Copyright © 2016年 linitial. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PurchaseRecordModel : NSObject

@property (nonatomic, copy) NSString *productImgUrl;

@property (nonatomic, copy) NSString *productName;

@property (nonatomic, copy) NSString *purchaseTime;

/**单价
 */
@property (nonatomic, copy) NSString *productPrice;

/**数量
 */
@property (nonatomic, copy) NSString *productQuantity;

/**付款合计
 */
@property (nonatomic, copy) NSString *paidAmount;

/**购买状态 0:全部 1:待付款 2:待发货 3:待收货
 */
@property (nonatomic, assign) NSInteger purchaseStatus;

@end
