<<<<<<< HEAD
/* Copyright (c) 2013 Google Inc.
=======
/* Copyright (c) 2015 Google Inc.
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
//  GTLQueryTasks.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Tasks API (tasks/v1)
// Description:
//   Lets you manage your tasks and task lists.
// Documentation:
//   https://developers.google.com/google-apps/tasks/firstapp
// Classes:
//   GTLQueryTasks (14 custom class methods, 15 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLQuery.h"
#else
  #import "GTLQuery.h"
#endif

@class GTLTasksTask;
@class GTLTasksTaskList;

@interface GTLQueryTasks : GTLQuery

//
// Parameters valid on all methods.
//

// Selector specifying which fields to include in a partial response.
<<<<<<< HEAD
@property (copy) NSString *fields;
=======
@property (nonatomic, copy) NSString *fields;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

//
// Method-specific parameters; see the comments below for more information.
//
<<<<<<< HEAD
@property (copy) NSString *completedMax;
@property (copy) NSString *completedMin;
@property (copy) NSString *dueMax;
@property (copy) NSString *dueMin;
@property (assign) long long maxResults;
@property (copy) NSString *pageToken;
@property (copy) NSString *parent;
@property (copy) NSString *previous;
@property (assign) BOOL showCompleted;
@property (assign) BOOL showDeleted;
@property (assign) BOOL showHidden;
@property (copy) NSString *task;
@property (copy) NSString *tasklist;
@property (copy) NSString *updatedMin;

#pragma mark -
#pragma mark "tasklists" methods
=======
@property (nonatomic, copy) NSString *completedMax;
@property (nonatomic, copy) NSString *completedMin;
@property (nonatomic, copy) NSString *dueMax;
@property (nonatomic, copy) NSString *dueMin;
@property (nonatomic, assign) long long maxResults;
@property (nonatomic, copy) NSString *pageToken;
@property (nonatomic, copy) NSString *parent;
@property (nonatomic, copy) NSString *previous;
@property (nonatomic, assign) BOOL showCompleted;
@property (nonatomic, assign) BOOL showDeleted;
@property (nonatomic, assign) BOOL showHidden;
@property (nonatomic, copy) NSString *task;
@property (nonatomic, copy) NSString *tasklist;
@property (nonatomic, copy) NSString *updatedMin;

#pragma mark - "tasklists" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryTasks object.

// Method: tasks.tasklists.delete
// Deletes the authenticated user's specified task list.
//  Required:
//   tasklist: Task list identifier.
//  Authorization scope(s):
//   kGTLAuthScopeTasks
<<<<<<< HEAD
+ (id)queryForTasklistsDeleteWithTasklist:(NSString *)tasklist;
=======
+ (instancetype)queryForTasklistsDeleteWithTasklist:(NSString *)tasklist;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: tasks.tasklists.get
// Returns the authenticated user's specified task list.
//  Required:
//   tasklist: Task list identifier.
//  Authorization scope(s):
//   kGTLAuthScopeTasks
//   kGTLAuthScopeTasksReadonly
// Fetches a GTLTasksTaskList.
<<<<<<< HEAD
+ (id)queryForTasklistsGetWithTasklist:(NSString *)tasklist;
=======
+ (instancetype)queryForTasklistsGetWithTasklist:(NSString *)tasklist;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: tasks.tasklists.insert
// Creates a new task list and adds it to the authenticated user's task lists.
//  Authorization scope(s):
//   kGTLAuthScopeTasks
// Fetches a GTLTasksTaskList.
<<<<<<< HEAD
+ (id)queryForTasklistsInsertWithObject:(GTLTasksTaskList *)object;
=======
+ (instancetype)queryForTasklistsInsertWithObject:(GTLTasksTaskList *)object;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: tasks.tasklists.list
// Returns all the authenticated user's task lists.
//  Optional:
//   maxResults: Maximum number of task lists returned on one page. Optional.
//     The default is 100.
//   pageToken: Token specifying the result page to return. Optional.
//  Authorization scope(s):
//   kGTLAuthScopeTasks
//   kGTLAuthScopeTasksReadonly
// Fetches a GTLTasksTaskLists.
<<<<<<< HEAD
+ (id)queryForTasklistsList;
=======
+ (instancetype)queryForTasklistsList;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: tasks.tasklists.patch
// Updates the authenticated user's specified task list. This method supports
// patch semantics.
//  Required:
//   tasklist: Task list identifier.
//  Authorization scope(s):
//   kGTLAuthScopeTasks
// Fetches a GTLTasksTaskList.
<<<<<<< HEAD
+ (id)queryForTasklistsPatchWithObject:(GTLTasksTaskList *)object
                              tasklist:(NSString *)tasklist;
=======
+ (instancetype)queryForTasklistsPatchWithObject:(GTLTasksTaskList *)object
                                        tasklist:(NSString *)tasklist;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: tasks.tasklists.update
// Updates the authenticated user's specified task list.
//  Required:
//   tasklist: Task list identifier.
//  Authorization scope(s):
//   kGTLAuthScopeTasks
// Fetches a GTLTasksTaskList.
<<<<<<< HEAD
+ (id)queryForTasklistsUpdateWithObject:(GTLTasksTaskList *)object
                               tasklist:(NSString *)tasklist;

#pragma mark -
#pragma mark "tasks" methods
=======
+ (instancetype)queryForTasklistsUpdateWithObject:(GTLTasksTaskList *)object
                                         tasklist:(NSString *)tasklist;

#pragma mark - "tasks" methods
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd
// These create a GTLQueryTasks object.

// Method: tasks.tasks.clear
// Clears all completed tasks from the specified task list. The affected tasks
// will be marked as 'hidden' and no longer be returned by default when
// retrieving all tasks for a task list.
//  Required:
//   tasklist: Task list identifier.
//  Authorization scope(s):
//   kGTLAuthScopeTasks
<<<<<<< HEAD
+ (id)queryForTasksClearWithTasklist:(NSString *)tasklist;
=======
+ (instancetype)queryForTasksClearWithTasklist:(NSString *)tasklist;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: tasks.tasks.delete
// Deletes the specified task from the task list.
//  Required:
//   tasklist: Task list identifier.
//   task: Task identifier.
//  Authorization scope(s):
//   kGTLAuthScopeTasks
<<<<<<< HEAD
+ (id)queryForTasksDeleteWithTasklist:(NSString *)tasklist
                                 task:(NSString *)task;
=======
+ (instancetype)queryForTasksDeleteWithTasklist:(NSString *)tasklist
                                           task:(NSString *)task;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: tasks.tasks.get
// Returns the specified task.
//  Required:
//   tasklist: Task list identifier.
//   task: Task identifier.
//  Authorization scope(s):
//   kGTLAuthScopeTasks
//   kGTLAuthScopeTasksReadonly
// Fetches a GTLTasksTask.
<<<<<<< HEAD
+ (id)queryForTasksGetWithTasklist:(NSString *)tasklist
                              task:(NSString *)task;
=======
+ (instancetype)queryForTasksGetWithTasklist:(NSString *)tasklist
                                        task:(NSString *)task;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: tasks.tasks.insert
// Creates a new task on the specified task list.
//  Required:
//   tasklist: Task list identifier.
//  Optional:
//   parent: Parent task identifier. If the task is created at the top level,
//     this parameter is omitted. Optional.
//   previous: Previous sibling task identifier. If the task is created at the
//     first position among its siblings, this parameter is omitted. Optional.
//  Authorization scope(s):
//   kGTLAuthScopeTasks
// Fetches a GTLTasksTask.
<<<<<<< HEAD
+ (id)queryForTasksInsertWithObject:(GTLTasksTask *)object
                           tasklist:(NSString *)tasklist;
=======
+ (instancetype)queryForTasksInsertWithObject:(GTLTasksTask *)object
                                     tasklist:(NSString *)tasklist;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: tasks.tasks.list
// Returns all tasks in the specified task list.
//  Required:
//   tasklist: Task list identifier.
//  Optional:
//   completedMax: Upper bound for a task's completion date (as a RFC 3339
//     timestamp) to filter by. Optional. The default is not to filter by
//     completion date.
//   completedMin: Lower bound for a task's completion date (as a RFC 3339
//     timestamp) to filter by. Optional. The default is not to filter by
//     completion date.
//   dueMax: Upper bound for a task's due date (as a RFC 3339 timestamp) to
//     filter by. Optional. The default is not to filter by due date.
//   dueMin: Lower bound for a task's due date (as a RFC 3339 timestamp) to
//     filter by. Optional. The default is not to filter by due date.
//   maxResults: Maximum number of task lists returned on one page. Optional.
//     The default is 100.
//   pageToken: Token specifying the result page to return. Optional.
//   showCompleted: Flag indicating whether completed tasks are returned in the
//     result. Optional. The default is True.
//   showDeleted: Flag indicating whether deleted tasks are returned in the
//     result. Optional. The default is False.
//   showHidden: Flag indicating whether hidden tasks are returned in the
//     result. Optional. The default is False.
//   updatedMin: Lower bound for a task's last modification time (as a RFC 3339
//     timestamp) to filter by. Optional. The default is not to filter by last
//     modification time.
//  Authorization scope(s):
//   kGTLAuthScopeTasks
//   kGTLAuthScopeTasksReadonly
// Fetches a GTLTasksTasks.
<<<<<<< HEAD
+ (id)queryForTasksListWithTasklist:(NSString *)tasklist;
=======
+ (instancetype)queryForTasksListWithTasklist:(NSString *)tasklist;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: tasks.tasks.move
// Moves the specified task to another position in the task list. This can
// include putting it as a child task under a new parent and/or move it to a
// different position among its sibling tasks.
//  Required:
//   tasklist: Task list identifier.
//   task: Task identifier.
//  Optional:
//   parent: New parent task identifier. If the task is moved to the top level,
//     this parameter is omitted. Optional.
//   previous: New previous sibling task identifier. If the task is moved to the
//     first position among its siblings, this parameter is omitted. Optional.
//  Authorization scope(s):
//   kGTLAuthScopeTasks
// Fetches a GTLTasksTask.
<<<<<<< HEAD
+ (id)queryForTasksMoveWithTasklist:(NSString *)tasklist
                               task:(NSString *)task;
=======
+ (instancetype)queryForTasksMoveWithTasklist:(NSString *)tasklist
                                         task:(NSString *)task;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: tasks.tasks.patch
// Updates the specified task. This method supports patch semantics.
//  Required:
//   tasklist: Task list identifier.
//   task: Task identifier.
//  Authorization scope(s):
//   kGTLAuthScopeTasks
// Fetches a GTLTasksTask.
<<<<<<< HEAD
+ (id)queryForTasksPatchWithObject:(GTLTasksTask *)object
                          tasklist:(NSString *)tasklist
                              task:(NSString *)task;
=======
+ (instancetype)queryForTasksPatchWithObject:(GTLTasksTask *)object
                                    tasklist:(NSString *)tasklist
                                        task:(NSString *)task;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

// Method: tasks.tasks.update
// Updates the specified task.
//  Required:
//   tasklist: Task list identifier.
//   task: Task identifier.
//  Authorization scope(s):
//   kGTLAuthScopeTasks
// Fetches a GTLTasksTask.
<<<<<<< HEAD
+ (id)queryForTasksUpdateWithObject:(GTLTasksTask *)object
                           tasklist:(NSString *)tasklist
                               task:(NSString *)task;
=======
+ (instancetype)queryForTasksUpdateWithObject:(GTLTasksTask *)object
                                     tasklist:(NSString *)tasklist
                                         task:(NSString *)task;
>>>>>>> 0a3d6d635b9db2198f03ed062a7b85824d2930bd

@end
