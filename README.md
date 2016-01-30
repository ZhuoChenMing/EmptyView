# EmptyView

网络出错页或者空白页

1 导入头文件UIView+Empty.h

2 试用 文件用类目写成，给UIView扩展方法，直接调用
- (void)showWithImageName:(NSString *)imageName
                    title:(NSString *)title
              detailTitle:(NSString *)detailTitle
              buttonTitle:(NSString *)buttonTitle
                  refresh:(RefreshBlock)block;方法
                  
3 移除 
- (void)removeEmptyView;
