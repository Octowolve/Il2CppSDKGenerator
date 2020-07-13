#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine.Core {

class DeviceChunk
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine.Core", "DeviceChunk"));
	}

	template <typename T = uintptr_t> T& Rect() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Font() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& ExtraSpace() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAcquire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Contains() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = int32_t> T get_TotalWidth() {
		return ((T (*)(DeviceChunk*))(Il2CppBase() + 0x4757654))(this);
	}
	template <typename T = int32_t> T get_TotalHeight() {
		return ((T (*)(DeviceChunk*))(Il2CppBase() + 0x4757664))(this);
	}
	template <typename T = void> T Draw(float deltaTime, Il2CppString* linkText, uintptr_t userData) {
		return ((T (*)(DeviceChunk*, float, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, deltaTime, linkText, userData);
	}
	template <typename T = void> T OnAcquire() {
		return ((T (*)(DeviceChunk*))(Il2CppBase() + 0x475766C))(this);
	}
	template <typename T = void> T OnRelease() {
		return ((T (*)(DeviceChunk*))(Il2CppBase() + 0x4757704))(this);
	}
	template <typename T = void> T MeasureSize() {
		return ((T (*)(DeviceChunk*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T Contains(int32_t x, int32_t y) {
		return ((T (*)(DeviceChunk*, int32_t, int32_t))(Il2CppBase() + 0x475779C))(this, x, y);
	}

};

}
