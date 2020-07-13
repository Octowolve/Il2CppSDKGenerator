#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class Weight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "Weight"));
	}

	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& floatValue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& curve() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& tooltip() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = float> T GetValue(float param) {
		return ((T (*)(Weight*, float))(Il2CppBase() + 0x4F7C9F8))(this, param);
	}

};

}
