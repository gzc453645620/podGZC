//
//  IMTCANR0MessageCoder.m
//  INMOTION
//
//  Created by gzc on 2018/10/16.
//  Copyright © 2018年 Inmotion. All rights reserved.
//

#import "IMTCANR0MessageCoder.h"


/**
 *读取版本号：
 unsigned char ID = 1;// 要读取对象的索引
 unsigned char Data=2;// 要读取的长度

 返回的数据包中ID就是读取时设置的ID(==1),数据包含2个字节，表示版本号

 
 读取转向灵敏度
 unsigned char ID = 159;// 要读取对象的索引
 unsigned char Data=2;// 要读取的长度

 
 修改转向灵敏度
 unsigned char ID = 159;// 要写入对象的索引
 unsigned short Data=99;// 要写入的新数值

 *
 */


@implementation IMTCANR0MessageCoder





@end
