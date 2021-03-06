//
//  FirestackEvents.h
//  Firestack
//
//  Created by Ari Lerner on 8/23/16.
//  Copyright © 2016 Facebook. All rights reserved.
//

static NSString *const AUTH_CHANGED_EVENT = @"listenForAuth";
static NSString *const DEBUG_EVENT = @"debug";

// Database
static NSString *const DATABASE_DATA_EVENT = @"database_event";
static NSString *const DATABASE_ERROR_EVENT = @"database_error";

static NSString *const DATABASE_VALUE_EVENT = @"value";
static NSString *const DATABASE_CHILD_ADDED_EVENT = @"child_added";
static NSString *const DATABASE_CHILD_MODIFIED_EVENT = @"child_changed";
static NSString *const DATABASE_CHILD_REMOVED_EVENT = @"child_removed";
static NSString *const DATABASE_CHILD_MOVED_EVENT = @"child_moved";

// Storage
static NSString *const STORAGE_UPLOAD_PROGRESS = @"upload_progress";
static NSString *const STORAGE_UPLOAD_PAUSED = @"upload_paused";
static NSString *const STORAGE_UPLOAD_RESUMED = @"upload_resumed";