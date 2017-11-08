/***************示例使用********************/

//1.登录成功或获取到用户的信息后，将获取的数据解析成字典类型
//在这因为没有相应的网络操作接口，就直接在构造一个字典类型的用户信息数据(字段必须要相对应)
NSDictionary *infoDic = @{@"userName":@"猫蛋",@"userID":@"akjhfakhewawehfakehffcnak",@"nickName":@"笑傲江湖",@"headPic":@"http://www.baidu.com/pic",@"phone":@"18837879087",@"exclusiveCode":@"EGD56",@"birthday":@"1992-11-21",@"email":@"wangyitdp@163.com",@"sex":@1};

//2.通过UserInfoManager的configInfo：接口进行信息的配置
[UserInfoManager configInfo:infoDic];

//3.通过用户管理工具类使用用户信息；例如：通过判断userID是否有值，判断用户是否为登录状态
if ([[UserInfoManager shareUser] userID]) {

NSLog(@"用户处于登录状态--用户的真实姓名为：%@",[[UserInfoManager shareUser] userName]);

}else{

NSLog(@"用户处于非登录状态，进行非登录状态的处理");
}

//4.对用户的信息进行更新(适应场景：用户修改了昵称或者头像。。。)
NSLog(@"没更新昵称前：%@",[[UserInfoManager shareUser]userName]);

//对昵称属性进行更新
[[UserInfoManager shareUser]setUserName:@"狗蛋"];

NSLog(@"昵称更新之后：%@",[[UserInfoManager shareUser]userName]);

//5.退出登录
[UserInfoManager loginOut];
