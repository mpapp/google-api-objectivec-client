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
//  GTLYouTube_Sources.m
//
// This file can be compiled into projects to avoid adding the individual
// source files for this service.
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

#import "GTLYouTubeConstants.m"

#import "GTLYouTubeAccessPolicy.m"
#import "GTLYouTubeActivity.m"
#import "GTLYouTubeActivityContentDetails.m"
#import "GTLYouTubeActivityContentDetailsBulletin.m"
#import "GTLYouTubeActivityContentDetailsChannelItem.m"
#import "GTLYouTubeActivityContentDetailsComment.m"
#import "GTLYouTubeActivityContentDetailsFavorite.m"
#import "GTLYouTubeActivityContentDetailsLike.m"
#import "GTLYouTubeActivityContentDetailsPlaylistItem.m"
#import "GTLYouTubeActivityContentDetailsPromotedItem.m"
#import "GTLYouTubeActivityContentDetailsRecommendation.m"
#import "GTLYouTubeActivityContentDetailsSocial.m"
#import "GTLYouTubeActivityContentDetailsSubscription.m"
#import "GTLYouTubeActivityContentDetailsUpload.m"
#import "GTLYouTubeActivityListResponse.m"
#import "GTLYouTubeActivitySnippet.m"
<<<<<<< HEAD
=======
#import "GTLYouTubeCaption.m"
#import "GTLYouTubeCaptionListResponse.m"
#import "GTLYouTubeCaptionSnippet.m"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLYouTubeCdnSettings.m"
#import "GTLYouTubeChannel.m"
#import "GTLYouTubeChannelAuditDetails.m"
#import "GTLYouTubeChannelBannerResource.m"
#import "GTLYouTubeChannelBrandingSettings.m"
#import "GTLYouTubeChannelContentDetails.m"
#import "GTLYouTubeChannelContentOwnerDetails.m"
#import "GTLYouTubeChannelConversionPing.m"
#import "GTLYouTubeChannelConversionPings.m"
#import "GTLYouTubeChannelListResponse.m"
<<<<<<< HEAD
#import "GTLYouTubeChannelSection.m"
#import "GTLYouTubeChannelSectionContentDetails.m"
#import "GTLYouTubeChannelSectionListResponse.m"
#import "GTLYouTubeChannelSectionSnippet.m"
=======
#import "GTLYouTubeChannelLocalization.m"
#import "GTLYouTubeChannelProfileDetails.m"
#import "GTLYouTubeChannelSection.m"
#import "GTLYouTubeChannelSectionContentDetails.m"
#import "GTLYouTubeChannelSectionListResponse.m"
#import "GTLYouTubeChannelSectionLocalization.m"
#import "GTLYouTubeChannelSectionSnippet.m"
#import "GTLYouTubeChannelSectionTargeting.m"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLYouTubeChannelSettings.m"
#import "GTLYouTubeChannelSnippet.m"
#import "GTLYouTubeChannelStatistics.m"
#import "GTLYouTubeChannelStatus.m"
#import "GTLYouTubeChannelTopicDetails.m"
<<<<<<< HEAD
#import "GTLYouTubeContentRating.m"
=======
#import "GTLYouTubeComment.m"
#import "GTLYouTubeCommentListResponse.m"
#import "GTLYouTubeCommentSnippet.m"
#import "GTLYouTubeCommentThread.m"
#import "GTLYouTubeCommentThreadListResponse.m"
#import "GTLYouTubeCommentThreadReplies.m"
#import "GTLYouTubeCommentThreadSnippet.m"
#import "GTLYouTubeContentRating.m"
#import "GTLYouTubeFanFundingEvent.m"
#import "GTLYouTubeFanFundingEventListResponse.m"
#import "GTLYouTubeFanFundingEventSnippet.m"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLYouTubeGeoPoint.m"
#import "GTLYouTubeGuideCategory.m"
#import "GTLYouTubeGuideCategoryListResponse.m"
#import "GTLYouTubeGuideCategorySnippet.m"
#import "GTLYouTubeI18nLanguage.m"
#import "GTLYouTubeI18nLanguageListResponse.m"
#import "GTLYouTubeI18nLanguageSnippet.m"
#import "GTLYouTubeI18nRegion.m"
#import "GTLYouTubeI18nRegionListResponse.m"
#import "GTLYouTubeI18nRegionSnippet.m"
#import "GTLYouTubeImageSettings.m"
#import "GTLYouTubeIngestionInfo.m"
#import "GTLYouTubeInvideoBranding.m"
#import "GTLYouTubeInvideoPosition.m"
#import "GTLYouTubeInvideoPromotion.m"
#import "GTLYouTubeInvideoTiming.m"
<<<<<<< HEAD
=======
#import "GTLYouTubeLanguageTag.m"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLYouTubeLiveBroadcast.m"
#import "GTLYouTubeLiveBroadcastContentDetails.m"
#import "GTLYouTubeLiveBroadcastListResponse.m"
#import "GTLYouTubeLiveBroadcastSnippet.m"
<<<<<<< HEAD
#import "GTLYouTubeLiveBroadcastStatus.m"
#import "GTLYouTubeLiveStream.m"
#import "GTLYouTubeLiveStreamContentDetails.m"
=======
#import "GTLYouTubeLiveBroadcastStatistics.m"
#import "GTLYouTubeLiveBroadcastStatus.m"
#import "GTLYouTubeLiveBroadcastTopic.m"
#import "GTLYouTubeLiveBroadcastTopicDetails.m"
#import "GTLYouTubeLiveBroadcastTopicSnippet.m"
#import "GTLYouTubeLiveChatBan.m"
#import "GTLYouTubeLiveChatBanSnippet.m"
#import "GTLYouTubeLiveChatFanFundingEventDetails.m"
#import "GTLYouTubeLiveChatMessage.m"
#import "GTLYouTubeLiveChatMessageAuthorDetails.m"
#import "GTLYouTubeLiveChatMessageDeletedDetails.m"
#import "GTLYouTubeLiveChatMessageListResponse.m"
#import "GTLYouTubeLiveChatMessageRetractedDetails.m"
#import "GTLYouTubeLiveChatMessageSnippet.m"
#import "GTLYouTubeLiveChatModerator.m"
#import "GTLYouTubeLiveChatModeratorListResponse.m"
#import "GTLYouTubeLiveChatModeratorSnippet.m"
#import "GTLYouTubeLiveChatTextMessageDetails.m"
#import "GTLYouTubeLiveChatUserBannedMessageDetails.m"
#import "GTLYouTubeLiveStream.m"
#import "GTLYouTubeLiveStreamConfigurationIssue.m"
#import "GTLYouTubeLiveStreamContentDetails.m"
#import "GTLYouTubeLiveStreamHealthStatus.m"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLYouTubeLiveStreamListResponse.m"
#import "GTLYouTubeLiveStreamSnippet.m"
#import "GTLYouTubeLiveStreamStatus.m"
#import "GTLYouTubeLocalizedProperty.m"
#import "GTLYouTubeLocalizedString.m"
#import "GTLYouTubeMonitorStreamInfo.m"
#import "GTLYouTubePageInfo.m"
#import "GTLYouTubePlaylist.m"
#import "GTLYouTubePlaylistContentDetails.m"
#import "GTLYouTubePlaylistItem.m"
#import "GTLYouTubePlaylistItemContentDetails.m"
#import "GTLYouTubePlaylistItemListResponse.m"
#import "GTLYouTubePlaylistItemSnippet.m"
#import "GTLYouTubePlaylistItemStatus.m"
#import "GTLYouTubePlaylistListResponse.m"
<<<<<<< HEAD
=======
#import "GTLYouTubePlaylistLocalization.m"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLYouTubePlaylistPlayer.m"
#import "GTLYouTubePlaylistSnippet.m"
#import "GTLYouTubePlaylistStatus.m"
#import "GTLYouTubePromotedItem.m"
#import "GTLYouTubePromotedItemId.m"
#import "GTLYouTubePropertyValue.m"
#import "GTLYouTubeResourceId.m"
#import "GTLYouTubeSearchListResponse.m"
#import "GTLYouTubeSearchResult.m"
#import "GTLYouTubeSearchResultSnippet.m"
<<<<<<< HEAD
=======
#import "GTLYouTubeSponsor.m"
#import "GTLYouTubeSponsorListResponse.m"
#import "GTLYouTubeSponsorSnippet.m"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLYouTubeSubscription.m"
#import "GTLYouTubeSubscriptionContentDetails.m"
#import "GTLYouTubeSubscriptionListResponse.m"
#import "GTLYouTubeSubscriptionSnippet.m"
#import "GTLYouTubeSubscriptionSubscriberSnippet.m"
#import "GTLYouTubeThumbnail.m"
#import "GTLYouTubeThumbnailDetails.m"
#import "GTLYouTubeThumbnailSetResponse.m"
#import "GTLYouTubeTokenPagination.m"
#import "GTLYouTubeVideo.m"
<<<<<<< HEAD
=======
#import "GTLYouTubeVideoAbuseReport.m"
#import "GTLYouTubeVideoAbuseReportReason.m"
#import "GTLYouTubeVideoAbuseReportReasonListResponse.m"
#import "GTLYouTubeVideoAbuseReportReasonSnippet.m"
#import "GTLYouTubeVideoAbuseReportSecondaryReason.m"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLYouTubeVideoAgeGating.m"
#import "GTLYouTubeVideoCategory.m"
#import "GTLYouTubeVideoCategoryListResponse.m"
#import "GTLYouTubeVideoCategorySnippet.m"
#import "GTLYouTubeVideoContentDetails.m"
#import "GTLYouTubeVideoContentDetailsRegionRestriction.m"
<<<<<<< HEAD
#import "GTLYouTubeVideoConversionPing.m"
#import "GTLYouTubeVideoConversionPings.m"
=======
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLYouTubeVideoFileDetails.m"
#import "GTLYouTubeVideoFileDetailsAudioStream.m"
#import "GTLYouTubeVideoFileDetailsVideoStream.m"
#import "GTLYouTubeVideoGetRatingResponse.m"
#import "GTLYouTubeVideoListResponse.m"
#import "GTLYouTubeVideoLiveStreamingDetails.m"
<<<<<<< HEAD
=======
#import "GTLYouTubeVideoLocalization.m"
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
#import "GTLYouTubeVideoMonetizationDetails.m"
#import "GTLYouTubeVideoPlayer.m"
#import "GTLYouTubeVideoProcessingDetails.m"
#import "GTLYouTubeVideoProcessingDetailsProcessingProgress.m"
#import "GTLYouTubeVideoProjectDetails.m"
#import "GTLYouTubeVideoRating.m"
#import "GTLYouTubeVideoRecordingDetails.m"
#import "GTLYouTubeVideoSnippet.m"
#import "GTLYouTubeVideoStatistics.m"
#import "GTLYouTubeVideoStatus.m"
#import "GTLYouTubeVideoSuggestions.m"
#import "GTLYouTubeVideoSuggestionsTagSuggestion.m"
#import "GTLYouTubeVideoTopicDetails.m"
#import "GTLYouTubeWatchSettings.m"

#import "GTLQueryYouTube.m"
#import "GTLServiceYouTube.m"
