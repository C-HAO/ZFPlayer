//
//  ZFPlayerModel.m
// Copyright (c) 2016年 任子丰 ( http://github.com/renzifeng )
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import "ZFPlayerModel.h"
#import "ZFPlayer.h"


@implementation ZFPlayerModel

- (UIImage *)placeholderImage {
    if (!_placeholderImage) {
        _placeholderImage = ZFPlayerImage(@"ZFPlayer_loading_bgView");
    }
    return _placeholderImage;
}

- (instancetype)init
{
    self = [super init];
    if (self) {
        self.playRate = @[ @"0.8X", @"1.0X", @"1.25X", @"1.5X", @"1.75X", @"2.0X" ];
        
        NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
        if (![defaults objectForKey:@"ZFPlayer_RATE"]) {
            [defaults setInteger:1 forKey:@"ZFPlayer_RATE"];
        }
        
        NSInteger rate = [defaults integerForKey:@"ZFPlayer_RATE"];
        self.rateBlock = rate;
    }
    return self;
}

- (void)setRateBlock:(NSInteger)rateBlock
{
    _rateBlock = rateBlock;
    
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    [defaults setInteger:rateBlock forKey:@"ZFPlayer_RATE"];
    [defaults synchronize];
}

@end
