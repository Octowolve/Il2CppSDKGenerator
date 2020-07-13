#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ActiviteRewardItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ActiviteRewardItemView"));
	}

	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Get() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& NormalGetBG() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& FinalGetBG() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetInfo(int32_t itemID, int32_t num, int32_t durable, int32_t level, bool isGet, bool isLast) {
		return ((T (*)(ActiviteRewardItemView*, int32_t, int32_t, int32_t, int32_t, bool, bool))(Il2CppBase() + 0x2D62D0C))(this, itemID, num, durable, level, isGet, isLast);
	}

};

}
