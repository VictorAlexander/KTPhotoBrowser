//
//  KTPhotoView.h
//  Sample
//
//  Created by Kirby Turner on 2/24/10.
//  Copyright 2010 White Peak Software Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KTPhotoScrollViewController;


@interface KTPhotoView : UIScrollView <UIScrollViewDelegate>
{
   UIImageView *imageView_;
   KTPhotoScrollViewController *scroller_;
}

@property (nonatomic, retain) KTPhotoScrollViewController *scroller;

- (void)setImage:(UIImage *)newImage;
- (void)turnOffZoom;

@end
