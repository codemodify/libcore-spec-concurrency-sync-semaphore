#ifndef __libcore_concurrency_sync_semaphore__
#define __libcore_concurrency_sync_semaphore__

#include <libcore-types/types.h>

typedef struct {
	pointer houseKeeping;  // private

} * Semaphore;

extern void SemaphoreCreate(Semaphore semaphore, uint32 count);
extern void SemaphoreLock(Semaphore semaphore);
extern void SemaphoreUnlock(Semaphore semaphore);
extern void SemaphoreDelete(Semaphore semaphore);

#endif