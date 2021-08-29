//
//  CategoryPickerViewController.h
//  MEGA-Test
//
//  Created by Liguo Jiao on 7/05/18.
//  Copyright © 2018 Liguo Jiao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseViewController.h"
#import "Category.h"

typedef void(^CategorySelectedCallback)(Category *selectedCategory);

@interface CategoryPickerViewController : BaseViewController
@property (nonatomic, copy) CategorySelectedCallback callback;
@end
