#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine.Core {

class DeviceChunkDrawCompiled
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine.Core", "DeviceChunkDrawCompiled"));
	}

	template <typename T = uintptr_t> T& compiled() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& offsetApplied() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Parse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAcquire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Draw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MeasureSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Parse(void* source, int32_t width, Il2CppString* id, uintptr_t font, uintptr_t color, uintptr_t align, uintptr_t valign) {
		return ((T (*)(DeviceChunkDrawCompiled*, void*, int32_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x475B724))(this, source, width, id, font, color, align, valign);
	}
	template <typename T = void> T OnAcquire() {
		return ((T (*)(DeviceChunkDrawCompiled*))(Il2CppBase() + 0x475D548))(this);
	}
	template <typename T = void> T OnRelease() {
		return ((T (*)(DeviceChunkDrawCompiled*))(Il2CppBase() + 0x475D754))(this);
	}
	template <typename T = void> T Draw(float deltaTime, Il2CppString* linkText, uintptr_t userData) {
		return ((T (*)(DeviceChunkDrawCompiled*, float, Il2CppString*, uintptr_t))(Il2CppBase() + 0x475D81C))(this, deltaTime, linkText, userData);
	}
	template <typename T = void> T MeasureSize() {
		return ((T (*)(DeviceChunkDrawCompiled*))(Il2CppBase() + 0x475DDD8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnAcquire() {
		return ((T (*)(DeviceChunkDrawCompiled*))(Il2CppBase() + 0x475DEA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRelease() {
		return ((T (*)(DeviceChunkDrawCompiled*))(Il2CppBase() + 0x475DEAC))(this);
	}

};

}
