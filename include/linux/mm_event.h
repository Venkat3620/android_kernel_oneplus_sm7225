/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _LINUX_MM_EVENT_H
#define _LINUX_MM_EVENT_H

enum mm_event_type {
	MM_MIN_FAULT = 0,
	MM_MAJ_FAULT = 1,
	MM_READ_IO = 2,
	MM_COMPACTION = 3,
	MM_RECLAIM = 4,
	MM_SWP_FAULT = 5,
	MM_KERN_ALLOC = 6,
	MM_TYPE_NUM = 7,
};

struct mm_event_task {
	unsigned int count;
	unsigned int max_lat;
	u64 accm_lat;
} __attribute__ ((packed));

#endif
