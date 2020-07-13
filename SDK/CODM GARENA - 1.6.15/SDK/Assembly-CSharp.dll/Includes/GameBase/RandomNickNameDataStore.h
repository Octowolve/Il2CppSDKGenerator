#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class RandomNickNameDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "RandomNickNameDataStore"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& ANames() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& BNames() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& aRandom() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& bRandom() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRandomName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T GetRandomName() {
		return ((T (*)(RandomNickNameDataStore*))(Il2CppBase() + 0x2DDC1B0))(this);
	}

};

}
