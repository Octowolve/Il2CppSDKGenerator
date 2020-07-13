#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class TypeInitializationException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "TypeInitializationException"));
	}

	template <typename T = Il2CppString*> T& type_name() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(TypeInitializationException*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D95B2C))(this, info, context);
	}

};

}
