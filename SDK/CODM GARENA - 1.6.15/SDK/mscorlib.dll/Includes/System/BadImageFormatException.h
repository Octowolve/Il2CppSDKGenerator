#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class BadImageFormatException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "BadImageFormatException"));
	}

	template <typename T = Il2CppString*> T& fileName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& fusionLog() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(BadImageFormatException*))(Il2CppBase() + 0x3627C88))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(BadImageFormatException*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3627E50))(this, info, context);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(BadImageFormatException*))(Il2CppBase() + 0x3627F40))(this);
	}

};

}
