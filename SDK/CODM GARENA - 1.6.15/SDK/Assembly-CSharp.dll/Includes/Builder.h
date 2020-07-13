#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Builder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Builder"));
	}

	template <typename T = Il2CppString*> T& identifier() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& email() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& authToken() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T setName(Il2CppString* name) {
		return ((T (*)(Builder*, Il2CppString*))(Il2CppBase() + 0x4752E08))(this, name);
	}
	template <typename T = uintptr_t> T setAuthToken(Il2CppString* authToken) {
		return ((T (*)(Builder*, Il2CppString*))(Il2CppBase() + 0x4752E10))(this, authToken);
	}
	template <typename T = uintptr_t> T build() {
		return ((T (*)(Builder*))(Il2CppBase() + 0x4752E18))(this);
	}

};

}
