#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Policy {

class Hash
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Policy", "Hash"));
	}

	template <typename T = uintptr_t> T& assembly() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& data() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(Hash*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4281450))(this, info, context);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Hash*))(Il2CppBase() + 0x4281764))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetData() {
		return ((T (*)(Hash*))(Il2CppBase() + 0x4281540))(this);
	}

};

}
