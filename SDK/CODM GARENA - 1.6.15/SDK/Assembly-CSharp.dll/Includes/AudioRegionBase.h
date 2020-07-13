#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioRegionBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioRegionBase"));
	}

	template <typename T = bool> T& PlayInLowQuality() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& PlayInMediaQuality() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& PlayInHighQuality() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = Il2CppString*> T& EnterRegionSound() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LeaveRegionSound() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& LocalPlayerOnly() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& StateToSet() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLeave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T DoEnter(uintptr_t p) {
		return ((T (*)(AudioRegionBase*, uintptr_t))(Il2CppBase() + 0x324C7F8))(this, p);
	}
	template <typename T = void> T DoLeave(uintptr_t p) {
		return ((T (*)(AudioRegionBase*, uintptr_t))(Il2CppBase() + 0x324CB04))(this, p);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(AudioRegionBase*, uintptr_t))(Il2CppBase() + 0x324CE08))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(AudioRegionBase*, uintptr_t))(Il2CppBase() + 0x324CFF8))(this, other);
	}

};

}
