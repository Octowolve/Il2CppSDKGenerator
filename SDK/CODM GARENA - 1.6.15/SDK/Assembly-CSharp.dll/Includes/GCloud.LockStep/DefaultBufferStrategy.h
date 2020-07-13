#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.LockStep {

class DefaultBufferStrategy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.LockStep", "DefaultBufferStrategy"));
	}

	template <typename T = uintptr_t> T& Steper() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& frame() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPopFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_Steper() {
		return ((T (*)(DefaultBufferStrategy*))(Il2CppBase() + 0x46AAE48))(this);
	}
	template <typename T = void> T set_Steper(uintptr_t value) {
		return ((T (*)(DefaultBufferStrategy*, uintptr_t))(Il2CppBase() + 0x46AAE50))(this, value);
	}
	template <typename T = bool> T OnInput(Il2CppArray<uintptr_t>* data, int32_t len, bool rawUdp, uintptr_t flag) {
		return ((T (*)(DefaultBufferStrategy*, Il2CppArray<uintptr_t>*, int32_t, bool, uintptr_t))(Il2CppBase() + 0x46AAE58))(this, data, len, rawUdp, flag);
	}
	template <typename T = uintptr_t> T OnPopFrame() {
		return ((T (*)(DefaultBufferStrategy*))(Il2CppBase() + 0x46AAFBC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DefaultBufferStrategy*))(Il2CppBase() + 0x46AB204))(this);
	}

};

}
