#import "TransitionOptions.h"
#import <Foundation/Foundation.h>

@interface RNNAnimationsTransitionDelegate
    : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>

@property(nonatomic, strong) TransitionOptions *transitionOptions;
@property(nonatomic) BOOL isDismiss;

- (instancetype)initWithScreenTransition:(TransitionOptions *)transitionOptions
                               isDismiss:(BOOL)isDismiss;

@end
