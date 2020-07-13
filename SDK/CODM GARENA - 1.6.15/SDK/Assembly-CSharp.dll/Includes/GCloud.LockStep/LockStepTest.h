#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.LockStep {

class LockStepTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.LockStep", "LockStepTest"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCreatingRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFinishedCreated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoomUserCollection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Initialize(Il2CppString* url, uintptr_t initInfo) {
		return ((T (*)(LockStepTest*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x46B152C))(this, url, initInfo);
	}
	template <typename T = bool> T IsCreatingRoom() {
		return ((T (*)(LockStepTest*))(Il2CppBase() + 0x46B1744))(this);
	}
	template <typename T = bool> T IsFinishedCreated() {
		return ((T (*)(LockStepTest*))(Il2CppBase() + 0x46B18BC))(this);
	}
	template <typename T = uintptr_t> T GetRoomUserCollection() {
		return ((T (*)(LockStepTest*))(Il2CppBase() + 0x46B1A34))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LockStepTest*))(Il2CppBase() + 0x46B1C94))(this);
	}
	template <typename T = void> static T gcloud_lockstep_test_init_create_room(Il2CppString* url, Il2CppArray<uintptr_t>* buf, int32_t len) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x46B162C))(0, url, buf, len);
	}
	template <typename T = bool> static T gcloud_lockstep_test_is_creating_room() {
		return ((T (*)(void *))(Il2CppBase() + 0x46B17E4))(0);
	}
	template <typename T = bool> static T gcloud_lockstep_test_finished_created_room() {
		return ((T (*)(void *))(Il2CppBase() + 0x46B195C))(0);
	}
	template <typename T = bool> static T gcloud_lockstep_test_get_room_detail_info(Il2CppArray<uintptr_t>* buf, uintptr_t size) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x46B1B9C))(0, buf, size);
	}
	template <typename T = void> static T gcloud_loackstep_test_update() {
		return ((T (*)(void *))(Il2CppBase() + 0x46B1D34))(0);
	}

};

}
