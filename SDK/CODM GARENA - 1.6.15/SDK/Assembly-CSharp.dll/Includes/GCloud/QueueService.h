#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class QueueService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "QueueService"));
	}

	template <typename T = uintptr_t> T& QueueStatusEvent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& QueueFinishedEvent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_QueueStatusEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_QueueStatusEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_QueueFinishedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_QueueFinishedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JoinQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExitQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQueueStatusProc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQueueFinishedProc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T add_QueueStatusEvent(uintptr_t value) {
		return ((T (*)(QueueService*, uintptr_t))(Il2CppBase() + 0x4435508))(this, value);
	}
	template <typename T = void> T remove_QueueStatusEvent(uintptr_t value) {
		return ((T (*)(QueueService*, uintptr_t))(Il2CppBase() + 0x4435700))(this, value);
	}
	template <typename T = void> T add_QueueFinishedEvent(uintptr_t value) {
		return ((T (*)(QueueService*, uintptr_t))(Il2CppBase() + 0x44358F8))(this, value);
	}
	template <typename T = void> T remove_QueueFinishedEvent(uintptr_t value) {
		return ((T (*)(QueueService*, uintptr_t))(Il2CppBase() + 0x4435AF0))(this, value);
	}
	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4435CE8))(0);
	}
	template <typename T = bool> T Initialize(uintptr_t initInfo) {
		return ((T (*)(QueueService*, uintptr_t))(Il2CppBase() + 0x4435DA8))(this, initInfo);
	}
	template <typename T = bool> T JoinQueue(Il2CppString* zoneId, Il2CppString* queflag) {
		return ((T (*)(QueueService*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4435FA0))(this, zoneId, queflag);
	}
	template <typename T = bool> T ExitQueue() {
		return ((T (*)(QueueService*))(Il2CppBase() + 0x4436194))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(QueueService*))(Il2CppBase() + 0x443630C))(this);
	}
	template <typename T = void> T OnQueueStatusProc(int32_t error, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(QueueService*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x443647C))(this, error, data);
	}
	template <typename T = void> T OnQueueFinishedProc(int32_t error, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(QueueService*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x443681C))(this, error, data);
	}
	template <typename T = bool> static T gcloud_queue_initialize(Il2CppArray<uintptr_t>* data, int32_t len) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4435EA8))(0, data, len);
	}
	template <typename T = bool> static T gcloud_queue_join(Il2CppString* zondId, Il2CppString* queflag) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4436064))(0, zondId, queflag);
	}
	template <typename T = bool> static T gcloud_queue_exit() {
		return ((T (*)(void *))(Il2CppBase() + 0x4436234))(0);
	}
	template <typename T = void> static T gcloud_queue_update() {
		return ((T (*)(void *))(Il2CppBase() + 0x44363AC))(0);
	}

};

}
