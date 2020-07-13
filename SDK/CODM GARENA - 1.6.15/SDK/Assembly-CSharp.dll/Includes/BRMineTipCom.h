#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRMineTipCom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRMineTipCom"));
	}

	template <typename T = bool> T& insideTriggerVolume() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& distance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerStay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPointInViewPort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T get_canTrigger() {
		return ((T (*)(BRMineTipCom*))(Il2CppBase() + 0x52F64C0))(this);
	}
	template <typename T = float> T get_Distance() {
		return ((T (*)(BRMineTipCom*))(Il2CppBase() + 0x52F6638))(this);
	}
	template <typename T = bool> T IsLocalPlayer(uintptr_t other) {
		return ((T (*)(BRMineTipCom*, uintptr_t))(Il2CppBase() + 0x52F6640))(this, other);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(BRMineTipCom*, uintptr_t))(Il2CppBase() + 0x52F6950))(this, other);
	}
	template <typename T = void> T OnTriggerStay(uintptr_t other) {
		return ((T (*)(BRMineTipCom*, uintptr_t))(Il2CppBase() + 0x52F6AA8))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(BRMineTipCom*, uintptr_t))(Il2CppBase() + 0x52F6C00))(this, other);
	}
	template <typename T = bool> T IsPointInViewPort(uintptr_t InCamera) {
		return ((T (*)(BRMineTipCom*, uintptr_t))(Il2CppBase() + 0x52F6D58))(this, InCamera);
	}

};

}
