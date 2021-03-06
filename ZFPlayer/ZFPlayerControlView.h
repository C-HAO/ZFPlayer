//
//  ZFPlayerControlView.h
//
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

#import <UIKit/UIKit.h>
#import "ASValueTrackingSlider.h"
#import <MediaPlayer/MediaPlayer.h>
#import "UIView+CustomControlView.h"
#import "MMMaterialDesignSpinner.h"
//#import "ZFPlayer.h"

@interface ZFPlayerControlView : UIView

/** 标题 */
@property (nonatomic, strong) UILabel *titleLabel;
/** 开始播放按钮 */
@property (nonatomic, strong) UIButton *startBtn;
/** 当前播放时长label */
@property (nonatomic, strong) UILabel *currentTimeLabel;
/** 视频总时长label */
@property (nonatomic, strong) UILabel *totalTimeLabel;
/** 缓冲进度条 */
@property (nonatomic, strong) UIProgressView *progressView;
/** 滑杆 */
@property (nonatomic, strong) ASValueTrackingSlider *videoSlider;
/** 全屏按钮 */
@property (nonatomic, strong) UIButton *fullScreenBtn;
/** 锁定屏幕方向按钮 */
@property (nonatomic, strong) UIButton *lockBtn;
/** 系统菊花 */
@property (nonatomic, strong) MMMaterialDesignSpinner *activity;
/** 返回按钮*/
@property (nonatomic, strong) UIButton *backBtn;
/** 关闭按钮*/
@property (nonatomic, strong) UIButton *closeBtn;
/** 重播按钮 */
@property (nonatomic, strong) UIButton *repeatBtn;
/** bottomView*/
@property (nonatomic, strong) UIImageView *bottomImageView;
/** topView */
@property (nonatomic, strong) UIImageView *topImageView;
/** 缓存按钮 */
@property (nonatomic, strong) UIButton *downLoadBtn;
/** 切换分辨率按钮 */
@property (nonatomic, strong) UIButton *resolutionBtn;
/** 分辨率的View */
@property (nonatomic, strong) UIView *resolutionView;
/** 播放按钮 */
@property (nonatomic, strong) UIButton *playeBtn;
/** 加载失败按钮 */
@property (nonatomic, strong) UIButton *failBtn;
/** 快进快退View*/
@property (nonatomic, strong) UIView *fastView;
/** 快进快退进度progress*/
@property (nonatomic, strong) UIProgressView *fastProgressView;
/** 快进快退时间*/
@property (nonatomic, strong) UILabel *fastTimeLabel;
/** 快进快退ImageView*/
@property (nonatomic, strong) UIImageView *fastImageView;
/** 当前选中的分辨率btn按钮 */
@property (nonatomic, strong) UIButton *resoultionCurrentBtn;
/** 占位图 */
@property (nonatomic, strong) UIImageView *placeholderImageView;
/** 控制层消失时候在底部显示的播放进度progress */
@property (nonatomic, strong) UIProgressView *bottomProgressView;
/** 分辨率的名称 */
@property (nonatomic, strong) NSArray *resolutionArray;
/** 视频列表按钮 */
@property (nonatomic, strong) UIButton *videoListBtn;
/** 视频播放速率按钮 */
@property (nonatomic, strong) UIButton *videoRateBtn;
/** 速率的View */
@property (nonatomic, strong) UIView *rateView;
/** 速率的名称 */
@property (nonatomic, strong) NSArray *rateArray;
/** 视频列表 */
@property (nonatomic, strong) UITableView *tableView;



@end
