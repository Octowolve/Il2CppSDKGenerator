#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Messaging {

class LogicalCallContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "LogicalCallContext"));
	}

	template <typename T = uintptr_t> T& _data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _remotingData() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T get_HasInfo() {
		return ((T (*)(LogicalCallContext*))(Il2CppBase() + 0x4B36AF0))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(LogicalCallContext*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B36B30))(this, info, context);
	}
	template <typename T = void> T SetData(Il2CppString* name, uintptr_t data) {
		return ((T (*)(LogicalCallContext*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4B36A1C))(this, name, data);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(LogicalCallContext*))(Il2CppBase() + 0x4B36F8C))(this);
	}

};

}
