#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankTabInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankTabInfo"));
	}

	template <typename T = Il2CppString*> T& typeString() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _tabName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& childTabList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_tabName() {
		return ((T (*)(RankTabInfo*))(Il2CppBase() + 0x38171A0))(this);
	}
	template <typename T = void> T set_tabName(Il2CppString* value) {
		return ((T (*)(RankTabInfo*, Il2CppString*))(Il2CppBase() + 0x38171B0))(this, value);
	}

};

}
