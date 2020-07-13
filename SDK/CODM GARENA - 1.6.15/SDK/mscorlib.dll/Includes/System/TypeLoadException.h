#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class TypeLoadException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "TypeLoadException"));
	}

	template <typename T = int32_t> static T& Result() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& className() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& assemblyName() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(TypeLoadException*))(Il2CppBase() + 0x4D95D30))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(TypeLoadException*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D95F04))(this, info, context);
	}

};

}
