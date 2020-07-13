#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioRoomData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioRoomData"));
	}

	template <typename T = int32_t> T& RoomID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& EventOnPawnEnter() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& EventOnPawnLeave() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& EventOnLocalPawnEnter() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& EventOnLocalPawnLeave() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& OnTriggerFirstEnterDelegate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& OnTriggerEnterDelegate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& OnTriggerLastLeaveDelegate() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& OnTriggerLeaveDelegate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnFirstEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnLastExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnManualTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnManualTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetAuxSends() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__ClearAuxSends() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T OnPawnFirstEnter(uintptr_t pOtherPawn) {
		return ((T (*)(AudioRoomData*, uintptr_t))(Il2CppBase() + 0x324D28C))(this, pOtherPawn);
	}
	template <typename T = void> T OnPawnLastExit(uintptr_t pOtherPawn) {
		return ((T (*)(AudioRoomData*, uintptr_t))(Il2CppBase() + 0x324DC1C))(this, pOtherPawn);
	}
	template <typename T = void> T OnManualTriggerEnter(uintptr_t in_other) {
		return ((T (*)(AudioRoomData*, uintptr_t))(Il2CppBase() + 0x324E128))(this, in_other);
	}
	template <typename T = void> T OnManualTriggerExit(uintptr_t in_other) {
		return ((T (*)(AudioRoomData*, uintptr_t))(Il2CppBase() + 0x324E5A0))(this, in_other);
	}
	template <typename T = void> T _SetAuxSends(uintptr_t pOtherPawn) {
		return ((T (*)(AudioRoomData*, uintptr_t))(Il2CppBase() + 0x324D570))(this, pOtherPawn);
	}
	template <typename T = void> T _ClearAuxSends(uintptr_t pOtherPawn) {
		return ((T (*)(AudioRoomData*, uintptr_t))(Il2CppBase() + 0x324DF00))(this, pOtherPawn);
	}

};

}
