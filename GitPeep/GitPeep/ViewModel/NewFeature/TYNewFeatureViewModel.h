//
//  TYNewFeatureViewModel.h
//  GitPeep
//
//  Created by tiany on 2018/1/15.
//  Copyright © 2018年 tianyao. All rights reserved.
//

#import "TYViewModel.h"

@interface TYNewFeatureViewModel : TYViewModel

@property (nonatomic, strong) RACCommand *didScrollCommand;

@end
