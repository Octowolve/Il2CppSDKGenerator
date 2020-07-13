#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BPProtocalPageData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BPProtocalPageData"));
	}

	template <typename T = uintptr_t> T& ReqType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& CurrentPageIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& MaxPageIndex() {
		return *(T*)((uintptr_t)this + 0x10);
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
		return ((T (*)(BPProtocalPageData*))(Il2CppBase() + 0x2C4886C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BPProtocalPageData*))(Il2CppBase() + 0x2C48928))(this);
	}

};

}
