//
//  UserInfoManager.h
//  UserInfoManager
//
//  Created by 谭德鹏 on 2017/11/8.
//  Copyright © 2017年 中泰荣科. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UserInfoManager : NSObject

//用户的基本信息....
@property(nonatomic,copy)NSString *userID,*nickName,*headPic,*userName,*phone,*exclusiveCode,*birthday,*email;

@property(nonatomic,strong)NSNumber *sex;


/**
 *
 通过单例模式对工具类进行初始化
 *
 */
+ (instancetype)shareUser;

/**
 *
 通过单例模式对工具类进行初始化
 *
 */
+ (void)configInfo:(NSDictionary *)infoDic;

/**
 *
 用户退出登录的操作
 *
 */
+ (void)loginOut;

@end
