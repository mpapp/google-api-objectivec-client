<<<<<<< HEAD
/* Copyright (c) 2014 Google Inc.
=======
/* Copyright (c) 2016 Google Inc.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLYouTube.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Description:
<<<<<<< HEAD
//   Programmatic access to YouTube features.
=======
//   Supports core YouTube features, such as uploading videos, creating and
//   managing playlists, searching for content, and much more.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// Documentation:
//   https://developers.google.com/youtube/v3

#import "GTLYouTubeConstants.h"

#import "GTLYouTubeAccessPolicy.h"
#import "GTLYouTubeActivity.h"
#import "GTLYouTubeActivityContentDetails.h"
#import "GTLYouTubeActivityContentDetailsBulletin.h"
#import "GTLYouTubeActivityContentDetailsChannelItem.h"
#import "GTLYouTubeActivityContentDetailsComment.h"
#import "GTLYouTubeActivityContentDetailsFavorite.h"
#import "GTLYouTubeActivityContentDetailsLike.h"
#import "GTLYouTubeActivityContentDetailsPlaylistItem.h"
#import "GTLYouTubeActivityContentDetailsPromotedItem.h"
#import "GTLYouTubeActivityContentDetailsRecommendation.h"
#import "GTLYouTubeActivityContentDetailsSocial.h"
#import "GTLYouTubeActivityContentDetailsSubscription.h"
#import "GTLYouTubeActivityContentDetailsUpload.h"
#import "GTLYouTubeActivityListResponse.h"
#import "GTLYouTubeActivitySnippet.h"
<<<<<<< HEAD
=======
#import "GTLYouTubeCaption.h"
#import "GTLYouTubeCaptionListResponse.h"
#import "GTLYouTubeCaptionSnippet.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLYouTubeCdnSettings.h"
#import "GTLYouTubeChannel.h"
#import "GTLYouTubeChannelAuditDetails.h"
#import "GTLYouTubeChannelBannerResource.h"
#import "GTLYouTubeChannelBrandingSettings.h"
#import "GTLYouTubeChannelContentDetails.h"
#import "GTLYouTubeChannelContentOwnerDetails.h"
#import "GTLYouTubeChannelConversionPing.h"
#import "GTLYouTubeChannelConversionPings.h"
#import "GTLYouTubeChannelListResponse.h"
<<<<<<< HEAD
#import "GTLYouTubeChannelSection.h"
#import "GTLYouTubeChannelSectionContentDetails.h"
#import "GTLYouTubeChannelSectionListResponse.h"
#import "GTLYouTubeChannelSectionSnippet.h"
=======
#import "GTLYouTubeChannelLocalization.h"
#import "GTLYouTubeChannelProfileDetails.h"
#import "GTLYouTubeChannelSection.h"
#import "GTLYouTubeChannelSectionContentDetails.h"
#import "GTLYouTubeChannelSectionListResponse.h"
#import "GTLYouTubeChannelSectionLocalization.h"
#import "GTLYouTubeChannelSectionSnippet.h"
#import "GTLYouTubeChannelSectionTargeting.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLYouTubeChannelSettings.h"
#import "GTLYouTubeChannelSnippet.h"
#import "GTLYouTubeChannelStatistics.h"
#import "GTLYouTubeChannelStatus.h"
#import "GTLYouTubeChannelTopicDetails.h"
<<<<<<< HEAD
#import "GTLYouTubeContentRating.h"
=======
#import "GTLYouTubeComment.h"
#import "GTLYouTubeCommentListResponse.h"
#import "GTLYouTubeCommentSnippet.h"
#import "GTLYouTubeCommentThread.h"
#import "GTLYouTubeCommentThreadListResponse.h"
#import "GTLYouTubeCommentThreadReplies.h"
#import "GTLYouTubeCommentThreadSnippet.h"
#import "GTLYouTubeContentRating.h"
#import "GTLYouTubeFanFundingEvent.h"
#import "GTLYouTubeFanFundingEventListResponse.h"
#import "GTLYouTubeFanFundingEventSnippet.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLYouTubeGeoPoint.h"
#import "GTLYouTubeGuideCategory.h"
#import "GTLYouTubeGuideCategoryListResponse.h"
#import "GTLYouTubeGuideCategorySnippet.h"
#import "GTLYouTubeI18nLanguage.h"
#import "GTLYouTubeI18nLanguageListResponse.h"
#import "GTLYouTubeI18nLanguageSnippet.h"
#import "GTLYouTubeI18nRegion.h"
#import "GTLYouTubeI18nRegionListResponse.h"
#import "GTLYouTubeI18nRegionSnippet.h"
#import "GTLYouTubeImageSettings.h"
#import "GTLYouTubeIngestionInfo.h"
#import "GTLYouTubeInvideoBranding.h"
#import "GTLYouTubeInvideoPosition.h"
#import "GTLYouTubeInvideoPromotion.h"
#import "GTLYouTubeInvideoTiming.h"
<<<<<<< HEAD
=======
#import "GTLYouTubeLanguageTag.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLYouTubeLiveBroadcast.h"
#import "GTLYouTubeLiveBroadcastContentDetails.h"
#import "GTLYouTubeLiveBroadcastListResponse.h"
#import "GTLYouTubeLiveBroadcastSnippet.h"
<<<<<<< HEAD
#import "GTLYouTubeLiveBroadcastStatus.h"
#import "GTLYouTubeLiveStream.h"
#import "GTLYouTubeLiveStreamContentDetails.h"
=======
#import "GTLYouTubeLiveBroadcastStatistics.h"
#import "GTLYouTubeLiveBroadcastStatus.h"
#import "GTLYouTubeLiveBroadcastTopic.h"
#import "GTLYouTubeLiveBroadcastTopicDetails.h"
#import "GTLYouTubeLiveBroadcastTopicSnippet.h"
#import "GTLYouTubeLiveChatBan.h"
#import "GTLYouTubeLiveChatBanSnippet.h"
#import "GTLYouTubeLiveChatFanFundingEventDetails.h"
#import "GTLYouTubeLiveChatMessage.h"
#import "GTLYouTubeLiveChatMessageAuthorDetails.h"
#import "GTLYouTubeLiveChatMessageDeletedDetails.h"
#import "GTLYouTubeLiveChatMessageListResponse.h"
#import "GTLYouTubeLiveChatMessageRetractedDetails.h"
#import "GTLYouTubeLiveChatMessageSnippet.h"
#import "GTLYouTubeLiveChatModerator.h"
#import "GTLYouTubeLiveChatModeratorListResponse.h"
#import "GTLYouTubeLiveChatModeratorSnippet.h"
#import "GTLYouTubeLiveChatTextMessageDetails.h"
#import "GTLYouTubeLiveChatUserBannedMessageDetails.h"
#import "GTLYouTubeLiveStream.h"
#import "GTLYouTubeLiveStreamConfigurationIssue.h"
#import "GTLYouTubeLiveStreamContentDetails.h"
#import "GTLYouTubeLiveStreamHealthStatus.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLYouTubeLiveStreamListResponse.h"
#import "GTLYouTubeLiveStreamSnippet.h"
#import "GTLYouTubeLiveStreamStatus.h"
#import "GTLYouTubeLocalizedProperty.h"
#import "GTLYouTubeLocalizedString.h"
#import "GTLYouTubeMonitorStreamInfo.h"
#import "GTLYouTubePageInfo.h"
#import "GTLYouTubePlaylist.h"
#import "GTLYouTubePlaylistContentDetails.h"
#import "GTLYouTubePlaylistItem.h"
#import "GTLYouTubePlaylistItemContentDetails.h"
#import "GTLYouTubePlaylistItemListResponse.h"
#import "GTLYouTubePlaylistItemSnippet.h"
#import "GTLYouTubePlaylistItemStatus.h"
#import "GTLYouTubePlaylistListResponse.h"
<<<<<<< HEAD
=======
#import "GTLYouTubePlaylistLocalization.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLYouTubePlaylistPlayer.h"
#import "GTLYouTubePlaylistSnippet.h"
#import "GTLYouTubePlaylistStatus.h"
#import "GTLYouTubePromotedItem.h"
#import "GTLYouTubePromotedItemId.h"
#import "GTLYouTubePropertyValue.h"
#import "GTLYouTubeResourceId.h"
#import "GTLYouTubeSearchListResponse.h"
#import "GTLYouTubeSearchResult.h"
#import "GTLYouTubeSearchResultSnippet.h"
<<<<<<< HEAD
=======
#import "GTLYouTubeSponsor.h"
#import "GTLYouTubeSponsorListResponse.h"
#import "GTLYouTubeSponsorSnippet.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLYouTubeSubscription.h"
#import "GTLYouTubeSubscriptionContentDetails.h"
#import "GTLYouTubeSubscriptionListResponse.h"
#import "GTLYouTubeSubscriptionSnippet.h"
#import "GTLYouTubeSubscriptionSubscriberSnippet.h"
#import "GTLYouTubeThumbnail.h"
#import "GTLYouTubeThumbnailDetails.h"
#import "GTLYouTubeThumbnailSetResponse.h"
#import "GTLYouTubeTokenPagination.h"
#import "GTLYouTubeVideo.h"
<<<<<<< HEAD
=======
#import "GTLYouTubeVideoAbuseReport.h"
#import "GTLYouTubeVideoAbuseReportReason.h"
#import "GTLYouTubeVideoAbuseReportReasonListResponse.h"
#import "GTLYouTubeVideoAbuseReportReasonSnippet.h"
#import "GTLYouTubeVideoAbuseReportSecondaryReason.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLYouTubeVideoAgeGating.h"
#import "GTLYouTubeVideoCategory.h"
#import "GTLYouTubeVideoCategoryListResponse.h"
#import "GTLYouTubeVideoCategorySnippet.h"
#import "GTLYouTubeVideoContentDetails.h"
#import "GTLYouTubeVideoContentDetailsRegionRestriction.h"
<<<<<<< HEAD
#import "GTLYouTubeVideoConversionPing.h"
#import "GTLYouTubeVideoConversionPings.h"
=======
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLYouTubeVideoFileDetails.h"
#import "GTLYouTubeVideoFileDetailsAudioStream.h"
#import "GTLYouTubeVideoFileDetailsVideoStream.h"
#import "GTLYouTubeVideoGetRatingResponse.h"
#import "GTLYouTubeVideoListResponse.h"
#import "GTLYouTubeVideoLiveStreamingDetails.h"
<<<<<<< HEAD
=======
#import "GTLYouTubeVideoLocalization.h"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLYouTubeVideoMonetizationDetails.h"
#import "GTLYouTubeVideoPlayer.h"
#import "GTLYouTubeVideoProcessingDetails.h"
#import "GTLYouTubeVideoProcessingDetailsProcessingProgress.h"
#import "GTLYouTubeVideoProjectDetails.h"
#import "GTLYouTubeVideoRating.h"
#import "GTLYouTubeVideoRecordingDetails.h"
#import "GTLYouTubeVideoSnippet.h"
#import "GTLYouTubeVideoStatistics.h"
#import "GTLYouTubeVideoStatus.h"
#import "GTLYouTubeVideoSuggestions.h"
#import "GTLYouTubeVideoSuggestionsTagSuggestion.h"
#import "GTLYouTubeVideoTopicDetails.h"
#import "GTLYouTubeWatchSettings.h"

#import "GTLQueryYouTube.h"
#import "GTLServiceYouTube.h"
