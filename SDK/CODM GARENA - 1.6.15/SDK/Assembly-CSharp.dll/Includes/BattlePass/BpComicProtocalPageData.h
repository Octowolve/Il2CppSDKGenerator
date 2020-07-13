#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BpComicProtocalPageData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BpComicProtocalPageData"));
	}

	template <typename T = int32_t> T& CurrentPageIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& MaxPageIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToBeContinue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T ToBeContinue() {
		return ((T (*)(BpComicProtocalPageData*))(Il2CppBase() + 0x2C45B6C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BpComicProtocalPageData*))(Il2CppBase() + 0x2C45C28))(this);
	}

};

}
