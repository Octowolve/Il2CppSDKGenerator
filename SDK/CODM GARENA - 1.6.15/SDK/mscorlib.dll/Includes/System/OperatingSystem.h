#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class OperatingSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "OperatingSystem"));
	}

	template <typename T = uintptr_t> T& _platform() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _version() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _servicePack() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Platform() {
		return ((T (*)(OperatingSystem*))(Il2CppBase() + 0x455DEF4))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(OperatingSystem*))(Il2CppBase() + 0x455DEFC))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(OperatingSystem*, uintptr_t, uintptr_t))(Il2CppBase() + 0x455DF98))(this, info, context);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(OperatingSystem*))(Il2CppBase() + 0x455E0B0))(this);
	}

};

}
