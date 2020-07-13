#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class ItemDescTipsBindData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "ItemDescTipsBindData"));
	}

	template <typename T = int32_t> T& itemId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& position() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_ItemId() {
		return ((T (*)(ItemDescTipsBindData*))(Il2CppBase() + 0x49F1684))(this);
	}
	template <typename T = void> T set_ItemId(int32_t value) {
		return ((T (*)(ItemDescTipsBindData*, int32_t))(Il2CppBase() + 0x49F168C))(this, value);
	}
	template <typename T = Il2CppVector3> T get_worldPosition() {
		return ((T (*)(ItemDescTipsBindData*))(Il2CppBase() + 0x49F1694))(this);
	}
	template <typename T = void> T set_worldPosition(Il2CppVector3 value) {
		return ((T (*)(ItemDescTipsBindData*, Il2CppVector3))(Il2CppBase() + 0x49F16A8))(this, value);
	}

};

}
