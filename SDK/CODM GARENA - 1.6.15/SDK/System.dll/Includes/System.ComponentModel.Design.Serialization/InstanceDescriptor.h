#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel.Design.Serialization {

class InstanceDescriptor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel.Design.Serialization", "InstanceDescriptor"));
	}

	template <typename T = uintptr_t> T& member() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& arguments() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isComplete() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T ValidateMember(uintptr_t member, uintptr_t arguments) {
		return ((T (*)(InstanceDescriptor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA8E74))(this, member, arguments);
	}
	template <typename T = uintptr_t> T Invoke() {
		return ((T (*)(InstanceDescriptor*))(Il2CppBase() + 0x4CA9424))(this);
	}

};

}
