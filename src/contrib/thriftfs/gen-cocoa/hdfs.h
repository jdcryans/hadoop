/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 */

#import <Cocoa/Cocoa.h>

#import <TProtocol.h>
#import <TApplicationException.h>
#import <TProtocolUtil.h>


enum DatanodeReportType {
  DatanodeReportType_ALL_DATANODES = 1,
  DatanodeReportType_LIVE_DATANODES = 2,
  DatanodeReportType_DEAD_DATANODES = 3
};

enum DatanodeState {
  DatanodeState_NORMAL_STATE = 1,
  DatanodeState_DECOMMISSION_INPROGRESS = 2,
  DatanodeState_DECOMMISSIONED = 3
};

@interface RequestContext : NSObject {
  NSDictionary * __confOptions;

  BOOL __confOptions_isset;
}

- (id) initWithConfOptions: (NSDictionary *) confOptions;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (NSDictionary *) confOptions;
- (void) setConfOptions: (NSDictionary *) confOptions;
- (BOOL) confOptionsIsSet;

@end

@interface DatanodeInfo : NSObject {
  NSString * __name;
  NSString * __storageID;
  NSString * __host;
  int32_t __thriftPort;
  int64_t __capacity;
  int64_t __dfsUsed;
  int64_t __remaining;
  int32_t __xceiverCount;
  int __state;

  BOOL __name_isset;
  BOOL __storageID_isset;
  BOOL __host_isset;
  BOOL __thriftPort_isset;
  BOOL __capacity_isset;
  BOOL __dfsUsed_isset;
  BOOL __remaining_isset;
  BOOL __xceiverCount_isset;
  BOOL __state_isset;
}

- (id) initWithName: (NSString *) name storageID: (NSString *) storageID host: (NSString *) host thriftPort: (int32_t) thriftPort capacity: (int64_t) capacity dfsUsed: (int64_t) dfsUsed remaining: (int64_t) remaining xceiverCount: (int32_t) xceiverCount state: (int) state;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (NSString *) name;
- (void) setName: (NSString *) name;
- (BOOL) nameIsSet;

- (NSString *) storageID;
- (void) setStorageID: (NSString *) storageID;
- (BOOL) storageIDIsSet;

- (NSString *) host;
- (void) setHost: (NSString *) host;
- (BOOL) hostIsSet;

- (int32_t) thriftPort;
- (void) setThriftPort: (int32_t) thriftPort;
- (BOOL) thriftPortIsSet;

- (int64_t) capacity;
- (void) setCapacity: (int64_t) capacity;
- (BOOL) capacityIsSet;

- (int64_t) dfsUsed;
- (void) setDfsUsed: (int64_t) dfsUsed;
- (BOOL) dfsUsedIsSet;

- (int64_t) remaining;
- (void) setRemaining: (int64_t) remaining;
- (BOOL) remainingIsSet;

- (int32_t) xceiverCount;
- (void) setXceiverCount: (int32_t) xceiverCount;
- (BOOL) xceiverCountIsSet;

- (int) state;
- (void) setState: (int) state;
- (BOOL) stateIsSet;

@end

@interface Block : NSObject {
  int64_t __blockId;
  NSString * __path;
  int64_t __numBytes;
  int64_t __genStamp;
  int64_t __startOffset;
  NSArray * __nodes;

  BOOL __blockId_isset;
  BOOL __path_isset;
  BOOL __numBytes_isset;
  BOOL __genStamp_isset;
  BOOL __startOffset_isset;
  BOOL __nodes_isset;
}

- (id) initWithBlockId: (int64_t) blockId path: (NSString *) path numBytes: (int64_t) numBytes genStamp: (int64_t) genStamp startOffset: (int64_t) startOffset nodes: (NSArray *) nodes;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (int64_t) blockId;
- (void) setBlockId: (int64_t) blockId;
- (BOOL) blockIdIsSet;

- (NSString *) path;
- (void) setPath: (NSString *) path;
- (BOOL) pathIsSet;

- (int64_t) numBytes;
- (void) setNumBytes: (int64_t) numBytes;
- (BOOL) numBytesIsSet;

- (int64_t) genStamp;
- (void) setGenStamp: (int64_t) genStamp;
- (BOOL) genStampIsSet;

- (int64_t) startOffset;
- (void) setStartOffset: (int64_t) startOffset;
- (BOOL) startOffsetIsSet;

- (NSArray *) nodes;
- (void) setNodes: (NSArray *) nodes;
- (BOOL) nodesIsSet;

@end

@interface Stat : NSObject {
  NSString * __path;
  BOOL __isDir;
  int64_t __atime;
  int64_t __mtime;
  int16_t __perms;
  NSString * __owner;
  NSString * __group;
  int64_t __fileCount;
  int64_t __directoryCount;
  int64_t __quota;
  int64_t __spaceConsumed;
  int64_t __spaceQuota;
  int64_t __length;
  int64_t __blockSize;
  int16_t __replication;

  BOOL __path_isset;
  BOOL __isDir_isset;
  BOOL __atime_isset;
  BOOL __mtime_isset;
  BOOL __perms_isset;
  BOOL __owner_isset;
  BOOL __group_isset;
  BOOL __fileCount_isset;
  BOOL __directoryCount_isset;
  BOOL __quota_isset;
  BOOL __spaceConsumed_isset;
  BOOL __spaceQuota_isset;
  BOOL __length_isset;
  BOOL __blockSize_isset;
  BOOL __replication_isset;
}

- (id) initWithPath: (NSString *) path isDir: (BOOL) isDir atime: (int64_t) atime mtime: (int64_t) mtime perms: (int16_t) perms owner: (NSString *) owner group: (NSString *) group fileCount: (int64_t) fileCount directoryCount: (int64_t) directoryCount quota: (int64_t) quota spaceConsumed: (int64_t) spaceConsumed spaceQuota: (int64_t) spaceQuota length: (int64_t) length blockSize: (int64_t) blockSize replication: (int16_t) replication;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (NSString *) path;
- (void) setPath: (NSString *) path;
- (BOOL) pathIsSet;

- (BOOL) isDir;
- (void) setIsDir: (BOOL) isDir;
- (BOOL) isDirIsSet;

- (int64_t) atime;
- (void) setAtime: (int64_t) atime;
- (BOOL) atimeIsSet;

- (int64_t) mtime;
- (void) setMtime: (int64_t) mtime;
- (BOOL) mtimeIsSet;

- (int16_t) perms;
- (void) setPerms: (int16_t) perms;
- (BOOL) permsIsSet;

- (NSString *) owner;
- (void) setOwner: (NSString *) owner;
- (BOOL) ownerIsSet;

- (NSString *) group;
- (void) setGroup: (NSString *) group;
- (BOOL) groupIsSet;

- (int64_t) fileCount;
- (void) setFileCount: (int64_t) fileCount;
- (BOOL) fileCountIsSet;

- (int64_t) directoryCount;
- (void) setDirectoryCount: (int64_t) directoryCount;
- (BOOL) directoryCountIsSet;

- (int64_t) quota;
- (void) setQuota: (int64_t) quota;
- (BOOL) quotaIsSet;

- (int64_t) spaceConsumed;
- (void) setSpaceConsumed: (int64_t) spaceConsumed;
- (BOOL) spaceConsumedIsSet;

- (int64_t) spaceQuota;
- (void) setSpaceQuota: (int64_t) spaceQuota;
- (BOOL) spaceQuotaIsSet;

- (int64_t) length;
- (void) setLength: (int64_t) length;
- (BOOL) lengthIsSet;

- (int64_t) blockSize;
- (void) setBlockSize: (int64_t) blockSize;
- (BOOL) blockSizeIsSet;

- (int16_t) replication;
- (void) setReplication: (int16_t) replication;
- (BOOL) replicationIsSet;

@end

@interface UpgradeStatusReport : NSObject {
  int32_t __version;
  int16_t __percentComplete;
  BOOL __finalized;
  NSString * __statusText;

  BOOL __version_isset;
  BOOL __percentComplete_isset;
  BOOL __finalized_isset;
  BOOL __statusText_isset;
}

- (id) initWithVersion: (int32_t) version percentComplete: (int16_t) percentComplete finalized: (BOOL) finalized statusText: (NSString *) statusText;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (int32_t) version;
- (void) setVersion: (int32_t) version;
- (BOOL) versionIsSet;

- (int16_t) percentComplete;
- (void) setPercentComplete: (int16_t) percentComplete;
- (BOOL) percentCompleteIsSet;

- (BOOL) finalized;
- (void) setFinalized: (BOOL) finalized;
- (BOOL) finalizedIsSet;

- (NSString *) statusText;
- (void) setStatusText: (NSString *) statusText;
- (BOOL) statusTextIsSet;

@end

@interface DFSHealthReport : NSObject {
  int64_t __bytesTotal;
  int64_t __bytesUsed;
  int64_t __bytesRemaining;
  int64_t __bytesNonDfs;
  int32_t __numLiveDataNodes;
  int32_t __numDeadDataNodes;
  UpgradeStatusReport * __upgradeStatus;

  BOOL __bytesTotal_isset;
  BOOL __bytesUsed_isset;
  BOOL __bytesRemaining_isset;
  BOOL __bytesNonDfs_isset;
  BOOL __numLiveDataNodes_isset;
  BOOL __numDeadDataNodes_isset;
  BOOL __upgradeStatus_isset;
}

- (id) initWithBytesTotal: (int64_t) bytesTotal bytesUsed: (int64_t) bytesUsed bytesRemaining: (int64_t) bytesRemaining bytesNonDfs: (int64_t) bytesNonDfs numLiveDataNodes: (int32_t) numLiveDataNodes numDeadDataNodes: (int32_t) numDeadDataNodes upgradeStatus: (UpgradeStatusReport *) upgradeStatus;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (int64_t) bytesTotal;
- (void) setBytesTotal: (int64_t) bytesTotal;
- (BOOL) bytesTotalIsSet;

- (int64_t) bytesUsed;
- (void) setBytesUsed: (int64_t) bytesUsed;
- (BOOL) bytesUsedIsSet;

- (int64_t) bytesRemaining;
- (void) setBytesRemaining: (int64_t) bytesRemaining;
- (BOOL) bytesRemainingIsSet;

- (int64_t) bytesNonDfs;
- (void) setBytesNonDfs: (int64_t) bytesNonDfs;
- (BOOL) bytesNonDfsIsSet;

- (int32_t) numLiveDataNodes;
- (void) setNumLiveDataNodes: (int32_t) numLiveDataNodes;
- (BOOL) numLiveDataNodesIsSet;

- (int32_t) numDeadDataNodes;
- (void) setNumDeadDataNodes: (int32_t) numDeadDataNodes;
- (BOOL) numDeadDataNodesIsSet;

- (UpgradeStatusReport *) upgradeStatus;
- (void) setUpgradeStatus: (UpgradeStatusReport *) upgradeStatus;
- (BOOL) upgradeStatusIsSet;

@end

@interface VersionInfo : NSObject {
  NSString * __version;
  NSString * __revision;
  NSString * __branch;
  NSString * __compileDate;
  NSString * __compilingUser;
  NSString * __url;
  NSString * __buildVersion;

  BOOL __version_isset;
  BOOL __revision_isset;
  BOOL __branch_isset;
  BOOL __compileDate_isset;
  BOOL __compilingUser_isset;
  BOOL __url_isset;
  BOOL __buildVersion_isset;
}

- (id) initWithVersion: (NSString *) version revision: (NSString *) revision branch: (NSString *) branch compileDate: (NSString *) compileDate compilingUser: (NSString *) compilingUser url: (NSString *) url buildVersion: (NSString *) buildVersion;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (NSString *) version;
- (void) setVersion: (NSString *) version;
- (BOOL) versionIsSet;

- (NSString *) revision;
- (void) setRevision: (NSString *) revision;
- (BOOL) revisionIsSet;

- (NSString *) branch;
- (void) setBranch: (NSString *) branch;
- (BOOL) branchIsSet;

- (NSString *) compileDate;
- (void) setCompileDate: (NSString *) compileDate;
- (BOOL) compileDateIsSet;

- (NSString *) compilingUser;
- (void) setCompilingUser: (NSString *) compilingUser;
- (BOOL) compilingUserIsSet;

- (NSString *) url;
- (void) setUrl: (NSString *) url;
- (BOOL) urlIsSet;

- (NSString *) buildVersion;
- (void) setBuildVersion: (NSString *) buildVersion;
- (BOOL) buildVersionIsSet;

@end

@interface IOException : NSException {
  NSString * __msg;
  NSString * __stack;
  NSString * __clazz;

  BOOL __msg_isset;
  BOOL __stack_isset;
  BOOL __clazz_isset;
}

- (id) initWithMsg: (NSString *) msg stack: (NSString *) stack clazz: (NSString *) clazz;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (NSString *) msg;
- (void) setMsg: (NSString *) msg;
- (BOOL) msgIsSet;

- (NSString *) stack;
- (void) setStack: (NSString *) stack;
- (BOOL) stackIsSet;

- (NSString *) clazz;
- (void) setClazz: (NSString *) clazz;
- (BOOL) clazzIsSet;

@end

@interface QuotaException : NSException {
  NSString * __msg;
  NSString * __stack;

  BOOL __msg_isset;
  BOOL __stack_isset;
}

- (id) initWithMsg: (NSString *) msg stack: (NSString *) stack;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (NSString *) msg;
- (void) setMsg: (NSString *) msg;
- (BOOL) msgIsSet;

- (NSString *) stack;
- (void) setStack: (NSString *) stack;
- (BOOL) stackIsSet;

@end

@interface BlockData : NSObject {
  int32_t __crc;
  int32_t __length;
  NSData * __data;

  BOOL __crc_isset;
  BOOL __length_isset;
  BOOL __data_isset;
}

- (id) initWithCrc: (int32_t) crc length: (int32_t) length data: (NSData *) data;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (int32_t) crc;
- (void) setCrc: (int32_t) crc;
- (BOOL) crcIsSet;

- (int32_t) length;
- (void) setLength: (int32_t) length;
- (BOOL) lengthIsSet;

- (NSData *) data;
- (void) setData: (NSData *) data;
- (BOOL) dataIsSet;

@end

@protocol HadoopServiceBase <NSObject>
- (VersionInfo *) getVersionInfo: (RequestContext *) ctx;  // throws TException
@end

@interface HadoopServiceBaseClient : NSObject <HadoopServiceBase> {
  id <TProtocol> inProtocol;
  id <TProtocol> outProtocol;
}
- (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@protocol Namenode <NSObject>
- (void) chmod: (RequestContext *) ctx : (NSString *) path : (int16_t) perms;  // throws IOException *, TException
- (void) chown: (RequestContext *) ctx : (NSString *) path : (NSString *) owner : (NSString *) group;  // throws IOException *, TException
- (NSArray *) df: (RequestContext *) ctx;  // throws IOException *, TException
- (void) enterSafeMode: (RequestContext *) ctx;  // throws IOException *, TException
- (NSArray *) getBlocks: (RequestContext *) ctx : (NSString *) path : (int64_t) offset : (int64_t) length;  // throws IOException *, TException
- (NSArray *) getDatanodeReport: (RequestContext *) ctx : (int) type;  // throws IOException *, TException
- (DFSHealthReport *) getHealthReport: (RequestContext *) ctx;  // throws IOException *, TException
- (int64_t) getPreferredBlockSize: (RequestContext *) ctx : (NSString *) path;  // throws IOException *, TException
- (BOOL) isInSafeMode: (RequestContext *) ctx;  // throws IOException *, TException
- (void) leaveSafeMode: (RequestContext *) ctx;  // throws IOException *, TException
- (NSArray *) ls: (RequestContext *) ctx : (NSString *) path;  // throws IOException *, TException
- (BOOL) mkdirhier: (RequestContext *) ctx : (NSString *) path : (int16_t) perms;  // throws IOException *, TException
- (void) refreshNodes: (RequestContext *) ctx;  // throws IOException *, TException
- (BOOL) rename: (RequestContext *) ctx : (NSString *) path : (NSString *) newPath;  // throws IOException *, TException
- (void) reportBadBlocks: (RequestContext *) ctx : (NSArray *) blocks;  // throws IOException *, TException
- (Stat *) stat: (RequestContext *) ctx : (NSString *) path;  // throws IOException *, TException
- (void) setQuota: (RequestContext *) ctx : (NSString *) path : (int64_t) namespaceQuota : (int64_t) diskspaceQuota;  // throws IOException *, TException
- (BOOL) setReplication: (RequestContext *) ctx : (NSString *) path : (int16_t) replication;  // throws IOException *, TException
- (BOOL) unlink: (RequestContext *) ctx : (NSString *) path : (BOOL) recursive;  // throws IOException *, TException
- (void) utime: (RequestContext *) ctx : (NSString *) path : (int64_t) atime : (int64_t) mtime;  // throws IOException *, TException
- (void) datanodeUp: (NSString *) name : (NSString *) storage : (int32_t) thriftPort;  // throws TException
- (void) datanodeDown: (NSString *) name : (NSString *) storage : (int32_t) thriftPort;  // throws TException
@end

@interface NamenodeClient : NSObject <Namenode> {
id <TProtocol> inProtocol;
id <TProtocol> outProtocol;
}
- (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@protocol Datanode <NSObject>
- (BlockData *) readBlock: (RequestContext *) ctx : (Block *) block : (int64_t) offset : (int32_t) length;  // throws IOException *, TException
@end

@interface DatanodeClient : NSObject <Datanode> {
id <TProtocol> inProtocol;
id <TProtocol> outProtocol;
}
- (id) initWithProtocol: (id <TProtocol>) protocol;
- (id) initWithInProtocol: (id <TProtocol>) inProtocol outProtocol: (id <TProtocol>) outProtocol;
@end

@interface hdfsConstants {
}
+ (int32_t) UNKNOWN_THRIFT_PORT;
+ (int64_t) QUOTA_DONT_SET;
+ (int64_t) QUOTA_RESET;
@end
