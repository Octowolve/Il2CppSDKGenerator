#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class MethodWrap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "MethodWrap"));
	}

	template <typename T = Il2CppString*> T& methodName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& overloads() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& forceCheck() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T Call(uintptr_t L) {
		return ((T (*)(MethodWrap*, uintptr_t))(Il2CppBase() + 0xF47A24))(this, L);
	}

};

}
