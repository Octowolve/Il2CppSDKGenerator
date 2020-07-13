#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GraphicDeviceInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GraphicDeviceInfo"));
	}

	template <typename T = uintptr_t> T& DeviceType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Generation() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& DeviceNum() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& DeviceSubNum() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& TextureRate() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNumberInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExtraFirstNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> static T GetNumberInt(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x36E9848))(0, str);
	}
	template <typename T = bool> static T ExtraFirstNum(Il2CppString* str, uintptr_t strNumPre, uintptr_t NumInStr, uintptr_t numAfter) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x36E9534))(0, str, strNumPre, NumInStr, numAfter);
	}

};

}
