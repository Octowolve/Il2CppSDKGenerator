#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Apollo {

class ApolloHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Apollo", "ApolloHelper"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsQQPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWeChatPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAppId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAppKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateMD5Hash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T IsQQPlatform() {
		return ((T (*)(ApolloHelper*))(Il2CppBase() + 0x22C9B54))(this);
	}
	template <typename T = bool> T IsWeChatPlatform() {
		return ((T (*)(ApolloHelper*))(Il2CppBase() + 0x22C9C88))(this);
	}
	template <typename T = Il2CppString*> T GetAppId() {
		return ((T (*)(ApolloHelper*))(Il2CppBase() + 0x22C9DBC))(this);
	}
	template <typename T = Il2CppString*> T GetAppKey() {
		return ((T (*)(ApolloHelper*))(Il2CppBase() + 0x22C9F74))(this);
	}
	template <typename T = Il2CppString*> T CreateMD5Hash(Il2CppString* input) {
		return ((T (*)(ApolloHelper*, Il2CppString*))(Il2CppBase() + 0x22CA12C))(this, input);
	}

};

}
