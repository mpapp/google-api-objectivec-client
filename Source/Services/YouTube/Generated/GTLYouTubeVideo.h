<<<<<<< HEAD
/* Copyright (c) 2013 Google Inc.
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
//  GTLYouTubeVideo.h
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
// Classes:
//   GTLYouTubeVideo (0 custom class methods, 18 custom properties)
<<<<<<< HEAD
=======
//   GTLYouTubeVideoLocalizations (0 custom class methods, 0 custom properties)
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLYouTubeVideoAgeGating;
@class GTLYouTubeVideoContentDetails;
<<<<<<< HEAD
@class GTLYouTubeVideoConversionPings;
@class GTLYouTubeVideoFileDetails;
@class GTLYouTubeVideoLiveStreamingDetails;
=======
@class GTLYouTubeVideoFileDetails;
@class GTLYouTubeVideoLiveStreamingDetails;
@class GTLYouTubeVideoLocalization;
@class GTLYouTubeVideoLocalizations;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@class GTLYouTubeVideoMonetizationDetails;
@class GTLYouTubeVideoPlayer;
@class GTLYouTubeVideoProcessingDetails;
@class GTLYouTubeVideoProjectDetails;
@class GTLYouTubeVideoRecordingDetails;
@class GTLYouTubeVideoSnippet;
@class GTLYouTubeVideoStatistics;
@class GTLYouTubeVideoStatus;
@class GTLYouTubeVideoSuggestions;
@class GTLYouTubeVideoTopicDetails;

// ----------------------------------------------------------------------------
//
//   GTLYouTubeVideo
//

// A video resource represents a YouTube video.

@interface GTLYouTubeVideo : GTLObject

<<<<<<< HEAD
// Age restriction details related to a video.
@property (retain) GTLYouTubeVideoAgeGating *ageGating;

// The contentDetails object contains information about the video content,
// including the length of the video and its aspect ratio.
@property (retain) GTLYouTubeVideoContentDetails *contentDetails;

// The conversionPings object encapsulates information about url pings that need
// to be respected by the App in different video contexts.
@property (retain) GTLYouTubeVideoConversionPings *conversionPings;

// Etag of this resource.
@property (copy) NSString *ETag;
=======
// Age restriction details related to a video. This data can only be retrieved
// by the video owner.
@property (nonatomic, retain) GTLYouTubeVideoAgeGating *ageGating;

// The contentDetails object contains information about the video content,
// including the length of the video and its aspect ratio.
@property (nonatomic, retain) GTLYouTubeVideoContentDetails *contentDetails;

// Etag of this resource.
@property (nonatomic, copy) NSString *ETag;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The fileDetails object encapsulates information about the video file that was
// uploaded to YouTube, including the file's resolution, duration, audio and
// video codecs, stream bitrates, and more. This data can only be retrieved by
// the video owner.
<<<<<<< HEAD
@property (retain) GTLYouTubeVideoFileDetails *fileDetails;

// The ID that YouTube uses to uniquely identify the video.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (copy) NSString *identifier;

// Identifies what kind of resource this is. Value: the fixed string
// "youtube#video".
@property (copy) NSString *kind;
=======
@property (nonatomic, retain) GTLYouTubeVideoFileDetails *fileDetails;

// The ID that YouTube uses to uniquely identify the video.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (nonatomic, copy) NSString *identifier;

// Identifies what kind of resource this is. Value: the fixed string
// "youtube#video".
@property (nonatomic, copy) NSString *kind;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The liveStreamingDetails object contains metadata about a live video
// broadcast. The object will only be present in a video resource if the video
// is an upcoming, live, or completed live broadcast.
<<<<<<< HEAD
@property (retain) GTLYouTubeVideoLiveStreamingDetails *liveStreamingDetails;

// The monetizationDetails object encapsulates information about the
// monetization status of the video.
@property (retain) GTLYouTubeVideoMonetizationDetails *monetizationDetails;

// The player object contains information that you would use to play the video
// in an embedded player.
@property (retain) GTLYouTubeVideoPlayer *player;
=======
@property (nonatomic, retain) GTLYouTubeVideoLiveStreamingDetails *liveStreamingDetails;

// List with all localizations.
@property (nonatomic, retain) GTLYouTubeVideoLocalizations *localizations;

// The monetizationDetails object encapsulates information about the
// monetization status of the video.
@property (nonatomic, retain) GTLYouTubeVideoMonetizationDetails *monetizationDetails;

// The player object contains information that you would use to play the video
// in an embedded player.
@property (nonatomic, retain) GTLYouTubeVideoPlayer *player;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The processingProgress object encapsulates information about YouTube's
// progress in processing the uploaded video file. The properties in the object
// identify the current processing status and an estimate of the time remaining
// until YouTube finishes processing the video. This part also indicates whether
// different types of data or content, such as file details or thumbnail images,
// are available for the video.
// The processingProgress object is designed to be polled so that the video
// uploaded can track the progress that YouTube has made in processing the
// uploaded video file. This data can only be retrieved by the video owner.
<<<<<<< HEAD
@property (retain) GTLYouTubeVideoProcessingDetails *processingDetails;

// The projectDetails object contains information about the project specific
// video metadata.
@property (retain) GTLYouTubeVideoProjectDetails *projectDetails;

// The recordingDetails object encapsulates information about the location, date
// and address where the video was recorded.
@property (retain) GTLYouTubeVideoRecordingDetails *recordingDetails;

// The snippet object contains basic details about the video, such as its title,
// description, and category.
@property (retain) GTLYouTubeVideoSnippet *snippet;

// The statistics object contains statistics about the video.
@property (retain) GTLYouTubeVideoStatistics *statistics;

// The status object contains information about the video's uploading,
// processing, and privacy statuses.
@property (retain) GTLYouTubeVideoStatus *status;
=======
@property (nonatomic, retain) GTLYouTubeVideoProcessingDetails *processingDetails;

// The projectDetails object contains information about the project specific
// video metadata.
@property (nonatomic, retain) GTLYouTubeVideoProjectDetails *projectDetails;

// The recordingDetails object encapsulates information about the location, date
// and address where the video was recorded.
@property (nonatomic, retain) GTLYouTubeVideoRecordingDetails *recordingDetails;

// The snippet object contains basic details about the video, such as its title,
// description, and category.
@property (nonatomic, retain) GTLYouTubeVideoSnippet *snippet;

// The statistics object contains statistics about the video.
@property (nonatomic, retain) GTLYouTubeVideoStatistics *statistics;

// The status object contains information about the video's uploading,
// processing, and privacy statuses.
@property (nonatomic, retain) GTLYouTubeVideoStatus *status;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// The suggestions object encapsulates suggestions that identify opportunities
// to improve the video quality or the metadata for the uploaded video. This
// data can only be retrieved by the video owner.
<<<<<<< HEAD
@property (retain) GTLYouTubeVideoSuggestions *suggestions;

// The topicDetails object encapsulates information about Freebase topics
// associated with the video.
@property (retain) GTLYouTubeVideoTopicDetails *topicDetails;

=======
@property (nonatomic, retain) GTLYouTubeVideoSuggestions *suggestions;

// The topicDetails object encapsulates information about Freebase topics
// associated with the video.
@property (nonatomic, retain) GTLYouTubeVideoTopicDetails *topicDetails;

@end


// ----------------------------------------------------------------------------
//
//   GTLYouTubeVideoLocalizations
//

@interface GTLYouTubeVideoLocalizations : GTLObject
// This object is documented as having more properties that are
// GTLYouTubeVideoLocalization. Use -additionalJSONKeys and
// -additionalPropertyForName: to get the list of properties and then fetch
// them; or -additionalProperties to fetch them all at once.
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
@end
