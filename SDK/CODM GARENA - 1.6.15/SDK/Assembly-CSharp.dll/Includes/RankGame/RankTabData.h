#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankTabData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankTabData"));
	}

	template <typename T = Il2CppString*> T& _tabName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_tabName() {
		return ((T (*)(RankTabData*))(Il2CppBase() + 0x3816EBC))(this);
	}
	template <typename T = void> T set_tabName(Il2CppString* value) {
		return ((T (*)(RankTabData*, Il2CppString*))(Il2CppBase() + 0x3816ECC))(this, value);
	}

};

}
