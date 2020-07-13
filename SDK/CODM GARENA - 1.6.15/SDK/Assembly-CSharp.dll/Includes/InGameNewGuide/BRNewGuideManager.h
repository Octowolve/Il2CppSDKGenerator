#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class BRNewGuideManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "BRNewGuideManager"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ItemOverTimeDone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ItemDone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ItemInterrupt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BRNewGuideManager*))(Il2CppBase() + 0x3168BD4))(this);
	}
	template <typename T = void> T ItemOverTimeDone(uintptr_t item) {
		return ((T (*)(BRNewGuideManager*, uintptr_t))(Il2CppBase() + 0x3169150))(this, item);
	}
	template <typename T = void> T ItemDone(uintptr_t item) {
		return ((T (*)(BRNewGuideManager*, uintptr_t))(Il2CppBase() + 0x31694C8))(this, item);
	}
	template <typename T = void> T ItemInterrupt(uintptr_t item) {
		return ((T (*)(BRNewGuideManager*, uintptr_t))(Il2CppBase() + 0x3169880))(this, item);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRNewGuideManager*))(Il2CppBase() + 0x3169B68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ItemOverTimeDone(uintptr_t P0) {
		return ((T (*)(BRNewGuideManager*, uintptr_t))(Il2CppBase() + 0x3169B6C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ItemDone(uintptr_t P0) {
		return ((T (*)(BRNewGuideManager*, uintptr_t))(Il2CppBase() + 0x3169B70))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ItemInterrupt(uintptr_t P0) {
		return ((T (*)(BRNewGuideManager*, uintptr_t))(Il2CppBase() + 0x3169CF0))(this, P0);
	}

};

}
