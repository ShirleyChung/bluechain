//
//  ModelController.h
//  BlueChain
//
//  Created by Shirley on 2016/5/10.
//  Copyright © 2016年 Shirley. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "BluetoothLib.h"

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>
{
    BluetoothLib *m_bt;
}

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

