#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class Authorization
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "Authorization"));
	}

	template <typename T = Il2CppString*> T& token() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& complete() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& connectionGroupId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& module() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(Authorization*))(Il2CppBase() + 0x42B6B34))(this);
	}
	template <typename T = bool> T get_Complete() {
		return ((T (*)(Authorization*))(Il2CppBase() + 0x42B6B3C))(this);
	}
	template <typename T = uintptr_t> T get_Module() {
		return ((T (*)(Authorization*))(Il2CppBase() + 0x42B6B44))(this);
	}
	template <typename T = void> T set_Module(uintptr_t value) {
		return ((T (*)(Authorization*, uintptr_t))(Il2CppBase() + 0x42B6460))(this, value);
	}

};

}
