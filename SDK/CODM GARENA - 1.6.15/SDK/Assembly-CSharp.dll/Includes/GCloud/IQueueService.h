#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class IQueueService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "IQueueService"));
	}


	template <typename T = void> T add_QueueStatusEvent(uintptr_t value) {
		return ((T (*)(IQueueService*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_QueueStatusEvent(uintptr_t value) {
		return ((T (*)(IQueueService*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_QueueFinishedEvent(uintptr_t value) {
		return ((T (*)(IQueueService*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_QueueFinishedEvent(uintptr_t value) {
		return ((T (*)(IQueueService*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T Initialize(uintptr_t initInfo) {
		return ((T (*)(IQueueService*, uintptr_t))(Il2CppBase() + 0x0))(this, initInfo);
	}
	template <typename T = bool> T JoinQueue(Il2CppString* zoneId, Il2CppString* queflag) {
		return ((T (*)(IQueueService*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, zoneId, queflag);
	}
	template <typename T = bool> T ExitQueue() {
		return ((T (*)(IQueueService*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(IQueueService*))(Il2CppBase() + 0x0))(this);
	}

};

}
