#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class OTORewardItemDesc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "OTORewardItemDesc"));
	}

	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Desc() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShowTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ShowTip(int32_t itemId) {
		return ((T (*)(OTORewardItemDesc*, int32_t))(Il2CppBase() + 0x3A8C788))(this, itemId);
	}
	template <typename T = void> T CloseTip() {
		return ((T (*)(OTORewardItemDesc*))(Il2CppBase() + 0x3A8CCC4))(this);
	}
	template <typename T = void> T ShowTip_1(int32_t itemId, Il2CppVector3 pos) {
		return ((T (*)(OTORewardItemDesc*, int32_t, Il2CppVector3))(Il2CppBase() + 0x3A8C864))(this, itemId, pos);
	}

};

}
