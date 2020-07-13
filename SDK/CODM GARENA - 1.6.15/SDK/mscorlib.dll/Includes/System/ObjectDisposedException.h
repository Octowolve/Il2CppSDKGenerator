#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class ObjectDisposedException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "ObjectDisposedException"));
	}

	template <typename T = Il2CppString*> T& obj_name() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& msg() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(ObjectDisposedException*))(Il2CppBase() + 0x455DC9C))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(ObjectDisposedException*, uintptr_t, uintptr_t))(Il2CppBase() + 0x455DCA4))(this, info, context);
	}

};

}
