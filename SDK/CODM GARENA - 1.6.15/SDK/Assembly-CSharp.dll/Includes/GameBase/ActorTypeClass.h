#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ActorTypeClass
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ActorTypeClass"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& sActorTypeNameDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEnum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T GetEnum(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3B65F4C))(0, name);
	}
	template <typename T = bool> static T IsValid(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3B6608C))(0, type);
	}

};

}
