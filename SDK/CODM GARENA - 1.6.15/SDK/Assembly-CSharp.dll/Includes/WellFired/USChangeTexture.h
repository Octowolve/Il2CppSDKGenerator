#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USChangeTexture
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "USChangeTexture"));
	}

	template <typename T = uintptr_t> T& newTexture() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& previousTexture() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UndoEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T FireEvent() {
		return ((T (*)(USChangeTexture*))(Il2CppBase() + 0x4A396DC))(this);
	}
	template <typename T = void> T ProcessEvent(float deltaTime) {
		return ((T (*)(USChangeTexture*, float))(Il2CppBase() + 0x4A399FC))(this, deltaTime);
	}
	template <typename T = void> T StopEvent() {
		return ((T (*)(USChangeTexture*))(Il2CppBase() + 0x4A39A9C))(this);
	}
	template <typename T = void> T UndoEvent() {
		return ((T (*)(USChangeTexture*))(Il2CppBase() + 0x4A39B4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopEvent() {
		return ((T (*)(USChangeTexture*))(Il2CppBase() + 0x4A39D6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UndoEvent() {
		return ((T (*)(USChangeTexture*))(Il2CppBase() + 0x4A39D74))(this);
	}

};

}
