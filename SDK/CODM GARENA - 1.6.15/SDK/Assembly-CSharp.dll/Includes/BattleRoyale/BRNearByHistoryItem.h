#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRNearByHistoryItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRNearByHistoryItem"));
	}

	template <typename T = int32_t> T& ItemId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Param1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& CheckParam1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& CreateTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnRecycle() {
		return ((T (*)(BRNearByHistoryItem*))(Il2CppBase() + 0x1AB27A0))(this);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(BRNearByHistoryItem*))(Il2CppBase() + 0x1AB284C))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(BRNearByHistoryItem*, bool))(Il2CppBase() + 0x1AB2854))(this, value);
	}

};

}
