#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace com.tencent.gsdk {

class FpsInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "com.tencent.gsdk", "FpsInfo"));
	}

	template <typename T = float> T& avg() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& max() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& min() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& totalTimes() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& heavyTimes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& lightTimes() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& lightTimes1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& lightTimes2() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& lightTimes3() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& cusTimes() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& fpsdots() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(FpsInfo*))(Il2CppBase() + 0x2D2B8B0))(this);
	}

};

}
