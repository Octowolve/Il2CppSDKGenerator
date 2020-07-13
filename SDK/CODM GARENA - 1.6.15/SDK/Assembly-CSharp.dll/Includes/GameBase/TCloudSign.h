#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TCloudSign
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TCloudSign"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Signature() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> static T Signature(uintptr_t param, uintptr_t method, Il2CppString* host, Il2CppString* signKey) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x27BA250))(0, param, method, host, signKey);
	}

};

}
