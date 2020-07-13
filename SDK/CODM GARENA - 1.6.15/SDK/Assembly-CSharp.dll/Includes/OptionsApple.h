#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OptionsApple
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OptionsApple"));
	}

	template <typename T = Il2CppString*> T& httpHeaderJson() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& keyServerURLOverride() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& keyServerAuthToken() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& base64EncodedKeyBlob() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsModified() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetKeyServerURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetKeyServerAuthToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDecryptionKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T IsModified() {
		return ((T (*)(OptionsApple*))(Il2CppBase() + 0x4120AA0))(this);
	}
	template <typename T = Il2CppString*> T GetKeyServerURL() {
		return ((T (*)(OptionsApple*))(Il2CppBase() + 0x4120C8C))(this);
	}
	template <typename T = Il2CppString*> T GetKeyServerAuthToken() {
		return ((T (*)(OptionsApple*))(Il2CppBase() + 0x4120D2C))(this);
	}
	template <typename T = Il2CppString*> T GetDecryptionKey() {
		return ((T (*)(OptionsApple*))(Il2CppBase() + 0x4120DCC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsModified() {
		return ((T (*)(OptionsApple*))(Il2CppBase() + 0x4120E6C))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetKeyServerURL() {
		return ((T (*)(OptionsApple*))(Il2CppBase() + 0x4120E70))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetKeyServerAuthToken() {
		return ((T (*)(OptionsApple*))(Il2CppBase() + 0x4120F14))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetDecryptionKey() {
		return ((T (*)(OptionsApple*))(Il2CppBase() + 0x4120FB8))(this);
	}

};

}
