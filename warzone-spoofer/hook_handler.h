#pragma once
#include <ntifs.h>
#include <ntdddisk.h>
#include "defines.h"

namespace hook_handler
{
	extern PDRIVER_DISPATCH original_dispatch;
	NTSTATUS hooked_device_control(PDEVICE_OBJECT pDeviceObject, PIRP Irp);
}