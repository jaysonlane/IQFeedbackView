//
//  IQFeedbackView.h
//  IQPhotoEditor
//
//  Created by Iftekhar on 06/10/13.
//  Copyright (c) 2013 Canopus. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^IQFeedbackCompletion)(BOOL isCancel, NSString* message, UIImage* image);

@interface IQFeedbackView : UIView

@property(nonatomic, strong) NSString* title;
@property(nonatomic, strong) NSString* message;
@property(nonatomic, strong) UIImage* image;

@property(nonatomic, assign) BOOL canAddImage;							//Default YES.
@property(nonatomic, assign) BOOL canEditText;							//Default YES.

- (id)initWithTitle:(NSString *)title message:(NSString *)message image:(UIImage*)image cancelButtonTitle:(NSString *)cancelButtonTitle doneButtonTitle:(NSString *)doneButtonTitle;

-(void)showInViewController:(UIViewController*)controller completionHandler:(IQFeedbackCompletion)completionHandler;

-(void)dismiss;

@end
