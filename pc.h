//
// Prefix header for all source files of the 'Audioscrobbler' target in the 'Audioscrobbler' project
//

#ifdef __OBJC__
    #import <Cocoa/Cocoa.h>
#endif


// don't use these, make your own!
#define LASTFM_API_KEY "c8c7b163b11f92ef2d33ba6cd3c2c3c3"
#define LASTFM_SHARED_SECRET "73582dfc9e556d307aead069af110ab8"


#define STATE_PLAYING 0
#define STATE_PAUSED 1
#define STATE_STOPPED 2
#define STATE_ERROR 3


enum ASTransition {
    TrackStarted,
    TrackPaused,
    TrackResumed,
    PlaybackStopped,

    TrackMetadataChanged
};


#define ASGrowlTrackStarted @"Track Started"
#define ASGrowlTrackPaused @"Track Paused"
#define ASGrowlTrackResumed @"Track Resumed"
#define ASGrowlPlaylistEnded @"Playlist Ended"
#define ASGrowlSubmissionStatus @"Scrobble Submission Status"
#define ASGrowlLoveTrackQuery @"Love Track Query"
#define ASGrowlAuthenticationRequired @"Authentication Required"
#define ASGrowlErrorCommunication @"Error Communication"
#define ASGrowlCorrectionSuggestion @"Correction Suggestion"