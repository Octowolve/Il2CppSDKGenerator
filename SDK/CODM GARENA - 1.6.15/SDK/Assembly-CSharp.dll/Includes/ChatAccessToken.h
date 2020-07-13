#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatAccessToken
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatAccessToken"));
	}

	template <typename T = Il2CppString*> T& domain() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& ip() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& port() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& secret() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHashCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(ChatAccessToken*, uintptr_t))(Il2CppBase() + 0x33CA4C8))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ChatAccessToken*))(Il2CppBase() + 0x33CA63C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ChatAccessToken*))(Il2CppBase() + 0x33CA6E4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Equals(uintptr_t P0) {
		return ((T (*)(ChatAccessToken*, uintptr_t))(Il2CppBase() + 0x33CAAC8))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetHashCode() {
		return ((T (*)(ChatAccessToken*))(Il2CppBase() + 0x33CAAD0))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(ChatAccessToken*))(Il2CppBase() + 0x33CAAD8))(this);
	}

};

}
