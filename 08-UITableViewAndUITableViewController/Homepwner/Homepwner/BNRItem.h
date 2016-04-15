//
//  BNRItem.h
//  RandomItems
//
//  Created by 焦相如 on 3/23/16.
//  Copyright © 2016 jaxer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRItem : NSObject
{
    NSString *_itemName;
    NSString *_serialNumber;
    int _valueInDollars;
    NSDate *_dateCreated; //只读，没有 setter 方法
}

+ (instancetype)randomItem;

- (instancetype)initWithItemName:(NSString *)name
                  valueInDollars:(int)value
                    serialNumber:(NSString *)sNumber;

- (instancetype)initWithItemName:(NSString *)name;

// 下面这些存取方法用属性声明时可以不写。
- (void)setItemName:(NSString *)name;
- (NSString *)itemName;

- (void)setSerialNumber:(NSString *)number;
- (NSString *)serialNumber;

- (void)setValueInDollars:(int)dallors;
- (int)valueInDollars;

- (NSDate *)dateCreated;

@end