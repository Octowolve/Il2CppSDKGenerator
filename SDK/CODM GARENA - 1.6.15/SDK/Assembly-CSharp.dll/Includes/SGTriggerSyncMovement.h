#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SGTriggerSyncMovement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SGTriggerSyncMovement"));
	}

	template <typename T = bool> T& syncHorizontal() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& syncVertical() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = Il2CppString*> T& sceneObjTag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& sceneObjOffset() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppVector3>*> T& targets() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerStay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(SGTriggerSyncMovement*))(Il2CppBase() + 0x38D63A8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SGTriggerSyncMovement*))(Il2CppBase() + 0x38D6938))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(SGTriggerSyncMovement*, uintptr_t))(Il2CppBase() + 0x38D6A0C))(this, other);
	}
	template <typename T = void> T OnTriggerStay(uintptr_t other) {
		return ((T (*)(SGTriggerSyncMovement*, uintptr_t))(Il2CppBase() + 0x38D6ABC))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(SGTriggerSyncMovement*, uintptr_t))(Il2CppBase() + 0x38D6C58))(this, other);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(SGTriggerSyncMovement*))(Il2CppBase() + 0x38D6D50))(this);
	}

};

}
